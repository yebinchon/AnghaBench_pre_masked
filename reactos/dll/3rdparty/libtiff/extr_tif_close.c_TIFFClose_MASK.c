
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int thandle_t ;
struct TYPE_4__ {int tif_clientdata; int (* tif_closeproc ) (int ) ;} ;
typedef int (* TIFFCloseProc ) (int ) ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(TIFF* VAR_0)
{
 TIFFCloseProc VAR_1 = VAR_0->tif_closeproc;
 thandle_t VAR_2 = VAR_0->tif_clientdata;

 FUNC_0(VAR_0);
 (void) (*VAR_1)(VAR_2);
}
