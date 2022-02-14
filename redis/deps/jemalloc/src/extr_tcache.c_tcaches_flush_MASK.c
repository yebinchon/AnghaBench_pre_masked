
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * VAR_0 ;
 int * FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

void
FUNC_5(tsd_t *VAR_2, unsigned VAR_3) {
 FUNC_0(FUNC_4(VAR_2), &VAR_1);
 tcache_t *VAR_4 = FUNC_3(VAR_2, &VAR_0[VAR_3]);
 FUNC_1(FUNC_4(VAR_2), &VAR_1);
 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_2, VAR_4, 0);
 }
}
