
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint16 ;
struct TYPE_8__ {scalar_t__ tiff_diroff; } ;
struct TYPE_9__ {scalar_t__ tiff_diroff; } ;
struct TYPE_10__ {TYPE_1__ big; TYPE_2__ classic; } ;
struct TYPE_11__ {int tif_flags; scalar_t__ tif_dirnumber; scalar_t__ tif_curdir; scalar_t__ tif_nextdiroff; TYPE_3__ tif_header; } ;
typedef TYPE_4__ TIFF ;


 int FUNC_0 (TYPE_4__*,scalar_t__*,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;

int
FUNC_2(TIFF* VAR_1, uint16 VAR_2)
{
 uint64 VAR_3;
 uint16 VAR_4;

 if (!(VAR_1->tif_flags&VAR_0))
  VAR_3 = VAR_1->tif_header.classic.tiff_diroff;
 else
  VAR_3 = VAR_1->tif_header.big.tiff_diroff;
 for (VAR_4 = VAR_2; VAR_4 > 0 && VAR_3 != 0; VAR_4--)
  if (!FUNC_0(VAR_1, &VAR_3, ((void*)0)))
   return (0);
 VAR_1->tif_nextdiroff = VAR_3;





 VAR_1->tif_curdir = (VAR_2 - VAR_4) - 1;




 VAR_1->tif_dirnumber = 0;
 return (FUNC_1(VAR_1));
}
