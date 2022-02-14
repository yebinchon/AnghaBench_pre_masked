
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int weak; } ;
typedef TYPE_1__ global_State ;
struct TYPE_12__ {int marked; int sizearray; int node; int * array; int gclist; scalar_t__ metatable; } ;
typedef TYPE_2__ Table ;
typedef int TValue ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,int) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;
 int * FUNC_13 (int ,char) ;
 int FUNC_14 (int const*) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int const*) ;
 scalar_t__ FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18 (global_State *VAR_7, Table *VAR_8) {
  int VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  const TValue *VAR_12 = VAR_6;

  if (VAR_8->metatable) {
    if (!FUNC_6(VAR_8->metatable))
      FUNC_8(VAR_7, VAR_8->metatable);
    VAR_12 = FUNC_1(VAR_7, VAR_8->metatable, VAR_3);
  }

  if (VAR_12 && FUNC_16(VAR_12)) {
    VAR_10 = (FUNC_13(FUNC_14(VAR_12), 'k') != ((void*)0));
    VAR_11 = (FUNC_13(FUNC_14(VAR_12), 'v') != ((void*)0));
    if (VAR_10 || VAR_11) {
      VAR_8->marked &= ~(VAR_0 | VAR_4);
      VAR_8->marked |= FUNC_0((VAR_10 << VAR_1) |
                             (VAR_11 << VAR_5));
      VAR_8->gclist = VAR_7->weak;
      VAR_7->weak = FUNC_10(VAR_8);
    }
  }
  if (VAR_10 && VAR_11) return 1;
  if (!VAR_11) {
    VAR_9 = VAR_8->sizearray;
    while (VAR_9--)
      FUNC_9(VAR_7, &VAR_8->array[VAR_9]);
  }
  if (FUNC_5 (VAR_8->node))
    return VAR_10 || VAR_11;
  VAR_9 = FUNC_12(VAR_8);
  while (VAR_9--) {
    Node *VAR_13 = FUNC_3(VAR_8, VAR_9);
    FUNC_7(FUNC_17(FUNC_2(VAR_13)) != VAR_2 || FUNC_15(FUNC_4(VAR_13)));
    if (FUNC_15(FUNC_4(VAR_13)))
      FUNC_11(VAR_13);
    else {
      FUNC_7(!FUNC_15(FUNC_2(VAR_13)));
      if (!VAR_10) FUNC_9(VAR_7, FUNC_2(VAR_13));
      if (!VAR_11) FUNC_9(VAR_7, FUNC_4(VAR_13));
    }
  }
  return VAR_10 || VAR_11;
}
