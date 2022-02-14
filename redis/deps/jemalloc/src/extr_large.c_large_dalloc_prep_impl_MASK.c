
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_5__ {int large; int large_mtx; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9(tsdn_t *VAR_0, arena_t *VAR_1, extent_t *VAR_2,
    bool VAR_3) {
 if (!VAR_3) {

  if (!FUNC_1(VAR_1)) {
   FUNC_7(VAR_0, &VAR_1->large_mtx);
   FUNC_3(&VAR_1->large, VAR_2);
   FUNC_8(VAR_0, &VAR_1->large_mtx);
  }
  FUNC_5(FUNC_2(VAR_2),
      FUNC_4(VAR_2));
 } else {
  FUNC_6(VAR_0, &VAR_1->large_mtx);
  if (!FUNC_1(VAR_1)) {
   FUNC_3(&VAR_1->large, VAR_2);
  }
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
