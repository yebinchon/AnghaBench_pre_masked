
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_ull ;
typedef int timelib_sll ;



__attribute__((used)) static timelib_sll FUNC_0(timelib_ull VAR_0, timelib_ull VAR_1, timelib_ull VAR_2)
{
 timelib_sll VAR_3 = 0;

 VAR_3 += VAR_0 * 3600;
 VAR_3 += VAR_1 * 60;
 VAR_3 += VAR_2;
 return VAR_3;
}
