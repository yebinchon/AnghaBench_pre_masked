
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; scalar_t__ in_quotes; } ;
typedef TYPE_1__* TSQueryParserState ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static bool
FUNC_6(TSQueryParserState VAR_0)
{
 char *VAR_1 = VAR_0->buf;

 if (VAR_0->in_quotes)
  return 0;


 if (FUNC_1(VAR_1, "or", 2) != 0)
  return 0;

 VAR_1 += 2;





 if (*VAR_1 == '\0')
  return 0;


 if (FUNC_4(VAR_1, '-') || FUNC_4(VAR_1, '_') || FUNC_2(VAR_1) || FUNC_3(VAR_1))
  return 0;

 for (;;)
 {
  VAR_1 += FUNC_0(VAR_1);

  if (*VAR_1 == '\0')
   return 0;






  if (!FUNC_5(VAR_1))
   break;
 }

 VAR_0->buf += 2;
 return 1;
}
