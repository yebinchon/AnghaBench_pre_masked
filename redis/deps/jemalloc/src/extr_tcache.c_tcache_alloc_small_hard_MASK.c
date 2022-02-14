
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_4__ {scalar_t__ prof_accumbytes; int * arena; } ;
typedef TYPE_1__ tcache_t ;
typedef int szind_t ;
typedef int cache_bin_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,TYPE_1__*,int *,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int*) ;
 scalar_t__ VAR_0 ;

void *
FUNC_3(tsdn_t *VAR_1, arena_t *VAR_2, tcache_t *VAR_3,
    cache_bin_t *VAR_4, szind_t VAR_5, bool *VAR_6) {
 void *VAR_7;

 FUNC_1(VAR_3->arena != ((void*)0));
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_0 ? VAR_3->prof_accumbytes : 0);
 if (VAR_0) {
  VAR_3->prof_accumbytes = 0;
 }
 VAR_7 = FUNC_2(VAR_4, VAR_6);

 return VAR_7;
}
