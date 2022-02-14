
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_6__ {scalar_t__ (* dalloc ) (TYPE_1__*,int *,scalar_t__,int ,int ) ;} ;
typedef TYPE_1__ extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_1__**) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int *,scalar_t__,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_14(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, extent_t *VAR_5) {
 bool VAR_6;

 FUNC_1(FUNC_3(VAR_5) != ((void*)0));
 FUNC_1(FUNC_10(VAR_5) != 0);
 FUNC_13(FUNC_12(VAR_2),
     VAR_0, 0);

 FUNC_2(VAR_5, FUNC_3(VAR_5));

 FUNC_9(VAR_3, VAR_4);

 if (*VAR_4 == &VAR_1) {

  VAR_6 = FUNC_6(FUNC_3(VAR_5),
      FUNC_10(VAR_5));
 } else {
  FUNC_8(VAR_2, VAR_3);
  VAR_6 = ((*VAR_4)->dalloc == ((void*)0) ||
      (*VAR_4)->dalloc(*VAR_4,
      FUNC_3(VAR_5), FUNC_10(VAR_5),
      FUNC_4(VAR_5), FUNC_0(VAR_3)));
  FUNC_7(VAR_2);
 }

 if (!VAR_6) {
  FUNC_5(VAR_2, VAR_3, VAR_5);
 }

 return VAR_6;
}
