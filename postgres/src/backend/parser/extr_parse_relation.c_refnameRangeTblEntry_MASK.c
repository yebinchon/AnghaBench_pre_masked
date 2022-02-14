
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parentParseState; } ;
typedef int RangeTblEntry ;
typedef TYPE_1__ ParseState ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;
 int * FUNC_3 (TYPE_1__*,char const*,int) ;
 int * FUNC_4 (TYPE_1__*,int ,int) ;

RangeTblEntry *
FUNC_5(ParseState *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      int VAR_4,
      int *VAR_5)
{
 Oid VAR_6 = VAR_0;

 if (VAR_5)
  *VAR_5 = 0;

 if (VAR_2 != ((void*)0))
 {
  Oid VAR_7;
  VAR_7 = FUNC_0(VAR_2);
  if (!FUNC_1(VAR_7))
   return ((void*)0);
  VAR_6 = FUNC_2(VAR_3, VAR_7);
  if (!FUNC_1(VAR_6))
   return ((void*)0);
 }

 while (VAR_1 != ((void*)0))
 {
  RangeTblEntry *VAR_8;

  if (FUNC_1(VAR_6))
   VAR_8 = FUNC_4(VAR_1, VAR_6, VAR_4);
  else
   VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_4);

  if (VAR_8)
   return VAR_8;

  if (VAR_5)
   (*VAR_5)++;
  else
   break;

  VAR_1 = VAR_1->parentParseState;
 }
 return ((void*)0);
}
