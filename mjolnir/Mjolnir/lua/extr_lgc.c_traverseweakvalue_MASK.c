
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ gcstate; int weak; int grayagain; } ;
typedef TYPE_1__ global_State ;
struct TYPE_11__ {scalar_t__ sizearray; } ;
typedef TYPE_2__ Table ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11 (global_State *VAR_1, Table *VAR_2) {
  Node *VAR_3, *VAR_4 = FUNC_3(VAR_2);


  int VAR_5 = (VAR_2->sizearray > 0);
  for (VAR_3 = FUNC_2(VAR_2, 0); VAR_3 < VAR_4; VAR_3++) {
    FUNC_0(VAR_3);
    if (FUNC_10(FUNC_4(VAR_3)))
      FUNC_9(VAR_3);
    else {
      FUNC_7(!FUNC_10(FUNC_1(VAR_3)));
      FUNC_8(VAR_1, FUNC_1(VAR_3));
      if (!VAR_5 && FUNC_5(VAR_1, FUNC_4(VAR_3)))
        VAR_5 = 1;
    }
  }
  if (VAR_1->gcstate == VAR_0)
    FUNC_6(VAR_2, VAR_1->grayagain);
  else if (VAR_5)
    FUNC_6(VAR_2, VAR_1->weak);
}
