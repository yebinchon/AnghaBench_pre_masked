
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_7__ {int * arena; } ;
typedef TYPE_1__ tcache_t ;
typedef int arena_t ;
struct TYPE_8__ {int * avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,size_t,int ,int,int *,int,int *) ;
 int FUNC_4 () ;
 int VAR_2 ;
 size_t FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ,TYPE_1__*,int *) ;
 int FUNC_7 (int *,TYPE_1__*,void*) ;
 TYPE_3__* FUNC_8 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

bool
FUNC_11(tsd_t *VAR_3) {
 tcache_t *VAR_4 = FUNC_9(VAR_3);
 FUNC_2(FUNC_8(VAR_4, 0)->avail == ((void*)0));
 size_t VAR_5 = VAR_2 * sizeof(void *);

 VAR_5 = FUNC_5(VAR_5, VAR_0);

 void *VAR_6 = FUNC_3(FUNC_10(VAR_3), VAR_5, VAR_0, 1,
     ((void*)0), 1, FUNC_1(VAR_1, 0, 1));
 if (VAR_6 == ((void*)0)) {
  return 1;
 }

 FUNC_7(VAR_3, VAR_4, VAR_6);
 VAR_4->arena = ((void*)0);
 arena_t *VAR_7;
 if (!FUNC_4()) {

  VAR_7 = FUNC_1(FUNC_10(VAR_3), 0, 0);
  FUNC_6(FUNC_10(VAR_3), VAR_4, VAR_7);
 } else {
  VAR_7 = FUNC_0(VAR_3, ((void*)0));

  if (VAR_4->arena == ((void*)0)) {
   FUNC_6(FUNC_10(VAR_3), VAR_4, VAR_7);
  }
 }
 FUNC_2(VAR_7 == VAR_4->arena);

 return 0;
}
