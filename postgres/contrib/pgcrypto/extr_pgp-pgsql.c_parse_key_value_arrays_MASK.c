
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Datum ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int,char,int **,int**,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(ArrayType *VAR_5, ArrayType *VAR_6,
        char ***VAR_7, char ***VAR_8)
{
 int VAR_9 = FUNC_0(VAR_5);
 int VAR_10 = FUNC_0(VAR_6);
 char **VAR_11,
     **VAR_12;
 Datum *VAR_13,
      *VAR_14;
 bool *VAR_15,
      *VAR_16;
 int VAR_17,
    VAR_18;
 int VAR_19;

 if (VAR_9 > 1 || VAR_9 != VAR_10)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_0),
     FUNC_5("wrong number of array subscripts")));
 if (VAR_9 == 0)
  return 0;

 FUNC_2(VAR_5,
       VAR_4, -1, 0, 'i',
       &VAR_13, &VAR_15, &VAR_17);

 FUNC_2(VAR_6,
       VAR_4, -1, 0, 'i',
       &VAR_14, &VAR_16, &VAR_18);

 if (VAR_17 != VAR_18)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_0),
     FUNC_5("mismatched array dimensions")));

 VAR_11 = (char **) FUNC_6(sizeof(char *) * VAR_17);
 VAR_12 = (char **) FUNC_6(sizeof(char *) * VAR_18);

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++)
 {
  char *VAR_20;


  if (VAR_15[VAR_19])
   FUNC_3(VAR_3,
     (FUNC_4(VAR_2),
      FUNC_5("null value not allowed for header key")));

  VAR_20 = FUNC_1(VAR_13[VAR_19]);

  if (!FUNC_8(VAR_20))
   FUNC_3(VAR_3,
     (FUNC_4(VAR_1),
      FUNC_5("header key must not contain non-ASCII characters")));
  if (FUNC_9(VAR_20, ": "))
   FUNC_3(VAR_3,
     (FUNC_4(VAR_1),
      FUNC_5("header key must not contain \": \"")));
  if (FUNC_7(VAR_20, '\n'))
   FUNC_3(VAR_3,
     (FUNC_4(VAR_1),
      FUNC_5("header key must not contain newlines")));
  VAR_11[VAR_19] = VAR_20;


  if (VAR_16[VAR_19])
   FUNC_3(VAR_3,
     (FUNC_4(VAR_2),
      FUNC_5("null value not allowed for header value")));

  VAR_20 = FUNC_1(VAR_14[VAR_19]);

  if (!FUNC_8(VAR_20))
   FUNC_3(VAR_3,
     (FUNC_4(VAR_1),
      FUNC_5("header value must not contain non-ASCII characters")));
  if (FUNC_7(VAR_20, '\n'))
   FUNC_3(VAR_3,
     (FUNC_4(VAR_1),
      FUNC_5("header value must not contain newlines")));

  VAR_12[VAR_19] = VAR_20;
 }

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;
 return VAR_17;
}
