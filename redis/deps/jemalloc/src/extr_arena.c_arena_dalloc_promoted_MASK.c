
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int tcache_t ;
typedef int extent_t ;


 size_t FUNC_0 (int *,int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int ,int *,void*,int ,int) ;
 size_t VAR_2 ;
 int FUNC_7 (int *) ;

void
FUNC_8(tsdn_t *VAR_3, void *VAR_4, tcache_t *VAR_5,
    bool VAR_6) {
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);

 extent_t *VAR_7 = FUNC_3(VAR_3, VAR_4);
 size_t VAR_8 = FUNC_0(VAR_3, VAR_7, VAR_4);
 if (VAR_8 <= VAR_2) {
  FUNC_6(FUNC_7(VAR_3), VAR_5, VAR_4,
      FUNC_5(VAR_8), VAR_6);
 } else {
  FUNC_4(VAR_3, VAR_7);
 }
}
