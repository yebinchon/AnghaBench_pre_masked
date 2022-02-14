
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tif_seek; void* tif_encodetile; void* tif_encodestrip; void* tif_encoderow; void* tif_decodetile; void* tif_decodestrip; void* tif_decoderow; int tif_fixuptags; } ;
typedef TYPE_1__ TIFF ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

int
FUNC_0(TIFF* VAR_4, int VAR_5)
{
 (void) VAR_5;
 VAR_4->tif_fixuptags = VAR_0;
 VAR_4->tif_decoderow = VAR_1;
 VAR_4->tif_decodestrip = VAR_1;
 VAR_4->tif_decodetile = VAR_1;
 VAR_4->tif_encoderow = VAR_2;
 VAR_4->tif_encodestrip = VAR_2;
 VAR_4->tif_encodetile = VAR_2;
 VAR_4->tif_seek = VAR_3;
 return (1);
}
