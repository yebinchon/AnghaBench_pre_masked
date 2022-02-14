
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* first; } ;
struct TYPE_5__ {char* line; struct TYPE_5__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int,int ,char*,char const*) ;
 int FUNC_3 (int *,char const*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(const int VAR_3, const char **const VAR_4, const CommandPtr VAR_5, const ArgvInfoPtr VAR_6)
{
 int VAR_7, VAR_8;
 LineList VAR_9;
 LinePtr VAR_10;

 FUNC_0(VAR_1);
 if (VAR_3 == 1) {
  VAR_8 = FUNC_3(&VAR_0, ((void*)0), &VAR_9);
  if (VAR_8 < 0)
   FUNC_2(&VAR_0, VAR_8, VAR_2, "HELP failed", ((void*)0));
  else {
   for (VAR_10 = VAR_9.first; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
    (void) FUNC_4("%s\n", VAR_10->line);
  }
  FUNC_1(&VAR_9);
 } else {
  for (VAR_7=1; VAR_7<VAR_3; VAR_7++) {
   VAR_8 = FUNC_3(&VAR_0, VAR_4[VAR_7], &VAR_9);
   if (VAR_8 < 0)
    FUNC_2(&VAR_0, VAR_8, VAR_2, "HELP failed for", VAR_4[VAR_7]);
   else {
    for (VAR_10 = VAR_9.first; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
     (void) FUNC_4("%s\n", VAR_10->line);
   }
   FUNC_1(&VAR_9);
  }
 }
}
