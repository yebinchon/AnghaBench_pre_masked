
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int *,size_t*,size_t*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(tsd_t *VAR_2, const char *VAR_3, size_t *VAR_4, size_t *VAR_5) {
 int VAR_6;

 if (!VAR_1 && FUNC_0(VAR_2)) {
  VAR_6 = VAR_0;
  goto label_return;
 }

 VAR_6 = FUNC_1(FUNC_2(VAR_2), VAR_3, ((void*)0), VAR_4, VAR_5);
label_return:
 return(VAR_6);
}
