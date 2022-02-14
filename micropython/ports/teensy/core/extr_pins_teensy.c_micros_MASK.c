
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;

uint32_t FUNC_2(void)
{
 uint32_t VAR_5, VAR_6, VAR_7;

 FUNC_0();
 VAR_6 = VAR_3;
 VAR_5 = VAR_4;
 VAR_7 = VAR_1;
 FUNC_1();



 if ((VAR_7 & VAR_2) && VAR_6 > 50) VAR_5++;
 VAR_6 = ((VAR_0 / 1000) - 1) - VAR_6;
 return VAR_5 * 1000 + VAR_6 / (VAR_0 / 1000000);
}
