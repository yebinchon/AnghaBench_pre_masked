
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ArrayParseState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_13, int *VAR_14, char VAR_15)
{
 int VAR_16 = 0,
    VAR_17;
 int VAR_18 = 1,
    VAR_19[VAR_12],
    VAR_20[VAR_12],
    VAR_21[VAR_12];
 bool VAR_22 = 0;
 bool VAR_23 = 0;
 bool VAR_24 = 1;
 const char *VAR_25;
 ArrayParseState VAR_26 = VAR_6;

 for (VAR_17 = 0; VAR_17 < VAR_12; ++VAR_17)
 {
  VAR_19[VAR_17] = VAR_14[VAR_17] = VAR_21[VAR_17] = 0;
  VAR_20[VAR_17] = 1;
 }

 VAR_25 = VAR_13;
 while (!VAR_23)
 {
  bool VAR_27 = 0;

  while (!VAR_27)
  {
   if (VAR_26 == VAR_2 ||
    VAR_26 == VAR_8)
    VAR_24 = 0;

   switch (*VAR_25)
   {
    case '\0':

     FUNC_1(VAR_11,
       (FUNC_2(VAR_9),
        FUNC_4("malformed array literal: \"%s\"", VAR_13),
        FUNC_3("Unexpected end of input.")));
     break;
    case '\\':






     if (VAR_26 != VAR_5 &&
      VAR_26 != VAR_2 &&
      VAR_26 != VAR_8 &&
      VAR_26 != VAR_1)
      FUNC_1(VAR_11,
        (FUNC_2(VAR_9),
         FUNC_4("malformed array literal: \"%s\"", VAR_13),
         FUNC_3("Unexpected \"%c\" character.",
             '\\')));
     if (VAR_26 != VAR_8)
      VAR_26 = VAR_2;

     if (*(VAR_25 + 1))
      VAR_25++;
     else
      FUNC_1(VAR_11,
        (FUNC_2(VAR_9),
         FUNC_4("malformed array literal: \"%s\"", VAR_13),
         FUNC_3("Unexpected end of input.")));
     break;
    case '"':






     if (VAR_26 != VAR_5 &&
      VAR_26 != VAR_8 &&
      VAR_26 != VAR_1)
      FUNC_1(VAR_11,
        (FUNC_2(VAR_9),
         FUNC_4("malformed array literal: \"%s\"", VAR_13),
         FUNC_3("Unexpected array element.")));
     VAR_22 = !VAR_22;
     if (VAR_22)
      VAR_26 = VAR_8;
     else
      VAR_26 = VAR_7;
     break;
    case '{':
     if (!VAR_22)
     {





      if (VAR_26 != VAR_6 &&
       VAR_26 != VAR_5 &&
       VAR_26 != VAR_4)
       FUNC_1(VAR_11,
         (FUNC_2(VAR_9),
          FUNC_4("malformed array literal: \"%s\"", VAR_13),
          FUNC_3("Unexpected \"%c\" character.",
              '{')));
      VAR_26 = VAR_5;
      if (VAR_16 >= VAR_12)
       FUNC_1(VAR_11,
         (FUNC_2(VAR_10),
          FUNC_4("number of array dimensions (%d) exceeds the maximum allowed (%d)",
           VAR_16 + 1, VAR_12)));
      VAR_19[VAR_16] = 0;
      VAR_16++;
      if (VAR_18 < VAR_16)
       VAR_18 = VAR_16;
     }
     break;
    case '}':
     if (!VAR_22)
     {





      if (VAR_26 != VAR_2 &&
       VAR_26 != VAR_0 &&
       VAR_26 != VAR_7 &&
       VAR_26 != VAR_3 &&
       !(VAR_16 == 1 && VAR_26 == VAR_5))
       FUNC_1(VAR_11,
         (FUNC_2(VAR_9),
          FUNC_4("malformed array literal: \"%s\"", VAR_13),
          FUNC_3("Unexpected \"%c\" character.",
              '}')));
      VAR_26 = VAR_3;
      if (VAR_16 == 0)
       FUNC_1(VAR_11,
         (FUNC_2(VAR_9),
          FUNC_4("malformed array literal: \"%s\"", VAR_13),
          FUNC_3("Unmatched \"%c\" character.", '}')));
      VAR_16--;

      if (VAR_21[VAR_16] != 0 &&
       VAR_20[VAR_16] != VAR_21[VAR_16])
       FUNC_1(VAR_11,
         (FUNC_2(VAR_9),
          FUNC_4("malformed array literal: \"%s\"", VAR_13),
          FUNC_3("Multidimensional arrays must have "
              "sub-arrays with matching "
              "dimensions.")));
      VAR_21[VAR_16] = VAR_20[VAR_16];
      VAR_20[VAR_16] = 1;
      if (VAR_16 == 0)
       VAR_23 = VAR_27 = 1;
      else
      {




       VAR_19[VAR_16 - 1]++;
      }
     }
     break;
    default:
     if (!VAR_22)
     {
      if (*VAR_25 == VAR_15)
      {





       if (VAR_26 != VAR_2 &&
        VAR_26 != VAR_0 &&
        VAR_26 != VAR_7 &&
        VAR_26 != VAR_3)
        FUNC_1(VAR_11,
          (FUNC_2(VAR_9),
           FUNC_4("malformed array literal: \"%s\"", VAR_13),
           FUNC_3("Unexpected \"%c\" character.",
               VAR_15)));
       if (VAR_26 == VAR_3)
        VAR_26 = VAR_4;
       else
        VAR_26 = VAR_1;
       VAR_27 = 1;
       VAR_20[VAR_16 - 1]++;
      }
      else if (!FUNC_0(*VAR_25))
      {






       if (VAR_26 != VAR_5 &&
        VAR_26 != VAR_2 &&
        VAR_26 != VAR_1)
        FUNC_1(VAR_11,
          (FUNC_2(VAR_9),
           FUNC_4("malformed array literal: \"%s\"", VAR_13),
           FUNC_3("Unexpected array element.")));
       VAR_26 = VAR_2;
      }
     }
     break;
   }
   if (!VAR_27)
    VAR_25++;
  }
  VAR_19[VAR_18 - 1]++;
  VAR_25++;
 }


 while (*VAR_25)
 {
  if (!FUNC_0(*VAR_25++))
   FUNC_1(VAR_11,
     (FUNC_2(VAR_9),
      FUNC_4("malformed array literal: \"%s\"", VAR_13),
      FUNC_3("Junk after closing right brace.")));
 }


 if (VAR_24)
  return 0;

 for (VAR_17 = 0; VAR_17 < VAR_18; ++VAR_17)
  VAR_14[VAR_17] = VAR_19[VAR_17];

 return VAR_18;
}
