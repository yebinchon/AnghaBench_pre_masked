
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long zic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int* VAR_5 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 long* VAR_9 ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(zic_t VAR_10, char const *VAR_11, bool VAR_12, bool VAR_13, bool VAR_14)
{
 int VAR_15,
    VAR_16;

 if (!(-1L - 2147483647L <= VAR_10 && VAR_10 <= 2147483647L))
 {
  FUNC_1(FUNC_0("UT offset out of range"));
  FUNC_2(VAR_0);
 }
 if (!FUNC_5())
  VAR_13 = VAR_14 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_2; ++VAR_16)
  if (FUNC_4(&VAR_3[VAR_16], VAR_11) == 0)
   break;
 if (VAR_16 == VAR_2)
  FUNC_3(VAR_11);
 else
 {

  for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
   if (VAR_10 == VAR_9[VAR_15] && VAR_12 == VAR_5[VAR_15] && VAR_16 == VAR_4[VAR_15]
    && VAR_13 == VAR_6[VAR_15] && VAR_14 == VAR_7[VAR_15])
    return VAR_15;
 }




 if (VAR_8 >= VAR_1)
 {
  FUNC_1(FUNC_0("too many local time types"));
  FUNC_2(VAR_0);
 }
 VAR_15 = VAR_8++;
 VAR_9[VAR_15] = VAR_10;
 VAR_5[VAR_15] = VAR_12;
 VAR_6[VAR_15] = VAR_13;
 VAR_7[VAR_15] = VAR_14;
 VAR_4[VAR_15] = VAR_16;
 return VAR_15;
}
