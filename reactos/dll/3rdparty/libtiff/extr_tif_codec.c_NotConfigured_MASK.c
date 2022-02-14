
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* tif_setupencode; void* tif_encodestatus; void* tif_setupdecode; void* tif_decodestatus; void* tif_fixuptags; } ;
typedef TYPE_1__ TIFF ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static int
FUNC_0(TIFF* VAR_2, int VAR_3)
{
 (void) VAR_3;

 VAR_2->tif_fixuptags = VAR_1;
 VAR_2->tif_decodestatus = VAR_0;
 VAR_2->tif_setupdecode = VAR_1;
 VAR_2->tif_encodestatus = VAR_0;
 VAR_2->tif_setupencode = VAR_1;
 return (1);
}
