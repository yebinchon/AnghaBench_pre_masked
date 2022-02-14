
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfpkt {int dummy; } ;
struct cfctrl {int* loop_linkused; int loop_linkid_lock; } ;




 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,int*,int) ;
 int FUNC_1 (struct cfpkt*,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cfctrl *VAR_1, int VAR_2, struct cfpkt *VAR_3)
{
 static int VAR_4;
 static int VAR_5;
 u8 VAR_6, VAR_7, VAR_8;
 switch (VAR_2) {
 case 128:
  FUNC_2(&VAR_1->loop_linkid_lock);
  if (!VAR_5) {
   for (VAR_6 = VAR_4 + 1; VAR_6 < 254; VAR_6++)
    if (!VAR_1->loop_linkused[VAR_6])
     goto found;
  }
  VAR_5 = 1;
  for (VAR_6 = VAR_4 - 1; VAR_6 > 1; VAR_6--)
   if (!VAR_1->loop_linkused[VAR_6])
    goto found;
  FUNC_3(&VAR_1->loop_linkid_lock);
  return -1;
found:
  if (VAR_6 < 10)
   VAR_5 = 0;

  if (!VAR_1->loop_linkused[VAR_6])
   VAR_1->loop_linkused[VAR_6] = 1;

  VAR_4 = VAR_6;

  FUNC_0(VAR_3, &VAR_6, 1);
  FUNC_3(&VAR_1->loop_linkid_lock);
  FUNC_1(VAR_3, &VAR_7, 1);
  if (VAR_7 == VAR_0) {
   VAR_8 = 0x01;
   FUNC_0(VAR_3, &VAR_8, 1);
   FUNC_0(VAR_3, &VAR_8, 1);
  }
  break;

 case 129:
  FUNC_2(&VAR_1->loop_linkid_lock);
  FUNC_1(VAR_3, &VAR_6, 1);
  VAR_1->loop_linkused[VAR_6] = 0;
  FUNC_3(&VAR_1->loop_linkid_lock);
  break;
 default:
  break;
 }
 return 0;
}
