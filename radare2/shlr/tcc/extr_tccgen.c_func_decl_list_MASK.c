
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int t; } ;
struct TYPE_9__ {int v; TYPE_2__ type; struct TYPE_9__* next; } ;
typedef TYPE_1__ Sym ;
typedef TYPE_2__ CType ;
typedef int AttributeDef ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (char) ;
 scalar_t__ FUNC_9 () ;
 char VAR_7 ;
 int FUNC_10 (TYPE_2__*,int *,int*,int ) ;

__attribute__((used)) static void FUNC_11(Sym *VAR_8) {
 AttributeDef VAR_9;
 int VAR_10;
 Sym *VAR_11 = ((void*)0);
 CType VAR_12, VAR_13;


 while (FUNC_9 () == 0 && VAR_7 != '{' && VAR_7 != ';' && VAR_7 != ',' && VAR_7 != VAR_4 &&
        VAR_7 != VAR_1 && VAR_7 != VAR_2 && VAR_7 != VAR_3) {
  if (!FUNC_7 (&VAR_12, &VAR_9)) {
   FUNC_2 ("declaration list");
  }
  if ((FUNC_4(&VAR_12) || FUNC_5(&VAR_12)) && VAR_7 == ';') {

  } else {
   while (FUNC_9 () == 0) {
    int VAR_14;
    VAR_13 = VAR_12;
    FUNC_10 (&VAR_13, &VAR_9, &VAR_10, VAR_5);

    VAR_11 = VAR_8;
    VAR_14 = 0;
    while ((VAR_11 = VAR_11->next) != ((void*)0)) {
     if ((VAR_11->v & ~VAR_0) == VAR_10) {
      VAR_14 = 1;
      break;
     }
    }
    if (VAR_14 == 0) {
     FUNC_0 ("declaration for parameter '%s' but no such parameter",
      FUNC_3 (VAR_10, ((void*)0)));
    }

    if (VAR_13.t & VAR_6) {
     FUNC_0 ("storage class specified for '%s'", FUNC_3 (VAR_10, ((void*)0)));
    }
    FUNC_1 (&VAR_13);

    if (VAR_11) {
     VAR_11->type = VAR_13;
    }

    if (VAR_7 == ',') {
     FUNC_6 ();
    } else {
     break;
    }
   }
  }
  FUNC_8 (';');
 }
}
