
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __be32 ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(__be32 *VAR_2,
          __be32 **VAR_3, __be32 **VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = VAR_2 + VAR_0;


 while (*VAR_5++ != VAR_1)
  VAR_5 += 5;


 if (*VAR_5 != VAR_1) {
  *VAR_3 = VAR_5;
  while (*VAR_5++ != VAR_1)
   VAR_5 += 1 + FUNC_0(*VAR_5) * 4;
 } else {
  *VAR_3 = ((void*)0);
  VAR_5++;
 }


 if (*VAR_5 != VAR_1)
  *VAR_4 = VAR_5;
 else
  *VAR_4 = ((void*)0);
}
