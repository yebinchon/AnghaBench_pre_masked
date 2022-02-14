
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ tcaches_t ;
typedef int tcache_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

void
FUNC_5(tsd_t *VAR_3, unsigned VAR_4) {
 FUNC_0(FUNC_4(VAR_3), &VAR_2);
 tcaches_t *VAR_5 = &VAR_0[VAR_4];
 tcache_t *VAR_6 = FUNC_3(VAR_3, VAR_5);
 VAR_5->next = VAR_1;
 VAR_1 = VAR_5;
 FUNC_1(FUNC_4(VAR_3), &VAR_2);
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_3, VAR_6, 0);
 }
}
