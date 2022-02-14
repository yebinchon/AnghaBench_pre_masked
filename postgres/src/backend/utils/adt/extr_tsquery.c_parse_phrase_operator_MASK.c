
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__* TSQueryParserState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,long) ;
 int VAR_4 ;
 long FUNC_3 (char*,char**,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char) ;

__attribute__((used)) static bool
FUNC_6(TSQueryParserState VAR_5, int16 *VAR_6)
{
 enum
 {
  PHRASE_OPEN = 0,
  PHRASE_DIST,
  PHRASE_CLOSE,
  PHRASE_FINISH
 } VAR_7 = PHRASE_OPEN;
 char *VAR_8 = VAR_5->buf;
 char *VAR_9;
 long VAR_10 = 1;

 while (*VAR_8)
 {
  switch (VAR_7)
  {
   case PHRASE_OPEN:
    if (FUNC_5(VAR_8, '<'))
    {
     VAR_7 = PHRASE_DIST;
     VAR_8++;
    }
    else
     return 0;
    break;

   case PHRASE_DIST:
    if (FUNC_5(VAR_8, '-'))
    {
     VAR_7 = PHRASE_CLOSE;
     VAR_8++;
     continue;
    }

    if (!FUNC_4(VAR_8))
     return 0;

    VAR_4 = 0;
    VAR_10 = FUNC_3(VAR_8, &VAR_9, 10);
    if (VAR_8 == VAR_9)
     return 0;
    else if (VAR_4 == VAR_0 || VAR_10 < 0 || VAR_10 > VAR_3)
     FUNC_0(VAR_2,
       (FUNC_1(VAR_1),
        FUNC_2("distance in phrase operator should not be greater than %d",
         VAR_3)));
    else
    {
     VAR_7 = PHRASE_CLOSE;
     VAR_8 = VAR_9;
    }
    break;

   case PHRASE_CLOSE:
    if (FUNC_5(VAR_8, '>'))
    {
     VAR_7 = PHRASE_FINISH;
     VAR_8++;
    }
    else
     return 0;
    break;

   case PHRASE_FINISH:
    *VAR_6 = (int16) VAR_10;
    VAR_5->buf = VAR_8;
    return 1;
  }
 }

 return 0;
}
