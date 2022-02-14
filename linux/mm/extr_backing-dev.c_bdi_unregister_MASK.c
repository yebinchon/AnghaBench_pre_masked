
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int * owner; int * dev; int wb; } ;


 int FUNC_0 (struct backing_dev_info*) ;
 int FUNC_1 (struct backing_dev_info*) ;
 int FUNC_2 (struct backing_dev_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct backing_dev_info *VAR_0)
{

 FUNC_1(VAR_0);
 FUNC_5(&VAR_0->wb);
 FUNC_2(VAR_0);

 if (VAR_0->dev) {
  FUNC_0(VAR_0);
  FUNC_3(VAR_0->dev);
  VAR_0->dev = ((void*)0);
 }

 if (VAR_0->owner) {
  FUNC_4(VAR_0->owner);
  VAR_0->owner = ((void*)0);
 }
}
