
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(float VAR_5)
{
 union {float f; uint32_t i;} VAR_6 = {VAR_5};
 int VAR_7 = VAR_6.i>>23 & 0xff;
 if (!VAR_7) return VAR_6.i<<1 ? VAR_3 : VAR_4;
 if (VAR_7==0xff) return VAR_6.i<<9 ? VAR_1 : VAR_0;
 return VAR_2;
}
