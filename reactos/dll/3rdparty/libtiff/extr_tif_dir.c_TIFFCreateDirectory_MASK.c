
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint32 ;
struct TYPE_4__ {void* tif_curstrip; void* tif_row; scalar_t__ tif_curoff; scalar_t__ tif_nextdiroff; scalar_t__ tif_diroff; } ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(TIFF* VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->tif_diroff = 0;
 VAR_0->tif_nextdiroff = 0;
 VAR_0->tif_curoff = 0;
 VAR_0->tif_row = (uint32) -1;
 VAR_0->tif_curstrip = (uint32) -1;

 return 0;
}
