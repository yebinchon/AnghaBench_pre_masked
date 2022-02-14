
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ts_tokentype ;
typedef int int8 ;
typedef scalar_t__ int16 ;
struct TYPE_4__ {int state; char* buf; int count; int buffer; int valstate; } ;
typedef TYPE_1__* TSQueryParserState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,scalar_t__*,int*) ;
 int FUNC_4 (int ,char**,int*,int *,int *,char**) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,char) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static ts_tokentype
FUNC_10(TSQueryParserState VAR_12, int8 *VAR_13,
      int *VAR_14, char **VAR_15,
      int16 *VAR_16, bool *VAR_17)
{
 *VAR_16 = 0;
 *VAR_17 = 0;

 while (1)
 {
  switch (VAR_12->state)
  {
   case 130:
   case 129:
    if (FUNC_8(VAR_12->buf, '!'))
    {
     VAR_12->buf++;
     VAR_12->state = 129;
     *VAR_13 = VAR_3;
     return VAR_10;
    }
    else if (FUNC_8(VAR_12->buf, '('))
    {
     VAR_12->buf++;
     VAR_12->state = 129;
     VAR_12->count++;
     return VAR_9;
    }
    else if (FUNC_8(VAR_12->buf, ':'))
    {
     FUNC_0(VAR_1,
       (FUNC_1(VAR_0),
        FUNC_2("syntax error in tsquery: \"%s\"",
         VAR_12->buffer)));
    }
    else if (!FUNC_9(VAR_12->buf))
    {




     FUNC_7(VAR_12->valstate, VAR_12->buf);
     if (FUNC_4(VAR_12->valstate, VAR_15, VAR_14,
            ((void*)0), ((void*)0), &VAR_12->buf))
     {
      VAR_12->buf = FUNC_3(VAR_12->buf, VAR_16, VAR_17);
      VAR_12->state = 128;
      return VAR_11;
     }
     else if (VAR_12->state == 130)
     {
      return VAR_7;
     }
     else
      FUNC_0(VAR_1,
        (FUNC_1(VAR_0),
         FUNC_2("no operand in tsquery: \"%s\"",
          VAR_12->buffer)));
    }
    break;

   case 128:
    if (FUNC_8(VAR_12->buf, '&'))
    {
     VAR_12->buf++;
     VAR_12->state = 129;
     *VAR_13 = VAR_2;
     return VAR_10;
    }
    else if (FUNC_8(VAR_12->buf, '|'))
    {
     VAR_12->buf++;
     VAR_12->state = 129;
     *VAR_13 = VAR_4;
     return VAR_10;
    }
    else if (FUNC_5(VAR_12, VAR_16))
    {

     VAR_12->state = 129;
     *VAR_13 = VAR_5;
     return VAR_10;
    }
    else if (FUNC_8(VAR_12->buf, ')'))
    {
     VAR_12->buf++;
     VAR_12->count--;
     return (VAR_12->count < 0) ? VAR_8 : VAR_6;
    }
    else if (*VAR_12->buf == '\0')
    {
     return (VAR_12->count) ? VAR_8 : VAR_7;
    }
    else if (!FUNC_9(VAR_12->buf))
    {
     return VAR_8;
    }
    break;
  }

  VAR_12->buf += FUNC_6(VAR_12->buf);
 }
}
