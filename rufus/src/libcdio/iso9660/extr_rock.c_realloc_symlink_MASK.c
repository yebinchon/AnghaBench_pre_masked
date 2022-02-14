
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int i_symlink; char* psz_symlink; int i_symlink_max; } ;
struct TYPE_5__ {TYPE_1__ rr; } ;
typedef TYPE_2__ iso9660_stat_t ;


 scalar_t__ FUNC_0 (int,int const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_3( iso9660_stat_t *VAR_0, uint8_t VAR_1)
{
  if (!VAR_0->rr.i_symlink) {
    const uint16_t VAR_2 = 2*VAR_1+1;
    VAR_0->rr.psz_symlink = (char *) FUNC_0(1, VAR_2);
    VAR_0->rr.i_symlink_max = VAR_2;
    return (((void*)0) != VAR_0->rr.psz_symlink);
  } else {
    unsigned int VAR_3 = VAR_0->rr.i_symlink + VAR_1 ;
    if ( VAR_3 <= VAR_0->rr.i_symlink_max)
      return 1;
    else {
      char * VAR_4 = (char *) FUNC_0(1, 2*VAR_3);
      if (!VAR_4) return 0;
      VAR_0->rr.i_symlink_max = 2*VAR_3;
      FUNC_2(VAR_4, VAR_0->rr.psz_symlink, VAR_0->rr.i_symlink);
      FUNC_1(VAR_0->rr.psz_symlink);
      VAR_0->rr.psz_symlink = VAR_4;
      return 1;
    }
  }
}
