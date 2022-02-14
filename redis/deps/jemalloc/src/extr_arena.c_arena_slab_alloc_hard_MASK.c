
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_6__ {int slab_size; } ;
typedef TYPE_1__ bin_info_t ;
struct TYPE_7__ {int stats; } ;
typedef TYPE_2__ arena_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int *,TYPE_2__*,int **,int *,int ,int ,int ,int,int ,int*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static extent_t *
FUNC_4(tsdn_t *VAR_3, arena_t *VAR_4,
    extent_hooks_t **VAR_5, const bin_info_t *VAR_6,
    szind_t VAR_7) {
 extent_t *VAR_8;
 bool VAR_9, VAR_10;

 FUNC_3(FUNC_2(VAR_3),
     VAR_1, 0);

 VAR_9 = 0;
 VAR_10 = 1;
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0),
     VAR_6->slab_size, 0, VAR_0, 1, VAR_7, &VAR_9, &VAR_10);

 if (VAR_2 && VAR_8 != ((void*)0)) {
  FUNC_0(VAR_3, &VAR_4->stats,
      VAR_6->slab_size);
 }

 return VAR_8;
}
