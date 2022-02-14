
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ts_tokentype ;
typedef int int8 ;
typedef int int16 ;
struct TYPE_5__ {int state; char* buf; int in_quotes; int valstate; } ;
typedef TYPE_1__* TSQueryParserState ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_1 (int ,char**,int*,int *,int *,char**) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static ts_tokentype
FUNC_9(TSQueryParserState VAR_9, int8 *VAR_10,
       int *VAR_11, char **VAR_12,
       int16 *VAR_13, bool *VAR_14)
{
 *VAR_13 = 0;
 *VAR_14 = 0;

 while (1)
 {
  switch (VAR_9->state)
  {
   case 130:
   case 129:
    if (FUNC_7(VAR_9->buf, '-'))
    {
     VAR_9->buf++;
     VAR_9->state = 129;

     if (VAR_9->in_quotes)
      continue;

     *VAR_10 = VAR_1;
     return VAR_7;
    }
    else if (FUNC_7(VAR_9->buf, '"'))
    {
     VAR_9->buf++;

     if (!VAR_9->in_quotes)
     {
      VAR_9->state = 129;

      if (FUNC_6(VAR_9->buf, '"'))
      {

       VAR_9->in_quotes = 1;
       return VAR_6;
      }


      continue;
     }
     else
     {

      VAR_9->in_quotes = 0;
      VAR_9->state = 128;
      FUNC_4(VAR_9);
      return VAR_4;
     }
    }
    else if (FUNC_0(VAR_9->buf))
    {

     VAR_9->buf++;
     VAR_9->state = 129;
     continue;
    }
    else if (!FUNC_8(VAR_9->buf))
    {




     FUNC_5(VAR_9->valstate, VAR_9->buf);
     if (FUNC_1(VAR_9->valstate, VAR_12, VAR_11,
            ((void*)0), ((void*)0), &VAR_9->buf))
     {
      VAR_9->state = 128;
      return VAR_8;
     }
     else if (VAR_9->state == 130)
     {
      return VAR_5;
     }
     else
     {

      FUNC_4(VAR_9);
      return VAR_5;
     }
    }
    break;

   case 128:
    if (FUNC_7(VAR_9->buf, '"'))
    {
     if (!VAR_9->in_quotes)
     {




      VAR_9->state = 129;
      *VAR_10 = VAR_0;
      return VAR_7;
     }
     else
     {
      VAR_9->buf++;


      VAR_9->in_quotes = 0;
      return VAR_4;
     }
    }
    else if (FUNC_2(VAR_9))
    {
     VAR_9->state = 129;
     *VAR_10 = VAR_2;
     return VAR_7;
    }
    else if (*VAR_9->buf == '\0')
    {
     return VAR_5;
    }
    else if (!FUNC_8(VAR_9->buf))
    {
     if (VAR_9->in_quotes)
     {

      *VAR_10 = VAR_3;
      *VAR_13 = 1;
     }
     else
     {

      *VAR_10 = VAR_0;
     }

     VAR_9->state = 129;
     return VAR_7;
    }
    break;
  }

  VAR_9->buf += FUNC_3(VAR_9->buf);
 }
}
