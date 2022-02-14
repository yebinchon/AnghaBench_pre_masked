
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(double VAR_5)
{
 union {double f; uint64_t i;} VAR_6 = {VAR_5};
 int VAR_7 = VAR_6.i>>52 & 0x7ff;
 if (!VAR_7) return VAR_6.i<<1 ? VAR_3 : VAR_4;
 if (VAR_7==0x7ff) return VAR_6.i<<12 ? VAR_1 : VAR_0;
 return VAR_2;
}
