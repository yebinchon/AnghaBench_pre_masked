
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
struct TYPE_16__ {void* (* alloc ) (TYPE_1__*,void*,size_t,size_t,int*,int*,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
struct TYPE_17__ {int extents_retained; } ;
typedef TYPE_2__ arena_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,size_t) ;
 int * FUNC_3 (int *,TYPE_2__*) ;
 void* FUNC_4 (int *,TYPE_2__*,void*,size_t,size_t,int*,int*) ;
 int FUNC_5 (int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_8 (int *,TYPE_2__*,void*,size_t,int,int ,int ,int ,int,int,int) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int VAR_1 ;
 int FUNC_10 (int *,TYPE_2__*,TYPE_1__**,int *,int *,int) ;
 void* FUNC_11 (TYPE_1__*,void*,size_t,size_t,int*,int*,int ) ;

__attribute__((used)) static extent_t *
FUNC_12(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7,
    size_t VAR_8, bool VAR_9, szind_t VAR_10, bool *VAR_11, bool *VAR_12) {
 size_t VAR_13 = VAR_6 + VAR_7;
 extent_t *VAR_14 = FUNC_3(VAR_2, VAR_3);
 if (VAR_14 == ((void*)0)) {
  return ((void*)0);
 }
 void *VAR_15;
 if (*VAR_4 == &VAR_0) {

  VAR_15 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_13,
      VAR_8, VAR_11, VAR_12);
 } else {
  FUNC_7(VAR_2, VAR_3);
  VAR_15 = (*VAR_4)->alloc(*VAR_4, VAR_5,
      VAR_13, VAR_8, VAR_11, VAR_12, FUNC_1(VAR_3));
  FUNC_6(VAR_2);
 }
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_2, VAR_3, VAR_14);
  return ((void*)0);
 }
 FUNC_8(VAR_14, VAR_3, VAR_15, VAR_13, VAR_9, VAR_10,
     FUNC_0(VAR_3), VAR_1, *VAR_11, *VAR_12,
     1);
 if (VAR_7 != 0) {
  FUNC_2(VAR_2, VAR_14, VAR_8);
 }
 if (FUNC_9(VAR_2, VAR_14)) {
  FUNC_10(VAR_2, VAR_3, VAR_4,
      &VAR_3->extents_retained, VAR_14, 0);
  return ((void*)0);
 }

 return VAR_14;
}
