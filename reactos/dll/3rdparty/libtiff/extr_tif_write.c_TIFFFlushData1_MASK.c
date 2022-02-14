
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_7__ {int td_fillorder; } ;
struct TYPE_8__ {scalar_t__ tif_rawcc; int tif_flags; scalar_t__ tif_rawdata; scalar_t__ tif_rawcp; int tif_curstrip; int tif_curtile; TYPE_1__ tif_dir; } ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

int
FUNC_4(TIFF* VAR_2)
{
 if (VAR_2->tif_rawcc > 0 && VAR_2->tif_flags & VAR_0 ) {
  if (!FUNC_2(VAR_2, VAR_2->tif_dir.td_fillorder) &&
      (VAR_2->tif_flags & VAR_1) == 0)
   FUNC_1((uint8*)VAR_2->tif_rawdata,
       VAR_2->tif_rawcc);
  if (!FUNC_0(VAR_2,
      FUNC_3(VAR_2) ? VAR_2->tif_curtile : VAR_2->tif_curstrip,
      VAR_2->tif_rawdata, VAR_2->tif_rawcc))
        {



            VAR_2->tif_rawcc = 0;
            VAR_2->tif_rawcp = VAR_2->tif_rawdata;
   return (0);
        }
  VAR_2->tif_rawcc = 0;
  VAR_2->tif_rawcp = VAR_2->tif_rawdata;
 }
 return (1);
}
