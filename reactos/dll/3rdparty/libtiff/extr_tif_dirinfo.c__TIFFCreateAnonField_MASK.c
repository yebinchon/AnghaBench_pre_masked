
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_5__ {int field_type; char* field_name; int * field_subfields; void* field_passcount; void* field_oktochange; int field_bit; void* get_field_type; void* set_field_type; scalar_t__ reserved; void* field_writecount; void* field_readcount; scalar_t__ field_tag; } ;
typedef TYPE_1__ TIFFField ;
typedef int TIFFDataType ;
typedef int TIFF ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;






 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,int,char*,int) ;

TIFFField*
FUNC_4(TIFF *VAR_16, uint32 VAR_17, TIFFDataType VAR_18)
{
 TIFFField *VAR_19;
 (void) VAR_16;

 VAR_19 = (TIFFField *) FUNC_1(sizeof (TIFFField));
 if (VAR_19 == ((void*)0))
     return ((void*)0);
 FUNC_2(VAR_19, 0, sizeof(TIFFField));

 VAR_19->field_tag = VAR_17;
 VAR_19->field_readcount = VAR_14;
 VAR_19->field_writecount = VAR_14;
 VAR_19->field_type = VAR_18;
 VAR_19->reserved = 0;
 switch (VAR_18)
 {
  case 142:
  case 128:
   VAR_19->set_field_type = VAR_12;
   VAR_19->get_field_type = VAR_12;
   break;
  case 143:
   VAR_19->set_field_type = VAR_1;
   VAR_19->get_field_type = VAR_1;
   break;
  case 133:
   VAR_19->set_field_type = VAR_9;
   VAR_19->get_field_type = VAR_9;
   break;
  case 137:
   VAR_19->set_field_type = VAR_10;
   VAR_19->get_field_type = VAR_10;
   break;
  case 135:
  case 130:
  case 140:
   VAR_19->set_field_type = VAR_3;
   VAR_19->get_field_type = VAR_3;
   break;
  case 134:
   VAR_19->set_field_type = VAR_8;
   VAR_19->get_field_type = VAR_8;
   break;
  case 129:
   VAR_19->set_field_type = VAR_5;
   VAR_19->get_field_type = VAR_5;
   break;
  case 132:
   VAR_19->set_field_type = VAR_6;
   VAR_19->get_field_type = VAR_6;
   break;
  case 141:
   VAR_19->set_field_type = VAR_2;
   VAR_19->get_field_type = VAR_2;
   break;
  case 139:
  case 138:
   VAR_19->set_field_type = VAR_4;
   VAR_19->get_field_type = VAR_4;
   break;
  case 136:
   VAR_19->set_field_type = VAR_11;
   VAR_19->get_field_type = VAR_11;
   break;
  case 131:
   VAR_19->set_field_type = VAR_7;
   VAR_19->get_field_type = VAR_7;
   break;
  default:
   VAR_19->set_field_type = VAR_13;
   VAR_19->get_field_type = VAR_13;
   break;
 }
 VAR_19->field_bit = VAR_0;
 VAR_19->field_oktochange = VAR_15;
 VAR_19->field_passcount = VAR_15;
 VAR_19->field_name = (char *) FUNC_1(32);
 if (VAR_19->field_name == ((void*)0)) {
     FUNC_0(VAR_19);
     return ((void*)0);
 }
 VAR_19->field_subfields = ((void*)0);





 (void) FUNC_3(VAR_19->field_name, 32, "Tag %d", (int) VAR_17);

 return VAR_19;
}
