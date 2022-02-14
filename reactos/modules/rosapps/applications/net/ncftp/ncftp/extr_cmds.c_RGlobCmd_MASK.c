
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* noglobargv; } ;
struct TYPE_9__ {TYPE_1__* first; } ;
struct TYPE_8__ {char* line; struct TYPE_8__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef int CommandPtr ;
typedef TYPE_3__* ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int,int ,char*,char const*) ;
 int FUNC_3 (int *,TYPE_2__*,char const*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(const int VAR_5, const char **const VAR_6, const CommandPtr VAR_7, const ArgvInfoPtr VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 LineList VAR_12;
 LinePtr VAR_13;

 FUNC_0(VAR_1);
 for (VAR_9=1; VAR_9<VAR_5; VAR_9++) {
  FUNC_4(&VAR_12);
  VAR_10 = FUNC_3(&VAR_0, &VAR_12, VAR_6[VAR_9], (VAR_8->noglobargv[VAR_9] != 0) ? VAR_3: VAR_4);
  if (VAR_10 < 0) {
   FUNC_2(&VAR_0, VAR_10, VAR_2, "remote glob", VAR_6[VAR_9]);
  } else {
   for (VAR_13 = VAR_12.first; VAR_13 != ((void*)0); VAR_13 = VAR_13->next) {
    if (VAR_13->line != ((void*)0)) {
     if (VAR_11 > 0)
      (void) FUNC_5(" ");
     (void) FUNC_5("%s", VAR_13->line);
     VAR_11++;
    }
   }
  }
  FUNC_1(&VAR_12);
 }
 (void) FUNC_5("\n");
}
