
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizearray; int * gclist; int * array; int marked; } ;
typedef TYPE_1__ Table ;
typedef int TValue ;
typedef int Node ;
typedef int GCObject ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11 (GCObject *VAR_2) {
  while (VAR_2) {
    Table *VAR_3 = FUNC_0(VAR_2);
    int VAR_4 = VAR_3->sizearray;
    FUNC_5(FUNC_9(VAR_3->marked, VAR_1) ||
               FUNC_9(VAR_3->marked, VAR_0));
    if (FUNC_9(VAR_3->marked, VAR_1)) {
      while (VAR_4--) {
        TValue *VAR_5 = &VAR_3->array[VAR_4];
        if (FUNC_3(VAR_5, 0))
          FUNC_7(VAR_5);
      }
    }
    VAR_4 = FUNC_8(VAR_3);
    while (VAR_4--) {
      Node *VAR_6 = FUNC_1(VAR_3, VAR_4);
      if (!FUNC_10(FUNC_2(VAR_6)) &&
          (FUNC_3(FUNC_4(VAR_6), 1) || FUNC_3(FUNC_2(VAR_6), 0))) {
        FUNC_7(FUNC_2(VAR_6));
        FUNC_6(VAR_6);
      }
    }
    VAR_2 = VAR_3->gclist;
  }
}
