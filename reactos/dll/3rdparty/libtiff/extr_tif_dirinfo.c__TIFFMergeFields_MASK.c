
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_12__ {size_t tif_nfields; TYPE_1__** tif_fields; int tif_clientdata; int * tif_foundfield; } ;
struct TYPE_11__ {int field_tag; } ;
typedef TYPE_1__ TIFFField ;
typedef TYPE_2__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t,int,char const*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__**,size_t,int,char const*) ;
 int FUNC_4 (TYPE_1__**,size_t,int,int ) ;
 int VAR_1 ;

int
FUNC_5(TIFF* VAR_2, const TIFFField VAR_3[], uint32 VAR_4)
{
 static const char VAR_5[] = "_TIFFMergeFields";
 static const char VAR_6[] = "for fields array";

 uint32 VAR_7;

        VAR_2->tif_foundfield = ((void*)0);

 if (VAR_2->tif_fields && VAR_2->tif_nfields > 0) {
  VAR_2->tif_fields = (TIFFField**)
   FUNC_3(VAR_2, VAR_2->tif_fields,
       (VAR_2->tif_nfields + VAR_4),
       sizeof(TIFFField *), VAR_6);
 } else {
  VAR_2->tif_fields = (TIFFField **)
   FUNC_2(VAR_2, VAR_4, sizeof(TIFFField *),
      VAR_6);
 }
 if (!VAR_2->tif_fields) {
  FUNC_0(VAR_2->tif_clientdata, VAR_5,
        "Failed to allocate fields array");
  return 0;
 }


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  const TIFFField *VAR_8 =
   FUNC_1(VAR_2, VAR_3[VAR_7].field_tag, VAR_0);


  if (!VAR_8) {
                        VAR_2->tif_fields[VAR_2->tif_nfields] = (TIFFField *) (VAR_3+VAR_7);
                        VAR_2->tif_nfields++;
                }
 }


 FUNC_4(VAR_2->tif_fields, VAR_2->tif_nfields,
       sizeof(TIFFField *), VAR_1);

 return VAR_4;
}
