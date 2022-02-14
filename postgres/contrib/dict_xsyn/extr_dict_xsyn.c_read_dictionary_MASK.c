
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsearch_readline_state ;
struct TYPE_7__ {int len; TYPE_1__* syn; int matchsynonyms; scalar_t__ matchorig; } ;
struct TYPE_6__ {int value; int key; } ;
typedef TYPE_1__ Syn ;
typedef TYPE_2__ DictSyn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char**) ;
 char* FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,int,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(DictSyn *VAR_3, const char *VAR_4)
{
 char *VAR_5 = FUNC_4(VAR_4, "rules");
 tsearch_readline_state VAR_6;
 char *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_13(&VAR_6, VAR_5))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("could not open synonym file \"%s\": %m",
      VAR_5)));

 while ((VAR_7 = FUNC_12(&VAR_6)) != ((void*)0))
 {
  char *VAR_9;
  char *VAR_10;
  char *VAR_11;
  char *VAR_12;

  if (*VAR_7 == '\0')
   continue;

  VAR_9 = FUNC_5(VAR_7);
  FUNC_7(VAR_7);

  VAR_11 = VAR_9;
  while ((VAR_10 = FUNC_3(VAR_11, &VAR_12)) != ((void*)0))
  {

   if (VAR_8 == VAR_3->len)
   {
    VAR_3->len = (VAR_3->len > 0) ? 2 * VAR_3->len : 16;
    if (VAR_3->syn)
     VAR_3->syn = (Syn *) FUNC_11(VAR_3->syn, sizeof(Syn) * VAR_3->len);
    else
     VAR_3->syn = (Syn *) FUNC_6(sizeof(Syn) * VAR_3->len);
   }


   if (VAR_11 != VAR_9 || VAR_3->matchorig)
   {
    VAR_3->syn[VAR_8].key = FUNC_8(VAR_10, VAR_12 - VAR_10);
    VAR_3->syn[VAR_8].value = FUNC_9(VAR_9);

    VAR_8++;
   }

   VAR_11 = VAR_12;


   if (!VAR_3->matchsynonyms)
    break;
  }

  FUNC_7(VAR_9);
 }

 FUNC_14(&VAR_6);

 VAR_3->len = VAR_8;
 if (VAR_8 > 1)
  FUNC_10(VAR_3->syn, VAR_3->len, sizeof(Syn), VAR_2);

 FUNC_7(VAR_5);
}
