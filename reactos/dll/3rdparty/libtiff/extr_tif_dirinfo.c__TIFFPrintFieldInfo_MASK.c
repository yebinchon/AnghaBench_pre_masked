
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {char* tif_name; size_t tif_nfields; TYPE_1__** tif_fields; } ;
struct TYPE_4__ {int field_name; scalar_t__ field_passcount; scalar_t__ field_oktochange; int field_bit; int field_type; int field_writecount; int field_readcount; scalar_t__ field_tag; } ;
typedef TYPE_1__ TIFFField ;
typedef TYPE_2__ TIFF ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void
FUNC_1(TIFF* VAR_0, FILE* VAR_1)
{
 uint32 VAR_2;

 FUNC_0(VAR_1, "%s: \n", VAR_0->tif_name);
 for (VAR_2 = 0; VAR_2 < VAR_0->tif_nfields; VAR_2++) {
  const TIFFField* VAR_3 = VAR_0->tif_fields[VAR_2];
  FUNC_0(VAR_1, "field[%2d] %5lu, %2d, %2d, %d, %2d, %5s, %5s, %s\n"
   , (int)VAR_2
   , (unsigned long) VAR_3->field_tag
   , VAR_3->field_readcount, VAR_3->field_writecount
   , VAR_3->field_type
   , VAR_3->field_bit
   , VAR_3->field_oktochange ? "TRUE" : "FALSE"
   , VAR_3->field_passcount ? "TRUE" : "FALSE"
   , VAR_3->field_name
  );
 }
}
