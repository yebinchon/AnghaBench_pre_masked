
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {TYPE_1__* ktype; } ;
typedef int kuid_t ;
typedef int kgid_t ;
struct TYPE_2__ {int (* get_ownership ) (struct kobject*,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kobject*,int *,int *) ;

void FUNC_1(struct kobject *VAR_2, kuid_t *VAR_3, kgid_t *VAR_4)
{
 *VAR_3 = VAR_1;
 *VAR_4 = VAR_0;

 if (VAR_2->ktype->get_ownership)
  VAR_2->ktype->get_ownership(VAR_2, VAR_3, VAR_4);
}
