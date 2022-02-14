
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_vcc {int dummy; } ;
struct TYPE_2__ {int encap; } ;


 TYPE_1__* FUNC_0 (struct atm_vcc*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct atm_vcc *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_1))
  return -VAR_0;

 FUNC_0(VAR_1)->encap = VAR_2;
 return 0;
}
