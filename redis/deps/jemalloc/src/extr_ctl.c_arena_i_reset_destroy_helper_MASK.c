
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,unsigned int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(tsd_t *VAR_1, const size_t *VAR_2, size_t VAR_3,
    void *VAR_4, size_t *VAR_5, void *VAR_6, size_t VAR_7, unsigned *VAR_8,
    arena_t **VAR_9) {
 int VAR_10;

 FUNC_1();
 FUNC_2();
 FUNC_0(*VAR_8, 1);

 *VAR_9 = FUNC_3(FUNC_5(VAR_1), *VAR_8, 0);
 if (*VAR_9 == ((void*)0) || FUNC_4(*VAR_9)) {
  VAR_10 = VAR_0;
  goto label_return;
 }

 VAR_10 = 0;
label_return:
 return VAR_10;
}
