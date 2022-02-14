
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int const __be32 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static __be32 *FUNC_1(__be32 *VAR_0, const __be32 *VAR_1,
         u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_0++);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_0++;
  if (FUNC_0(VAR_0++) > VAR_2)
   return ((void*)0);
  VAR_0 += 2;

  if (VAR_0 > VAR_1)
   return ((void*)0);
 }

 return VAR_0;
}
