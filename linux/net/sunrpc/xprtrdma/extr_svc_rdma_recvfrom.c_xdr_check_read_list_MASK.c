
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int const __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32 *FUNC_1(__be32 *VAR_2, const __be32 *VAR_3)
{
 u32 VAR_4;
 bool VAR_5;

 VAR_5 = 1;
 while (*VAR_2++ != VAR_1) {
  if (VAR_5) {
   VAR_4 = FUNC_0(VAR_2++);
   VAR_5 = 0;
  } else if (FUNC_0(VAR_2++) != VAR_4) {
   return ((void*)0);
  }
  VAR_2++;
  if (FUNC_0(VAR_2++) > VAR_0)
   return ((void*)0);
  VAR_2 += 2;

  if (VAR_2 > VAR_3)
   return ((void*)0);
 }
 return VAR_2;
}
