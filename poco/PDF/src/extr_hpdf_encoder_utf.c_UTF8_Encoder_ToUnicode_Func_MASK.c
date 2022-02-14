
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* UTF8_EncoderAttr ;
struct TYPE_7__ {scalar_t__* cid_map; } ;
struct TYPE_6__ {scalar_t__ attr; } ;
struct TYPE_5__ {int end_byte; int* utf8_bytes; } ;
typedef unsigned int HPDF_UNICODE ;
typedef int HPDF_UINT16 ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;



__attribute__((used)) static HPDF_UNICODE
FUNC_0 (HPDF_Encoder VAR_0,
                              HPDF_UINT16 VAR_1)
{




    HPDF_CMapEncoderAttr VAR_2;
    UTF8_EncoderAttr VAR_3;
    unsigned int VAR_4;

    VAR_2 = (HPDF_CMapEncoderAttr) VAR_0->attr;
    VAR_3 = (UTF8_EncoderAttr) ((void *)VAR_2->cid_map[0]);

    switch (VAR_3->end_byte) {
    case 3:
 VAR_4 = (unsigned int) ((VAR_3->utf8_bytes[0] & 0x7) << 18) +
     (unsigned int) ((VAR_3->utf8_bytes[1]) << 12) +
     (unsigned int) ((VAR_3->utf8_bytes[2] & 0x3f) << 6) +
     (unsigned int) ((VAR_3->utf8_bytes[3] & 0x3f));
 break;
    case 2:
 VAR_4 = (unsigned int) ((VAR_3->utf8_bytes[0] & 0xf) << 12) +
     (unsigned int) ((VAR_3->utf8_bytes[1] & 0x3f) << 6) +
     (unsigned int) ((VAR_3->utf8_bytes[2] & 0x3f));
 break;
    case 1:
 VAR_4 = (unsigned int) ((VAR_3->utf8_bytes[0] & 0x1f) << 6) +
     (unsigned int) ((VAR_3->utf8_bytes[1] & 0x3f));
 break;
    case 0:
 VAR_4 = (unsigned int) VAR_3->utf8_bytes[0];
 break;
    default:
 VAR_4 = 32;
    }

    if (VAR_4 > 65535)
        VAR_4 = 32;

    return VAR_4;
}
