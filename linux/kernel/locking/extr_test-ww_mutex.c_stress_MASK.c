
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_mutex {int dummy; } ;
struct stress {int nlocks; int work; scalar_t__ timeout; struct ww_mutex* locks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct ww_mutex*) ;
 struct stress* FUNC_3 (int,int ) ;
 struct ww_mutex* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ,int *) ;
 void FUNC_6 (struct work_struct*) ;
 void FUNC_7 (struct work_struct*) ;
 void FUNC_8 (struct work_struct*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct ww_mutex*) ;
 int FUNC_10 (struct ww_mutex*,int *) ;

__attribute__((used)) static int FUNC_11(int VAR_9, int VAR_10, unsigned int VAR_11)
{
 struct ww_mutex *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_9, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  FUNC_10(&VAR_12[VAR_13], &VAR_8);

 for (VAR_13 = 0; VAR_10; VAR_13++) {
  struct stress *VAR_14;
  void (*VAR_15)(struct work_struct *VAR_16);

  VAR_15 = ((void*)0);
  switch (VAR_13 & 3) {
  case 0:
   if (VAR_11 & VAR_3)
    VAR_15 = FUNC_6;
   break;
  case 1:
   if (VAR_11 & VAR_5)
    VAR_15 = FUNC_8;
   break;
  case 2:
   if (VAR_11 & VAR_4)
    VAR_15 = FUNC_7;
   break;
  }

  if (!VAR_15)
   continue;

  VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_1);
  if (!VAR_14)
   break;

  FUNC_0(&VAR_14->work, VAR_15);
  VAR_14->locks = VAR_12;
  VAR_14->nlocks = VAR_9;
  VAR_14->timeout = VAR_6 + 2*VAR_2;

  FUNC_5(VAR_7, &VAR_14->work);
  VAR_10--;
 }

 FUNC_1(VAR_7);

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  FUNC_9(&VAR_12[VAR_13]);
 FUNC_2(VAR_12);

 return 0;
}
