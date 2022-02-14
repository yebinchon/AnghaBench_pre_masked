
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int (* tif_defstripsize ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ TIFF ;


 int FUNC_0 (TYPE_1__*,int ) ;

uint32
FUNC_1(TIFF* VAR_0, uint32 VAR_1)
{
 return (*VAR_0->tif_defstripsize)(VAR_0, VAR_1);
}
