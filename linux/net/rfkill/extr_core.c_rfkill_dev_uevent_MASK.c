
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rfkill {size_t type; int lock; int state; int name; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct rfkill* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct rfkill *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, "RFKILL_NAME=%s", VAR_3->name);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_2, "RFKILL_TYPE=%s",
          VAR_0[VAR_3->type]);
 if (VAR_6)
  return VAR_6;
 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = VAR_3->state;
 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_6 = FUNC_0(VAR_2, "RFKILL_STATE=%d",
          FUNC_4(VAR_5));
 return VAR_6;
}
