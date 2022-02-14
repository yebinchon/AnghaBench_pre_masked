
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wProcessorArchitecture; int member_0; } ;
typedef TYPE_1__ SYSTEM_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;





int FUNC_1(void)
{
 SYSTEM_INFO VAR_4 = { 0 };
 FUNC_0(&VAR_4);
 switch (VAR_4.wProcessorArchitecture) {
 case 131:
  return VAR_3;
 case 128:
  return VAR_3;
 case 129:
  return VAR_1;
 case 130:
  return VAR_0;
 default:
  return VAR_2;
 }
}
