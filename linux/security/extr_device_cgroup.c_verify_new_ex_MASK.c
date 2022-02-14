
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_exception_item {int access; int minor; int major; int type; } ;
struct dev_cgroup {scalar_t__ behavior; int exceptions; } ;
typedef enum devcg_behavior { ____Placeholder_devcg_behavior } devcg_behavior ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(struct dev_cgroup *VAR_2,
            struct dev_exception_item *VAR_3,
            enum devcg_behavior VAR_4)
{
 bool VAR_5 = 0;

 FUNC_0(!FUNC_4() &&
    !FUNC_1(&VAR_1),
    "device_cgroup:verify_new_ex called without proper synchronization");

 if (VAR_2->behavior == VAR_0) {
  if (VAR_4 == VAR_0) {




   return 1;
  } else {





   VAR_5 = FUNC_3(&VAR_2->exceptions,
       VAR_3->type,
       VAR_3->major,
       VAR_3->minor,
       VAR_3->access);

   if (VAR_5)
    return 0;
   return 1;
  }
 } else {






  VAR_5 = FUNC_2(&VAR_2->exceptions, VAR_3->type,
     VAR_3->major, VAR_3->minor,
     VAR_3->access);

  if (VAR_5)

   return 1;
  else
   return 0;
 }
 return 0;
}
