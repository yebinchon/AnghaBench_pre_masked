
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct posix_glob_info* gl_pathv; } ;
struct posix_glob_info {TYPE_1__ base; int gl; } ;
typedef int os_glob_t ;


 int FUNC_0 (struct posix_glob_info*) ;
 int FUNC_1 (int *) ;

void FUNC_2(os_glob_t *VAR_0)
{
 if (VAR_0) {
  struct posix_glob_info *VAR_1 = (struct posix_glob_info *)VAR_0;
  FUNC_1(&VAR_1->gl);

  FUNC_0(VAR_1->base.gl_pathv);
  FUNC_0(VAR_1);
 }
}
