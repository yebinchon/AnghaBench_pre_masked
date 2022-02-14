
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_dyldcache_lib_t {char* path; } ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct r_bin_dyldcache_lib_t *VAR_0, char **VAR_1) {
 char *VAR_2 = VAR_0->path;
 char *VAR_3 = VAR_0->path;
 int VAR_4 = FUNC_1 (VAR_0->path);
 while (VAR_2 < VAR_2 + VAR_4 - 1) {
  VAR_2 = FUNC_0 (VAR_2, '/');
  if (!VAR_2) {
   break;
  }
  VAR_2++;
  VAR_3 = VAR_2;
 }
 *VAR_1 = VAR_3;
}
