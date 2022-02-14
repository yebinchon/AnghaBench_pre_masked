
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* UTF8_EncoderAttr ;
struct TYPE_10__ {scalar_t__* cid_map; } ;
struct TYPE_9__ {scalar_t__ attr; } ;
struct TYPE_8__ {size_t index; int* text; int len; } ;
struct TYPE_7__ {int current_byte; int* utf8_bytes; int end_byte; } ;
typedef TYPE_2__ HPDF_ParseText_Rec ;
typedef TYPE_3__* HPDF_Encoder ;
typedef TYPE_4__* HPDF_CMapEncoderAttr ;
typedef int HPDF_ByteType ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static HPDF_ByteType
FUNC_1 (HPDF_Encoder VAR_2,
                             HPDF_ParseText_Rec *VAR_3)
{
    HPDF_CMapEncoderAttr VAR_4;
    HPDF_BYTE VAR_5;
    UTF8_EncoderAttr VAR_6;

    VAR_4 = (HPDF_CMapEncoderAttr) VAR_2->attr;
    VAR_6 = (UTF8_EncoderAttr) ((void *)VAR_4->cid_map[0]);

    if (VAR_3->index == 0) {

 FUNC_0 ((" UTF8_Encoder_ByteType_Func - Initialize: (%u) %s\n",
        VAR_3->len, VAR_3->text));

 VAR_6->current_byte = 0;
    }

    VAR_5 = VAR_3->text[VAR_3->index];
    VAR_3->index++;

    FUNC_0 ((" UTF8_Encoder_ByteType_Func - Byte: %hx\n", VAR_5));

    if (VAR_6->current_byte == 0) {
 VAR_6->utf8_bytes[0] = VAR_5;
 VAR_6->current_byte = 1;

 if (!(VAR_5 & 0x80)) {
     VAR_6->current_byte = 0;
     VAR_6->end_byte = 0;
     return VAR_0;
 }

 if ((VAR_5 & 0xf8) == 0xf0)
     VAR_6->end_byte = 3;
 else if ((VAR_5 & 0xf0) == 0xe0)
     VAR_6->end_byte = 2;
 else if ((VAR_5 & 0xe0) == 0xc0)
     VAR_6->end_byte = 1;
 else
     VAR_6->current_byte = 0;
    } else {
 VAR_6->utf8_bytes[VAR_6->current_byte] = VAR_5;
 if (VAR_6->current_byte == VAR_6->end_byte) {
     VAR_6->current_byte = 0;
     return VAR_0;
 }

 VAR_6->current_byte++;
    }

    return VAR_1;
}
