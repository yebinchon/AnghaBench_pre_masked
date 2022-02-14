
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int tcache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5(tsd_t *VAR_6) {
 bool VAR_7;

 FUNC_2(FUNC_4(VAR_6), &VAR_4);

 if (VAR_2 == ((void*)0)) {
  VAR_2 = FUNC_1(FUNC_4(VAR_6), FUNC_0(), sizeof(tcache_t *)
      * (VAR_1+1), VAR_0);
  if (VAR_2 == ((void*)0)) {
   VAR_7 = 1;
   goto label_return;
  }
 }

 if (VAR_3 == ((void*)0) && VAR_5 > VAR_1) {
  VAR_7 = 1;
  goto label_return;
 }

 VAR_7 = 0;
label_return:
 FUNC_3(FUNC_4(VAR_6), &VAR_4);
 return VAR_7;
}
