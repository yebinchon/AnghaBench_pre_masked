
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libgdbr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,char*) ;

int FUNC_5(libgdbr_t *VAR_0) {
 int VAR_1 = -1;
 if (!FUNC_0 (VAR_0)) {
  goto end;
 }
 if (!VAR_0 || FUNC_4 (VAR_0, "?") < 0 || FUNC_3 (VAR_0, 0) < 0) {
  VAR_1 = -1;
  goto end;
 }
 VAR_1 = FUNC_2 (VAR_0);
end:
 FUNC_1 (VAR_0);
 return VAR_1;
}
