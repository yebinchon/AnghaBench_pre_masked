
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 int * FUNC_0 (int *,unsigned int,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int *,void*,size_t,size_t,int*,int*) ;
 int * FUNC_3 () ;

__attribute__((used)) static void *
FUNC_4(extent_hooks_t *VAR_0, void *VAR_1, size_t VAR_2,
    size_t VAR_3, bool *VAR_4, bool *VAR_5, unsigned VAR_6) {
 tsdn_t *VAR_7;
 arena_t *VAR_8;

 VAR_7 = FUNC_3();
 VAR_8 = FUNC_0(VAR_7, VAR_6, 0);




 FUNC_1(VAR_8 != ((void*)0));

 return FUNC_2(VAR_7, VAR_8, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5);
}
