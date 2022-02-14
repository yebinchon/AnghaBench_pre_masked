
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* token_terminator; char* input; int input_length; char* token_start; char* prev_token_terminator; void* token_type; int line_number; } ;
typedef TYPE_1__ JsonLexContext ;


 int FUNC_0 (char) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_5(JsonLexContext *VAR_12)
{
 char *VAR_13;
 int VAR_14;


 VAR_13 = VAR_12->token_terminator;
 VAR_14 = VAR_13 - VAR_12->input;
 while (VAR_14 < VAR_12->input_length &&
     (*VAR_13 == ' ' || *VAR_13 == '\t' || *VAR_13 == '\n' || *VAR_13 == '\r'))
 {
  if (*VAR_13 == '\n')
   ++VAR_12->line_number;
  ++VAR_13;
  ++VAR_14;
 }
 VAR_12->token_start = VAR_13;


 if (VAR_14 >= VAR_12->input_length)
 {
  VAR_12->token_start = ((void*)0);
  VAR_12->prev_token_terminator = VAR_12->token_terminator;
  VAR_12->token_terminator = VAR_13;
  VAR_12->token_type = VAR_4;
 }
 else
  switch (*VAR_13)
  {

   case '{':
    VAR_12->prev_token_terminator = VAR_12->token_terminator;
    VAR_12->token_terminator = VAR_13 + 1;
    VAR_12->token_type = VAR_9;
    break;
   case '}':
    VAR_12->prev_token_terminator = VAR_12->token_terminator;
    VAR_12->token_terminator = VAR_13 + 1;
    VAR_12->token_type = VAR_8;
    break;
   case '[':
    VAR_12->prev_token_terminator = VAR_12->token_terminator;
    VAR_12->token_terminator = VAR_13 + 1;
    VAR_12->token_type = VAR_1;
    break;
   case ']':
    VAR_12->prev_token_terminator = VAR_12->token_terminator;
    VAR_12->token_terminator = VAR_13 + 1;
    VAR_12->token_type = VAR_0;
    break;
   case ',':
    VAR_12->prev_token_terminator = VAR_12->token_terminator;
    VAR_12->token_terminator = VAR_13 + 1;
    VAR_12->token_type = VAR_3;
    break;
   case ':':
    VAR_12->prev_token_terminator = VAR_12->token_terminator;
    VAR_12->token_terminator = VAR_13 + 1;
    VAR_12->token_type = VAR_2;
    break;
   case '"':

    FUNC_2(VAR_12);
    VAR_12->token_type = VAR_10;
    break;
   case '-':

    FUNC_1(VAR_12, VAR_13 + 1, ((void*)0), ((void*)0));
    VAR_12->token_type = VAR_7;
    break;
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
   case '8':
   case '9':

    FUNC_1(VAR_12, VAR_13, ((void*)0), ((void*)0));
    VAR_12->token_type = VAR_7;
    break;
   default:
    {
     char *VAR_15;
     for (VAR_15 = VAR_13; VAR_15 - VAR_13 < VAR_12->input_length - VAR_14 && FUNC_0(*VAR_15); VAR_15++)
                  ;






     if (VAR_15 == VAR_13)
     {
      VAR_12->prev_token_terminator = VAR_12->token_terminator;
      VAR_12->token_terminator = VAR_13 + 1;
      FUNC_4(VAR_12);
     }






     VAR_12->prev_token_terminator = VAR_12->token_terminator;
     VAR_12->token_terminator = VAR_15;
     if (VAR_15 - VAR_13 == 4)
     {
      if (FUNC_3(VAR_13, "true", 4) == 0)
       VAR_12->token_type = VAR_11;
      else if (FUNC_3(VAR_13, "null", 4) == 0)
       VAR_12->token_type = VAR_6;
      else
       FUNC_4(VAR_12);
     }
     else if (VAR_15 - VAR_13 == 5 && FUNC_3(VAR_13, "false", 5) == 0)
      VAR_12->token_type = VAR_5;
     else
      FUNC_4(VAR_12);

    }
  }
}
