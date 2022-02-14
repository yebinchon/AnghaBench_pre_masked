
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsearch_readline_state ;
struct TYPE_3__ {int len; char** stop; } ;
typedef TYPE_1__ StopList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (char**,scalar_t__,int,int ) ;
 scalar_t__ FUNC_8 (void*,int) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;

void
FUNC_13(const char *VAR_3, StopList *VAR_4, char *(*VAR_5) (const char *))
{
 char **VAR_6 = ((void*)0);

 VAR_4->len = 0;
 if (VAR_3 && *VAR_3)
 {
  char *VAR_7 = FUNC_3(VAR_3, "stop");
  tsearch_readline_state VAR_8;
  char *VAR_9;
  int VAR_10 = 0;

  if (!FUNC_11(&VAR_8, VAR_7))
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("could not open stop-word file \"%s\": %m",
       VAR_7)));

  while ((VAR_9 = FUNC_10(&VAR_8)) != ((void*)0))
  {
   char *VAR_11 = VAR_9;


   while (*VAR_11 && !FUNC_9(VAR_11))
    VAR_11 += FUNC_6(VAR_11);
   *VAR_11 = '\0';


   if (*VAR_9 == '\0')
   {
    FUNC_5(VAR_9);
    continue;
   }

   if (VAR_4->len >= VAR_10)
   {
    if (VAR_10 == 0)
    {
     VAR_10 = 64;
     VAR_6 = (char **) FUNC_4(sizeof(char *) * VAR_10);
    }
    else
    {
     VAR_10 *= 2;
     VAR_6 = (char **) FUNC_8((void *) VAR_6,
             sizeof(char *) * VAR_10);
    }
   }

   if (VAR_5)
   {
    VAR_6[VAR_4->len] = VAR_5(VAR_9);
    if (VAR_6[VAR_4->len] != VAR_9)
     FUNC_5(VAR_9);
   }
   else
    VAR_6[VAR_4->len] = VAR_9;

   (VAR_4->len)++;
  }

  FUNC_12(&VAR_8);
  FUNC_5(VAR_7);
 }

 VAR_4->stop = VAR_6;


 if (VAR_4->stop && VAR_4->len > 0)
  FUNC_7(VAR_4->stop, VAR_4->len, sizeof(char *), VAR_2);
}
