
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_10__ {int * slabcur; } ;
typedef TYPE_1__ bin_t ;
struct TYPE_11__ {scalar_t__ nregs; } ;
typedef TYPE_2__ bin_info_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,int *,TYPE_1__*) ;
 int * FUNC_1 (int *,int *,TYPE_1__*,size_t) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,TYPE_2__ const*) ;
 int FUNC_6 (int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void *
FUNC_8(tsdn_t *VAR_1, arena_t *VAR_2, bin_t *VAR_3,
    szind_t VAR_4) {
 const bin_info_t *VAR_5;
 extent_t *VAR_6;

 VAR_5 = &VAR_0[VAR_4];
 if (!FUNC_4(VAR_2) && VAR_3->slabcur != ((void*)0)) {
  FUNC_2(VAR_2, VAR_3, VAR_3->slabcur);
  VAR_3->slabcur = ((void*)0);
 }
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_3->slabcur != ((void*)0)) {




  if (FUNC_7(VAR_3->slabcur) > 0) {
   void *VAR_7 = FUNC_5(VAR_3->slabcur,
       VAR_5);
   if (VAR_6 != ((void*)0)) {
    if (FUNC_7(VAR_6) == VAR_5->nregs) {
     FUNC_3(VAR_1, VAR_2, VAR_6,
         VAR_3);
    } else {
     FUNC_0(VAR_1, VAR_2, VAR_6,
         VAR_3);
    }
   }
   return VAR_7;
  }

  FUNC_2(VAR_2, VAR_3, VAR_3->slabcur);
  VAR_3->slabcur = ((void*)0);
 }

 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_3->slabcur = VAR_6;

 FUNC_6(FUNC_7(VAR_3->slabcur) > 0);

 return FUNC_5(VAR_6, VAR_5);
}
