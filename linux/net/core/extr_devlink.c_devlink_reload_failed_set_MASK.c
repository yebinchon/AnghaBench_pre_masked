
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int reload_failed; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,int ) ;

__attribute__((used)) static void FUNC_1(struct devlink *VAR_1,
          bool VAR_2)
{
 if (VAR_1->reload_failed == VAR_2)
  return;
 VAR_1->reload_failed = VAR_2;
 FUNC_0(VAR_1, VAR_0);
}
