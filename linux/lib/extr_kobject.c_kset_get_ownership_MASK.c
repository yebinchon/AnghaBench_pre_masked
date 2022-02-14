
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {scalar_t__ parent; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int FUNC_0 (scalar_t__,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kobject *VAR_0, kuid_t *VAR_1, kgid_t *VAR_2)
{
 if (VAR_0->parent)
  FUNC_0(VAR_0->parent, VAR_1, VAR_2);
}
