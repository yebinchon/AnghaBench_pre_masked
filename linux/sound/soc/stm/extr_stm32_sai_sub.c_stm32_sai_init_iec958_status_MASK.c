
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* status; } ;
struct stm32_sai_sub_data {TYPE_1__ iec958; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;

__attribute__((used)) static void FUNC_0(struct stm32_sai_sub_data *VAR_7)
{
 unsigned char *VAR_8 = VAR_7->iec958.status;

 VAR_8[0] = VAR_1 | VAR_0;
 VAR_8[1] = VAR_2;
 VAR_8[2] = VAR_4 | VAR_3;
 VAR_8[3] = VAR_5 | VAR_6;
}
