
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int const*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __be32 *FUNC_1(__be32 *VAR_2, const __be32 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = 0;
 while (*VAR_2++ != VAR_1) {
  VAR_2 = FUNC_0(VAR_2, VAR_3, VAR_0);
  if (!VAR_2)
   return ((void*)0);
  if (VAR_4++ > 1)
   return ((void*)0);
 }
 return VAR_2;
}
