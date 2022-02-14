
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;
typedef int uint32 ;


 char* FUNC_0 (int) ;

__attribute__((used)) static uint8 *
FUNC_1(uint8 * VAR_0, uint32 * VAR_1)
{
 uint8 *VAR_2, *VAR_3, *VAR_4;


 VAR_2 = FUNC_0(*VAR_1 * 2);

 VAR_3 = VAR_0;
 VAR_4 = VAR_2;

 while (VAR_3 < VAR_0 + *VAR_1)
 {
  if (*VAR_3 == '\x0a')
   *VAR_4++ = '\x0d';
  *VAR_4++ = *VAR_3++;
 }
 *VAR_1 = VAR_4 - VAR_2;


 *VAR_4++ = '\0';

 return VAR_2;
}
