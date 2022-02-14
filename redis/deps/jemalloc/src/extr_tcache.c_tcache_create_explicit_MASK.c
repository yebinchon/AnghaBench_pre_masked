
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,size_t,int ,int,int *,int,int ) ;
 int VAR_2 ;
 size_t FUNC_4 (size_t,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int *,void*) ;
 int FUNC_7 (int *) ;

tcache_t *
FUNC_8(tsd_t *VAR_3) {
 tcache_t *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_5 = sizeof(tcache_t);

 VAR_5 = FUNC_0(VAR_5);
 VAR_6 = VAR_5;
 VAR_5 += VAR_2 * sizeof(void *);

 VAR_5 = FUNC_4(VAR_5, VAR_0);

 VAR_4 = FUNC_3(FUNC_7(VAR_3), VAR_5, VAR_0, 1, ((void*)0), 1,
     FUNC_1(VAR_1, 0, 1));
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_6(VAR_3, VAR_4,
     (void *)((uintptr_t)VAR_4 + (uintptr_t)VAR_6));
 FUNC_5(FUNC_7(VAR_3), VAR_4, FUNC_2(VAR_3, ((void*)0)));

 return VAR_4;
}
