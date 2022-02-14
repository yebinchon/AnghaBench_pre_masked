
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ psz_symlink; } ;
struct TYPE_6__ {TYPE_1__ rr; } ;
typedef TYPE_2__ iso9660_stat_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(iso9660_stat_t *VAR_0)
{
  if (VAR_0 != ((void*)0)) {
    if (VAR_0->rr.psz_symlink) {
      FUNC_0(VAR_0->rr.psz_symlink);
    }
    FUNC_1(VAR_0);
  }
}
