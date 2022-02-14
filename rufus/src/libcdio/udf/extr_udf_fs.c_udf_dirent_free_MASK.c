
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* sector; struct TYPE_4__* psz_name; int * fid; } ;
typedef TYPE_1__ udf_dirent_t ;


 int FUNC_0 (TYPE_1__*) ;

bool
FUNC_1(udf_dirent_t *VAR_0)
{
  if (VAR_0) {
    VAR_0->fid = ((void*)0);
    FUNC_0(VAR_0->psz_name);
    FUNC_0(VAR_0->sector);
    FUNC_0(VAR_0);
  }
  return 1;
}
