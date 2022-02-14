
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* input; int input_length; char* prev_token_terminator; char* token_terminator; } ;
typedef TYPE_1__ JsonLexContext ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2(JsonLexContext *VAR_0, char *VAR_1,
    bool *VAR_2, int *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5 = VAR_1 - VAR_0->input;





 if (VAR_5 < VAR_0->input_length && *VAR_1 == '0')
 {
  VAR_1++;
  VAR_5++;
 }
 else if (VAR_5 < VAR_0->input_length && *VAR_1 >= '1' && *VAR_1 <= '9')
 {
  do
  {
   VAR_1++;
   VAR_5++;
  } while (VAR_5 < VAR_0->input_length && *VAR_1 >= '0' && *VAR_1 <= '9');
 }
 else
  VAR_4 = 1;


 if (VAR_5 < VAR_0->input_length && *VAR_1 == '.')
 {
  VAR_1++;
  VAR_5++;
  if (VAR_5 == VAR_0->input_length || *VAR_1 < '0' || *VAR_1 > '9')
   VAR_4 = 1;
  else
  {
   do
   {
    VAR_1++;
    VAR_5++;
   } while (VAR_5 < VAR_0->input_length && *VAR_1 >= '0' && *VAR_1 <= '9');
  }
 }


 if (VAR_5 < VAR_0->input_length && (*VAR_1 == 'e' || *VAR_1 == 'E'))
 {
  VAR_1++;
  VAR_5++;
  if (VAR_5 < VAR_0->input_length && (*VAR_1 == '+' || *VAR_1 == '-'))
  {
   VAR_1++;
   VAR_5++;
  }
  if (VAR_5 == VAR_0->input_length || *VAR_1 < '0' || *VAR_1 > '9')
   VAR_4 = 1;
  else
  {
   do
   {
    VAR_1++;
    VAR_5++;
   } while (VAR_5 < VAR_0->input_length && *VAR_1 >= '0' && *VAR_1 <= '9');
  }
 }






 for (; VAR_5 < VAR_0->input_length && FUNC_0(*VAR_1); VAR_1++, VAR_5++)
  VAR_4 = 1;

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_5;

 if (VAR_2 != ((void*)0))
 {

  *VAR_2 = VAR_4;
 }
 else
 {

  VAR_0->prev_token_terminator = VAR_0->token_terminator;
  VAR_0->token_terminator = VAR_1;

  if (VAR_4)
   FUNC_1(VAR_0);
 }
}
