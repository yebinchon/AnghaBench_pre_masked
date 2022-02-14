
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* FUNC_1 (int *,int*) ;
 int * FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(pg_wchar VAR_7, pg_wchar **VAR_8, int *VAR_9)
{
 pg_unicode_decomposition *VAR_10;
 int VAR_11;
 const uint32 *VAR_12;
 int VAR_13;







 if (VAR_7 >= VAR_1 && VAR_7 < VAR_1 + VAR_2)
 {
  uint32 VAR_14,
     VAR_15,
     VAR_16,
     VAR_17;
  pg_wchar *VAR_18 = *VAR_8;

  VAR_17 = VAR_7 - VAR_1;
  VAR_14 = VAR_0 + VAR_17 / (VAR_6 * VAR_4);
  VAR_15 = VAR_5 + (VAR_17 % (VAR_6 * VAR_4)) / VAR_4;
  VAR_16 = VAR_17 % VAR_4;

  VAR_18[*VAR_9] = VAR_14;
  (*VAR_9)++;
  VAR_18[*VAR_9] = VAR_15;
  (*VAR_9)++;

  if (VAR_16 != 0)
  {
   VAR_18[*VAR_9] = VAR_3 + VAR_16;
   (*VAR_9)++;
  }

  return;
 }

 VAR_10 = FUNC_2(VAR_7);







 if (VAR_10 == ((void*)0) || FUNC_0(VAR_10) == 0)
 {
  pg_wchar *VAR_19 = *VAR_8;

  VAR_19[*VAR_9] = VAR_7;
  (*VAR_9)++;
  return;
 }




 VAR_12 = FUNC_1(VAR_10, &VAR_13);
 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
 {
  pg_wchar VAR_20 = (pg_wchar) VAR_12[VAR_11];


  FUNC_3(VAR_20, VAR_8, VAR_9);
 }
}
