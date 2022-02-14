
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {void* errNo; } ;
struct TYPE_14__ {scalar_t__* noglobargv; } ;
struct TYPE_13__ {TYPE_1__* first; } ;
struct TYPE_12__ {char* line; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef int CommandPtr ;
typedef TYPE_3__* ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int,int ,char const*,char const*) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*,char const*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 TYPE_4__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (char*,char*) ;

void
FUNC_11(const int VAR_11, const char **const VAR_12, const CommandPtr VAR_13, const ArgvInfoPtr VAR_14)
{
 int VAR_15;
 LineList VAR_16;
 LinePtr VAR_17;

 FUNC_0(VAR_4);

 if (VAR_11 <= 1) {
  if (VAR_3[0] != '\0') {
   (void) FUNC_7(VAR_1, VAR_2);
   VAR_15 = FUNC_1(&VAR_0, VAR_3);
   if (VAR_15 != VAR_10) {

    FUNC_3(&VAR_0, VAR_15, VAR_5, "Could not chdir to", VAR_3);
   }
  } else {
   FUNC_6(VAR_13);
  }
 } else {
  FUNC_5(&VAR_16);
  VAR_15 = FUNC_4(&VAR_0, &VAR_16, VAR_12[1], (VAR_14->noglobargv[1] != 0) ? VAR_8: VAR_9);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_0, VAR_15, VAR_6, VAR_12[0], VAR_12[1]);
  } else {
   VAR_17 = VAR_16.first;
   if ((VAR_17 != ((void*)0)) && (VAR_17->line != ((void*)0))) {
    if ((FUNC_10(VAR_17->line, "-") == 0) && (VAR_1[0] != '\0')) {
     FUNC_9(VAR_17->line);
     VAR_17->line = FUNC_8(VAR_1);
     if (VAR_17->line == ((void*)0)) {
      VAR_15 = VAR_7;
      VAR_0.errNo = VAR_7;
     } else {
      (void) FUNC_7(VAR_1, VAR_2);
      VAR_15 = FUNC_1(&VAR_0, VAR_17->line);
     }
    } else {
     (void) FUNC_7(VAR_1, VAR_2);
     VAR_15 = FUNC_1(&VAR_0, VAR_17->line);
    }
    if (VAR_15 != VAR_10)
     FUNC_3(&VAR_0, VAR_15, VAR_5, "Could not chdir to", VAR_17->line);
   }
  }
  FUNC_2(&VAR_16);
 }
}
