
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int input_length; char* token_start; char* input; char* token_terminator; char* prev_token_terminator; int * strval; } ;
typedef TYPE_1__ JsonLexContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (char*,char) ;
 int FUNC_15 (int,unsigned char*) ;

__attribute__((used)) static inline void
FUNC_16(JsonLexContext *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 int VAR_7 = -1;

 if (VAR_4->strval != ((void*)0))
  FUNC_13(VAR_4->strval);

 FUNC_0(VAR_4->input_length > 0);
 VAR_5 = VAR_4->token_start;
 VAR_6 = VAR_4->token_start - VAR_4->input;
 for (;;)
 {
  VAR_5++;
  VAR_6++;

  if (VAR_6 >= VAR_4->input_length)
  {
   VAR_4->token_terminator = VAR_5;
   FUNC_11(VAR_4);
  }
  else if (*VAR_5 == '"')
   break;
  else if ((unsigned char) *VAR_5 < 32)
  {


   VAR_4->token_terminator = VAR_5;
   FUNC_4(VAR_2,
     (FUNC_5(VAR_0),
      FUNC_7("invalid input syntax for type %s", "json"),
      FUNC_6("Character with value 0x%02x must be escaped.",
          (unsigned char) *VAR_5),
      FUNC_12(VAR_4)));
  }
  else if (*VAR_5 == '\\')
  {

   VAR_5++;
   VAR_6++;
   if (VAR_6 >= VAR_4->input_length)
   {
    VAR_4->token_terminator = VAR_5;
    FUNC_11(VAR_4);
   }
   else if (*VAR_5 == 'u')
   {
    int VAR_8;
    int VAR_9 = 0;

    for (VAR_8 = 1; VAR_8 <= 4; VAR_8++)
    {
     VAR_5++;
     VAR_6++;
     if (VAR_6 >= VAR_4->input_length)
     {
      VAR_4->token_terminator = VAR_5;
      FUNC_11(VAR_4);
     }
     else if (*VAR_5 >= '0' && *VAR_5 <= '9')
      VAR_9 = (VAR_9 * 16) + (*VAR_5 - '0');
     else if (*VAR_5 >= 'a' && *VAR_5 <= 'f')
      VAR_9 = (VAR_9 * 16) + (*VAR_5 - 'a') + 10;
     else if (*VAR_5 >= 'A' && *VAR_5 <= 'F')
      VAR_9 = (VAR_9 * 16) + (*VAR_5 - 'A') + 10;
     else
     {
      VAR_4->token_terminator = VAR_5 + FUNC_9(VAR_5);
      FUNC_4(VAR_2,
        (FUNC_5(VAR_0),
         FUNC_7("invalid input syntax for type %s",
          "json"),
         FUNC_6("\"\\u\" must be followed by four hexadecimal digits."),
         FUNC_12(VAR_4)));
     }
    }
    if (VAR_4->strval != ((void*)0))
    {
     char VAR_10[5];
     int VAR_11;

     if (VAR_9 >= 0xd800 && VAR_9 <= 0xdbff)
     {
      if (VAR_7 != -1)
       FUNC_4(VAR_2,
         (FUNC_5(VAR_0),
          FUNC_7("invalid input syntax for type %s",
           "json"),
          FUNC_6("Unicode high surrogate must not follow a high surrogate."),
          FUNC_12(VAR_4)));
      VAR_7 = (VAR_9 & 0x3ff) << 10;
      continue;
     }
     else if (VAR_9 >= 0xdc00 && VAR_9 <= 0xdfff)
     {
      if (VAR_7 == -1)
       FUNC_4(VAR_2,
         (FUNC_5(VAR_0),
          FUNC_7("invalid input syntax for type %s", "json"),
          FUNC_6("Unicode low surrogate must follow a high surrogate."),
          FUNC_12(VAR_4)));
      VAR_9 = 0x10000 + VAR_7 + (VAR_9 & 0x3ff);
      VAR_7 = -1;
     }

     if (VAR_7 != -1)
      FUNC_4(VAR_2,
        (FUNC_5(VAR_0),
         FUNC_7("invalid input syntax for type %s", "json"),
         FUNC_6("Unicode low surrogate must follow a high surrogate."),
         FUNC_12(VAR_4)));
     if (VAR_9 == 0)
     {

      FUNC_4(VAR_2,
        (FUNC_5(VAR_1),
         FUNC_7("unsupported Unicode escape sequence"),
         FUNC_6("\\u0000 cannot be converted to text."),
         FUNC_12(VAR_4)));
     }
     else if (FUNC_1() == VAR_3)
     {
      FUNC_15(VAR_9, (unsigned char *) VAR_10);
      VAR_11 = FUNC_10((unsigned char *) VAR_10);
      FUNC_2(VAR_4->strval, VAR_10, VAR_11);
     }
     else if (VAR_9 <= 0x007f)
     {





      FUNC_3(VAR_4->strval, (char) VAR_9);
     }
     else
     {
      FUNC_4(VAR_2,
        (FUNC_5(VAR_1),
         FUNC_7("unsupported Unicode escape sequence"),
         FUNC_6("Unicode escape values cannot be used for code point values above 007F when the server encoding is not UTF8."),
         FUNC_12(VAR_4)));
     }

    }
   }
   else if (VAR_4->strval != ((void*)0))
   {
    if (VAR_7 != -1)
     FUNC_4(VAR_2,
       (FUNC_5(VAR_0),
        FUNC_7("invalid input syntax for type %s",
         "json"),
        FUNC_6("Unicode low surrogate must follow a high surrogate."),
        FUNC_12(VAR_4)));

    switch (*VAR_5)
    {
     case '"':
     case '\\':
     case '/':
      FUNC_3(VAR_4->strval, *VAR_5);
      break;
     case 'b':
      FUNC_3(VAR_4->strval, '\b');
      break;
     case 'f':
      FUNC_3(VAR_4->strval, '\f');
      break;
     case 'n':
      FUNC_3(VAR_4->strval, '\n');
      break;
     case 'r':
      FUNC_3(VAR_4->strval, '\r');
      break;
     case 't':
      FUNC_3(VAR_4->strval, '\t');
      break;
     default:

      VAR_4->token_terminator = VAR_5 + FUNC_9(VAR_5);
      FUNC_4(VAR_2,
        (FUNC_5(VAR_0),
         FUNC_7("invalid input syntax for type %s",
          "json"),
         FUNC_6("Escape sequence \"\\%s\" is invalid.",
             FUNC_8(VAR_5)),
         FUNC_12(VAR_4)));
    }
   }
   else if (FUNC_14("\"\\/bfnrt", *VAR_5) == ((void*)0))
   {







    VAR_4->token_terminator = VAR_5 + FUNC_9(VAR_5);
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),
       FUNC_7("invalid input syntax for type %s", "json"),
       FUNC_6("Escape sequence \"\\%s\" is invalid.",
           FUNC_8(VAR_5)),
       FUNC_12(VAR_4)));
   }

  }
  else if (VAR_4->strval != ((void*)0))
  {
   if (VAR_7 != -1)
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),
       FUNC_7("invalid input syntax for type %s", "json"),
       FUNC_6("Unicode low surrogate must follow a high surrogate."),
       FUNC_12(VAR_4)));

   FUNC_3(VAR_4->strval, *VAR_5);
  }

 }

 if (VAR_7 != -1)
  FUNC_4(VAR_2,
    (FUNC_5(VAR_0),
     FUNC_7("invalid input syntax for type %s", "json"),
     FUNC_6("Unicode low surrogate must follow a high surrogate."),
     FUNC_12(VAR_4)));


 VAR_4->prev_token_terminator = VAR_4->token_terminator;
 VAR_4->token_terminator = VAR_5 + 1;
}
