
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_15__ {scalar_t__ tif_nfieldscompat; int tif_clientdata; TYPE_2__* tif_fieldscompat; } ;
struct TYPE_14__ {int * field_subfields; int field_name; int field_passcount; int field_oktochange; int field_bit; void* get_field_type; void* set_field_type; scalar_t__ reserved; int field_type; int field_writecount; int field_readcount; int field_tag; } ;
struct TYPE_13__ {size_t allocated_size; size_t count; TYPE_3__* fields; int type; } ;
struct TYPE_12__ {int field_name; int field_passcount; int field_oktochange; int field_bit; int field_readcount; int field_type; int field_writecount; int field_tag; } ;
typedef TYPE_1__ TIFFFieldInfo ;
typedef TYPE_2__ TIFFFieldArray ;
typedef TYPE_3__ TIFFField ;
typedef TYPE_4__ TIFF ;


 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,size_t,int,char const*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_2__*,scalar_t__,int,char const*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,size_t) ;
 void* FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_5(TIFF* VAR_1, const TIFFFieldInfo VAR_2[], uint32 VAR_3)
{
 static const char VAR_4[] = "TIFFMergeFieldInfo";
 static const char VAR_5[] = "for fields array";
 TIFFField *VAR_6;
 size_t VAR_7;
 uint32 VAR_8;

 if (VAR_1->tif_nfieldscompat > 0) {
  VAR_1->tif_fieldscompat = (TIFFFieldArray *)
   FUNC_2(VAR_1, VAR_1->tif_fieldscompat,
       VAR_1->tif_nfieldscompat + 1,
       sizeof(TIFFFieldArray), VAR_5);
 } else {
  VAR_1->tif_fieldscompat = (TIFFFieldArray *)
   FUNC_1(VAR_1, 1, sizeof(TIFFFieldArray),
      VAR_5);
 }
 if (!VAR_1->tif_fieldscompat) {
  FUNC_0(VAR_1->tif_clientdata, VAR_4,
        "Failed to allocate fields array");
  return -1;
 }
 VAR_7 = VAR_1->tif_nfieldscompat++;

 VAR_1->tif_fieldscompat[VAR_7].type = VAR_0;
 VAR_1->tif_fieldscompat[VAR_7].allocated_size = VAR_3;
 VAR_1->tif_fieldscompat[VAR_7].count = VAR_3;
 VAR_1->tif_fieldscompat[VAR_7].fields =
  (TIFFField *)FUNC_1(VAR_1, VAR_3, sizeof(TIFFField),
           VAR_5);
 if (!VAR_1->tif_fieldscompat[VAR_7].fields) {
  FUNC_0(VAR_1->tif_clientdata, VAR_4,
        "Failed to allocate fields array");
  return -1;
 }

 VAR_6 = VAR_1->tif_fieldscompat[VAR_7].fields;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_6->field_tag = VAR_2[VAR_8].field_tag;
  VAR_6->field_readcount = VAR_2[VAR_8].field_readcount;
  VAR_6->field_writecount = VAR_2[VAR_8].field_writecount;
  VAR_6->field_type = VAR_2[VAR_8].field_type;
  VAR_6->reserved = 0;
  VAR_6->set_field_type =
       FUNC_4(VAR_2[VAR_8].field_type,
    VAR_2[VAR_8].field_readcount,
    VAR_2[VAR_8].field_passcount);
  VAR_6->get_field_type =
       FUNC_4(VAR_2[VAR_8].field_type,
    VAR_2[VAR_8].field_readcount,
    VAR_2[VAR_8].field_passcount);
  VAR_6->field_bit = VAR_2[VAR_8].field_bit;
  VAR_6->field_oktochange = VAR_2[VAR_8].field_oktochange;
  VAR_6->field_passcount = VAR_2[VAR_8].field_passcount;
  VAR_6->field_name = VAR_2[VAR_8].field_name;
  VAR_6->field_subfields = ((void*)0);
  VAR_6++;
 }

 if (!FUNC_3(VAR_1, VAR_1->tif_fieldscompat[VAR_7].fields, VAR_3)) {
  FUNC_0(VAR_1->tif_clientdata, VAR_4,
        "Setting up field info failed");
  return -1;
 }

 return 0;
}
