
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int ssize_t ;
typedef int extents_t ;
typedef int arena_t ;
struct TYPE_5__ {int mtx; } ;
typedef TYPE_1__ arena_decay_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *,TYPE_1__*,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool
FUNC_5(tsdn_t *VAR_0, arena_t *VAR_1, arena_decay_t *VAR_2,
    extents_t *VAR_3, ssize_t VAR_4) {
 if (!FUNC_0(VAR_4)) {
  return 1;
 }

 FUNC_3(VAR_0, &VAR_2->mtx);
 FUNC_1(VAR_2, VAR_4);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 FUNC_4(VAR_0, &VAR_2->mtx);

 return 0;
}
