
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_token ;
struct TYPE_7__ {int scratch; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_stream ;
typedef int fz_context ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int) ;
 int FUNC_6 (int *,int *,TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;

pdf_token
FUNC_9(fz_context *VAR_9, fz_stream *VAR_10, pdf_lexbuf *VAR_11)
{
 while (1)
 {
  int VAR_12 = FUNC_1(VAR_9, VAR_10);
  switch (VAR_12)
  {
  case 130:
   return VAR_3;
  case 128:
   FUNC_7(VAR_9, VAR_10);
   break;
  case '%':
   FUNC_2(VAR_9, VAR_10);
   break;
  case '/':
   FUNC_4(VAR_9, VAR_10, VAR_11);
   return VAR_5;
  case '(':
   return FUNC_6(VAR_9, VAR_10, VAR_11);
  case ')':
   return VAR_4;
  case '<':
   VAR_12 = FUNC_1(VAR_9, VAR_10);
   if (VAR_12 == '<')
    return VAR_8;
   if (VAR_12 != 130)
    FUNC_0(VAR_9, VAR_10);
   return FUNC_3(VAR_9, VAR_10, VAR_11);
  case '>':
   VAR_12 = FUNC_1(VAR_9, VAR_10);
   if (VAR_12 == '>')
    return VAR_2;
   if (VAR_12 != 130)
    FUNC_0(VAR_9, VAR_10);
   return VAR_4;
  case '[':
   return VAR_6;
  case ']':
   return VAR_0;
  case '{':
   return VAR_7;
  case '}':
   return VAR_1;
  case 129:
   return FUNC_5(VAR_9, VAR_10, VAR_11, VAR_12);
  default:
   FUNC_0(VAR_9, VAR_10);
   FUNC_4(VAR_9, VAR_10, VAR_11);
   return FUNC_8(VAR_11->scratch);
  }
 }
}
