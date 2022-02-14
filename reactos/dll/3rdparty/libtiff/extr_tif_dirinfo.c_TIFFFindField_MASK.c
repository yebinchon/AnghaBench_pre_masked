
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {TYPE_1__ const* tif_foundfield; int tif_nfields; int tif_fields; } ;
struct TYPE_6__ {scalar_t__ field_tag; scalar_t__ field_type; int * member_11; int * member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ TIFFField ;
typedef scalar_t__ TIFFDataType ;
typedef TYPE_2__ TIFF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__**,int ,int ,int,int ) ;
 int VAR_2 ;

const TIFFField*
FUNC_1(TIFF* VAR_3, uint32 VAR_4, TIFFDataType VAR_5)
{
 TIFFField VAR_6 = {0, 0, 0, &VAR_1, 0, 0, 0, 0, 0, 0, ((void*)0), ((void*)0)};
 TIFFField* VAR_7 = &VAR_6;
 const TIFFField **VAR_8;
 if (VAR_3->tif_foundfield && VAR_3->tif_foundfield->field_tag == VAR_4 &&
     (VAR_5 == VAR_0 || VAR_5 == VAR_3->tif_foundfield->field_type))
  return VAR_3->tif_foundfield;


 if (!VAR_3->tif_fields)
  return ((void*)0);



 VAR_6.field_tag = VAR_4;
 VAR_6.field_type = VAR_5;

 VAR_8 = (const TIFFField **) FUNC_0(&VAR_7, VAR_3->tif_fields,
        VAR_3->tif_nfields,
        sizeof(TIFFField *), VAR_2);
 return VAR_3->tif_foundfield = (VAR_8 ? *VAR_8 : ((void*)0));
}
