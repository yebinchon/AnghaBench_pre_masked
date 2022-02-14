
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(char *VAR_0, size_t VAR_1)
{
 uint32_t VAR_2 = 0;
 char *VAR_3 = VAR_0 + VAR_1;

 while (VAR_0 != VAR_3) {
  VAR_2 += (unsigned char)*VAR_0;
  ++VAR_0;
 }
 return VAR_2;
}
