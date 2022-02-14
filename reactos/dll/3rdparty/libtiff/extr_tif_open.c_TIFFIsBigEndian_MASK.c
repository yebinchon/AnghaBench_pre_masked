
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tiff_magic; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct TYPE_7__ {TYPE_2__ tif_header; } ;
typedef TYPE_3__ TIFF ;


 scalar_t__ VAR_0 ;

int
FUNC_0(TIFF* VAR_1)
{
 return (VAR_1->tif_header.common.tiff_magic == VAR_0);
}
