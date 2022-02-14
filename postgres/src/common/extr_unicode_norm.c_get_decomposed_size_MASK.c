
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ pg_wchar ;
typedef int pg_unicode_decomposition ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_1 (int *,int*) ;
 int * FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(pg_wchar VAR_3)
{
 pg_unicode_decomposition *VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 const uint32 *VAR_7;
 int VAR_8;







 if (VAR_3 >= VAR_0 && VAR_3 < VAR_0 + VAR_1)
 {
  uint32 VAR_9,
     VAR_10;

  VAR_10 = VAR_3 - VAR_0;
  VAR_9 = VAR_10 % VAR_2;

  if (VAR_9 != 0)
   return 3;
  return 2;
 }

 VAR_4 = FUNC_2(VAR_3);





 if (VAR_4 == ((void*)0) || FUNC_0(VAR_4) == 0)
  return 1;





 VAR_7 = FUNC_1(VAR_4, &VAR_8);
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
 {
  uint32 VAR_11 = VAR_7[VAR_6];

  VAR_5 += FUNC_3(VAR_11);
 }

 return VAR_5;
}
