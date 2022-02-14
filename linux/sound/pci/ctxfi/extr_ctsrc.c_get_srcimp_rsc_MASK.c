
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srcimp_mgr {int mgr_lock; int mgr; TYPE_1__* card; } ;
struct srcimp_desc {int msr; } ;
struct srcimp {unsigned int* idx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct srcimp*) ;
 struct srcimp* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int,unsigned int*) ;
 int FUNC_4 (int *,int,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct srcimp*,struct srcimp_desc const*,struct srcimp_mgr*) ;

__attribute__((used)) static int FUNC_8(struct srcimp_mgr *VAR_2,
     const struct srcimp_desc *VAR_3,
     struct srcimp **VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7;
 struct srcimp *VAR_8;
 unsigned long VAR_9;

 *VAR_4 = ((void*)0);


 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_5 = 0;
 FUNC_5(&VAR_2->mgr_lock, VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_3->msr; VAR_6++) {
  VAR_5 = FUNC_3(&VAR_2->mgr, 1, &VAR_7);
  if (VAR_5)
   break;

  VAR_8->idx[VAR_6] = VAR_7;
 }
 FUNC_6(&VAR_2->mgr_lock, VAR_9);
 if (VAR_5) {
  FUNC_0(VAR_2->card->dev,
   "Can't meet SRCIMP resource request!\n");
  goto error1;
 }

 VAR_5 = FUNC_7(VAR_8, VAR_3, VAR_2);
 if (VAR_5)
  goto error1;

 *VAR_4 = VAR_8;

 return 0;

error1:
 FUNC_5(&VAR_2->mgr_lock, VAR_9);
 for (VAR_6--; VAR_6 >= 0; VAR_6--)
  FUNC_4(&VAR_2->mgr, 1, VAR_8->idx[VAR_6]);

 FUNC_6(&VAR_2->mgr_lock, VAR_9);
 FUNC_1(VAR_8);
 return VAR_5;
}
