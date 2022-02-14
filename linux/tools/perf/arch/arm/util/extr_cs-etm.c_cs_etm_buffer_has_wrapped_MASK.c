
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;



__attribute__((used)) static bool FUNC_0(unsigned char *VAR_0,
          size_t VAR_1, u64 VAR_2)
{
 u64 VAR_3, VAR_4;
 u64 *VAR_5 = (u64 *)VAR_0;
 size_t VAR_6 = VAR_1;





 VAR_4 = VAR_6 - 512;





 if (VAR_2 >= VAR_1)
  return 1;
 if (VAR_2 > VAR_4)
  VAR_4 = VAR_2;




 VAR_4 >>= 3;
 VAR_6 >>= 3;





 for (VAR_3 = VAR_4; VAR_3 < VAR_6; VAR_3++)
  if (VAR_5[VAR_3])
   return 1;

 return 0;
}
