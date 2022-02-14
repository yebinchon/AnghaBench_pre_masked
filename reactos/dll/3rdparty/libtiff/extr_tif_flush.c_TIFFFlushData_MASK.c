
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tif_flags; int (* tif_postencode ) (TYPE_1__*) ;} ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(TIFF* VAR_2)
{
 if ((VAR_2->tif_flags & VAR_0) == 0)
  return (1);
 if (VAR_2->tif_flags & VAR_1) {
  VAR_2->tif_flags &= ~VAR_1;
  if (!(*VAR_2->tif_postencode)(VAR_2))
   return (0);
 }
 return (FUNC_0(VAR_2));
}
