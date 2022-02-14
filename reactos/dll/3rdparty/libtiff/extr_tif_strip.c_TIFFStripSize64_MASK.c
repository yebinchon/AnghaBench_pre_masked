
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
struct TYPE_5__ {scalar_t__ td_rowsperstrip; scalar_t__ td_imagelength; } ;
struct TYPE_6__ {TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;

uint64
FUNC_1(TIFF* VAR_0)
{
 TIFFDirectory* VAR_1 = &VAR_0->tif_dir;
 uint32 VAR_2 = VAR_1->td_rowsperstrip;
 if (VAR_2 > VAR_1->td_imagelength)
  VAR_2 = VAR_1->td_imagelength;
 return (FUNC_0(VAR_0, VAR_2));
}
