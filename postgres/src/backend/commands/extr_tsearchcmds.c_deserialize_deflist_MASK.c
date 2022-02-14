
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int Node ;
typedef int List ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (unsigned char) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *,int) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;

List *
FUNC_15(Datum VAR_3)
{
 text *VAR_4 = FUNC_0(VAR_3);
 List *VAR_5 = VAR_2;
 int VAR_6 = FUNC_2(VAR_4);
 char *VAR_7,
      *VAR_8,
      *VAR_9,
      *VAR_10 = ((void*)0),
      *VAR_11 = ((void*)0);
 typedef enum
 {
  CS_WAITKEY,
  CS_INKEY,
  CS_INQKEY,
  CS_WAITEQ,
  CS_WAITVALUE,
  CS_INSQVALUE,
  CS_INDQVALUE,
  CS_INWVALUE
 } ds_state;
 ds_state VAR_12 = CS_WAITKEY;

 VAR_9 = (char *) FUNC_11(VAR_6 + 1);
 VAR_7 = FUNC_1(VAR_4);
 VAR_8 = VAR_7 + VAR_6;
 for (; VAR_7 < VAR_8; VAR_7++)
 {
  switch (VAR_12)
  {
   case CS_WAITKEY:
    if (FUNC_7((unsigned char) *VAR_7) || *VAR_7 == ',')
     continue;
    if (*VAR_7 == '"')
    {
     VAR_10 = VAR_9;
     VAR_12 = CS_INQKEY;
    }
    else
    {
     VAR_10 = VAR_9;
     *VAR_10++ = *VAR_7;
     VAR_12 = CS_INKEY;
    }
    break;
   case CS_INKEY:
    if (FUNC_7((unsigned char) *VAR_7))
    {
     *VAR_10++ = '\0';
     VAR_12 = CS_WAITEQ;
    }
    else if (*VAR_7 == '=')
    {
     *VAR_10++ = '\0';
     VAR_12 = CS_WAITVALUE;
    }
    else
    {
     *VAR_10++ = *VAR_7;
    }
    break;
   case CS_INQKEY:
    if (*VAR_7 == '"')
    {
     if (VAR_7 + 1 < VAR_8 && VAR_7[1] == '"')
     {

      *VAR_10++ = *VAR_7++;
     }
     else
     {
      *VAR_10++ = '\0';
      VAR_12 = CS_WAITEQ;
     }
    }
    else
    {
     *VAR_10++ = *VAR_7;
    }
    break;
   case CS_WAITEQ:
    if (*VAR_7 == '=')
     VAR_12 = CS_WAITVALUE;
    else if (!FUNC_7((unsigned char) *VAR_7))
     FUNC_4(VAR_1,
       (FUNC_5(VAR_0),
        FUNC_6("invalid parameter list format: \"%s\"",
         FUNC_14(VAR_4))));
    break;
   case CS_WAITVALUE:
    if (*VAR_7 == '\'')
    {
     VAR_11 = VAR_10;
     VAR_12 = CS_INSQVALUE;
    }
    else if (*VAR_7 == 'E' && VAR_7 + 1 < VAR_8 && VAR_7[1] == '\'')
    {
     VAR_7++;
     VAR_11 = VAR_10;
     VAR_12 = CS_INSQVALUE;
    }
    else if (*VAR_7 == '"')
    {
     VAR_11 = VAR_10;
     VAR_12 = CS_INDQVALUE;
    }
    else if (!FUNC_7((unsigned char) *VAR_7))
    {
     VAR_11 = VAR_10;
     *VAR_10++ = *VAR_7;
     VAR_12 = CS_INWVALUE;
    }
    break;
   case CS_INSQVALUE:
    if (*VAR_7 == '\'')
    {
     if (VAR_7 + 1 < VAR_8 && VAR_7[1] == '\'')
     {

      *VAR_10++ = *VAR_7++;
     }
     else
     {
      *VAR_10++ = '\0';
      VAR_5 = FUNC_8(VAR_5,
           FUNC_9(FUNC_13(VAR_9),
              (Node *) FUNC_10(FUNC_13(VAR_11)), -1));
      VAR_12 = CS_WAITKEY;
     }
    }
    else if (*VAR_7 == '\\')
    {
     if (VAR_7 + 1 < VAR_8 && VAR_7[1] == '\\')
     {

      *VAR_10++ = *VAR_7++;
     }
     else
      *VAR_10++ = *VAR_7;
    }
    else
    {
     *VAR_10++ = *VAR_7;
    }
    break;
   case CS_INDQVALUE:
    if (*VAR_7 == '"')
    {
     if (VAR_7 + 1 < VAR_8 && VAR_7[1] == '"')
     {

      *VAR_10++ = *VAR_7++;
     }
     else
     {
      *VAR_10++ = '\0';
      VAR_5 = FUNC_8(VAR_5,
           FUNC_9(FUNC_13(VAR_9),
              (Node *) FUNC_10(FUNC_13(VAR_11)), -1));
      VAR_12 = CS_WAITKEY;
     }
    }
    else
    {
     *VAR_10++ = *VAR_7;
    }
    break;
   case CS_INWVALUE:
    if (*VAR_7 == ',' || FUNC_7((unsigned char) *VAR_7))
    {
     *VAR_10++ = '\0';
     VAR_5 = FUNC_8(VAR_5,
          FUNC_9(FUNC_13(VAR_9),
             (Node *) FUNC_10(FUNC_13(VAR_11)), -1));
     VAR_12 = CS_WAITKEY;
    }
    else
    {
     *VAR_10++ = *VAR_7;
    }
    break;
   default:
    FUNC_3(VAR_1, "unrecognized deserialize_deflist state: %d",
      VAR_12);
  }
 }

 if (VAR_12 == CS_INWVALUE)
 {
  *VAR_10++ = '\0';
  VAR_5 = FUNC_8(VAR_5,
       FUNC_9(FUNC_13(VAR_9),
          (Node *) FUNC_10(FUNC_13(VAR_11)), -1));
 }
 else if (VAR_12 != CS_WAITKEY)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("invalid parameter list format: \"%s\"",
      FUNC_14(VAR_4))));

 FUNC_12(VAR_9);

 return VAR_5;
}
