
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct TYPE_4__ {void* m; } ;
struct ip17xx_state {TYPE_2__ proc_mii; } ;


 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_0, const struct switch_attr *VAR_1, struct switch_val *VAR_2)
{
 struct ip17xx_state *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_2->value.i;

 if (VAR_4 < 0 || VAR_4 > 31)
  VAR_3->proc_mii.m = (u16)-1;
 else
  VAR_3->proc_mii.m = (u16)VAR_4;
 return 0;
}
