
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tif_flags; int tif_deftilesize; int tif_defstripsize; void* tif_cleanup; int tif_seek; void* tif_close; int tif_encodetile; int tif_encodestrip; int tif_encoderow; void* tif_postencode; void* tif_preencode; void* tif_setupencode; void* tif_encodestatus; int tif_decodetile; int tif_decodestrip; int tif_decoderow; void* tif_predecode; void* tif_setupdecode; void* tif_decodestatus; int tif_fixuptags; } ;
typedef TYPE_1__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;

void
FUNC_0(TIFF* VAR_16)
{
 VAR_16->tif_fixuptags = VAR_5;
 VAR_16->tif_decodestatus = VAR_2;
 VAR_16->tif_setupdecode = VAR_14;
 VAR_16->tif_predecode = VAR_6;
 VAR_16->tif_decoderow = VAR_7;
 VAR_16->tif_decodestrip = VAR_10;
 VAR_16->tif_decodetile = VAR_12;
 VAR_16->tif_encodestatus = VAR_2;
 VAR_16->tif_setupencode = VAR_14;
 VAR_16->tif_preencode = VAR_6;
 VAR_16->tif_postencode = VAR_14;
 VAR_16->tif_encoderow = VAR_8;
 VAR_16->tif_encodestrip = VAR_11;
 VAR_16->tif_encodetile = VAR_13;
 VAR_16->tif_close = VAR_15;
 VAR_16->tif_seek = VAR_9;
 VAR_16->tif_cleanup = VAR_15;
 VAR_16->tif_defstripsize = VAR_3;
 VAR_16->tif_deftilesize = VAR_4;
 VAR_16->tif_flags &= ~(VAR_0|VAR_1);
}
