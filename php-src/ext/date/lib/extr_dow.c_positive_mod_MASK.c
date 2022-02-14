
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;



__attribute__((used)) static timelib_sll FUNC_0(timelib_sll VAR_0, timelib_sll VAR_1)
{
 timelib_sll VAR_2;

 VAR_2 = VAR_0 % VAR_1;
 if (VAR_2 < 0) {
  VAR_2 += VAR_1;
 }

 return VAR_2;
}
