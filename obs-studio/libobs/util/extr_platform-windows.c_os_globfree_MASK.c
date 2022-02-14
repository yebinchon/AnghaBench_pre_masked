
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t gl_pathc; struct TYPE_4__* gl_pathv; struct TYPE_4__* path; } ;
typedef TYPE_1__ os_glob_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(os_glob_t *VAR_0)
{
 if (VAR_0) {
  for (size_t VAR_1 = 0; VAR_1 < VAR_0->gl_pathc; VAR_1++)
   FUNC_0(VAR_0->gl_pathv[VAR_1].path);
  FUNC_0(VAR_0->gl_pathv);
  FUNC_0(VAR_0);
 }
}
