
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_4__ {int extents_dirty; int decay_dirty; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int *,TYPE_1__*,int *,int *,int,int) ;

__attribute__((used)) static bool
FUNC_1(tsdn_t *VAR_0, arena_t *VAR_1, bool VAR_2,
    bool VAR_3) {
 return FUNC_0(VAR_0, VAR_1, &VAR_1->decay_dirty,
     &VAR_1->extents_dirty, VAR_2, VAR_3);
}
