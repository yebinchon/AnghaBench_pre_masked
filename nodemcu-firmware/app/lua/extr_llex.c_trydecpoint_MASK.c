
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lconv {char* decimal_point; } ;
struct TYPE_8__ {char decpoint; int buff; } ;
struct TYPE_7__ {int r; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char,char) ;
 struct lconv* FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_1, SemInfo *VAR_2) {

  struct lconv *VAR_3 = FUNC_1();
  char VAR_4 = VAR_1->decpoint;
  VAR_1->decpoint = (VAR_3 ? VAR_3->decimal_point[0] : '.');
  FUNC_0(VAR_1, VAR_4, VAR_1->decpoint);
  if (!FUNC_2(FUNC_4(VAR_1->buff), &VAR_2->r)) {

    FUNC_0(VAR_1, VAR_1->decpoint, '.');
    FUNC_3(VAR_1, "malformed number", VAR_0);
  }
}
