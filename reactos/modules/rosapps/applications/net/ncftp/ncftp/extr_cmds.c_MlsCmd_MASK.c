
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* first; } ;
struct TYPE_4__ {char* line; struct TYPE_4__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,TYPE_2__*,char*,int,int*) ;
 int FUNC_2 (int *,int,int ,char*,char const*) ;
 int FUNC_3 (int const,char const** const,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_8(const int VAR_4, const char **const VAR_5, const CommandPtr VAR_6, const ArgvInfoPtr VAR_7)
{
 int VAR_8;
 int VAR_9;
 LinePtr VAR_10, VAR_11;
 int VAR_12;
 LineList VAR_13;
 int VAR_14 = 1, VAR_15;
 const char *VAR_16;

 FUNC_0(VAR_2);
 FUNC_4();
 while ((VAR_9 = FUNC_3(VAR_4, VAR_5, "dt")) >= 0) {
  if ((VAR_9 == 'd') || (VAR_9 == 't')) {



   VAR_14 = 0;
  } else {
   FUNC_5(VAR_6);
   return;
  }
 }

 VAR_8 = VAR_1;
 if (VAR_8 == VAR_4) {

  VAR_15 = 1;
  VAR_16 = "";
  if ((VAR_12 = FUNC_1(&VAR_0, VAR_16, &VAR_13, (VAR_14 == 0) ? "-d" : "", 1, &VAR_15)) < 0) {
   if (VAR_14 != 0) {
    FUNC_2(&VAR_0, VAR_12, 0, "Could not MLSD", VAR_16);
   } else {
    FUNC_2(&VAR_0, VAR_12, 0, "Could not MLST", VAR_16);
   }
  } else {
   for (VAR_10 = VAR_13.first;
    VAR_10 != ((void*)0);
    VAR_10 = VAR_11)
   {
    VAR_11 = VAR_10->next;
    (void) FUNC_7(VAR_3, "%s\n", VAR_10->line);
    FUNC_6(0, "%s\n", VAR_10->line);
   }
  }
 }

 for ( ; VAR_8<VAR_4; VAR_8++) {
  VAR_15 = 1;
  VAR_16 = VAR_5[VAR_8];
  if ((VAR_12 = FUNC_1(&VAR_0, VAR_16, &VAR_13, (VAR_14 == 0) ? "-d" : "", 1, &VAR_15)) < 0) {
   if (VAR_14 != 0) {
    FUNC_2(&VAR_0, VAR_12, 0, "Could not MLSD", VAR_16);
   } else {
    FUNC_2(&VAR_0, VAR_12, 0, "Could not MLST", VAR_16);
   }
  } else {
   for (VAR_10 = VAR_13.first;
    VAR_10 != ((void*)0);
    VAR_10 = VAR_11)
   {
    VAR_11 = VAR_10->next;
    (void) FUNC_7(VAR_3, "%s\n", VAR_10->line);
    FUNC_6(0, "%s\n", VAR_10->line);
   }
  }
 }
}
