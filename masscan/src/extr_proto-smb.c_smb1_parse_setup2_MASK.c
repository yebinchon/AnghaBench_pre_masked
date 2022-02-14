
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {unsigned int byte_state; size_t byte_count; size_t byte_offset; int flags2; unsigned char unicode_char; } ;
struct TYPE_8__ {TYPE_3__ smb1; } ;
struct TYPE_5__ {size_t BlobOffset; size_t BlobLength; } ;
struct TYPE_6__ {TYPE_1__ setup; } ;
struct SMBSTUFF {TYPE_4__ hdr; TYPE_2__ parms; int spnego; } ;
struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_1 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_2 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_3 (int *,unsigned char const*,size_t,struct BannerOutput*) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static size_t
FUNC_5(struct SMBSTUFF *VAR_2, const unsigned char *VAR_3, size_t VAR_4, size_t VAR_5, struct BannerOutput *VAR_6)
{
    size_t VAR_7 = VAR_4;
    unsigned VAR_8 = VAR_2->hdr.smb1.byte_state;
    enum {
        D_BLOB,
        D_PADDING,
        D_PADDING2,
        D_OSA1,
        D_OSA2,
        D_VERSIONA1,
        D_VERSIONA2,
        D_DOMAINA1,
        D_DOMAINA2,
        D_ENDA,

        D_OSU1,
        D_OSU2,
        D_OSU3,
        D_OSU4,
        D_VERSION1,
        D_VERSION2,
        D_VERSION3,
        D_VERSION4,
        D_DOMAIN1,
        D_DOMAIN2,
        D_DOMAIN3,
        D_DOMAIN4,

        D_UNKNOWN,
    };

    if (VAR_5 > VAR_4 + (VAR_2->hdr.smb1.byte_count - VAR_2->hdr.smb1.byte_offset))
        VAR_5 = VAR_4 + (VAR_2->hdr.smb1.byte_count - VAR_2->hdr.smb1.byte_offset);

    for (;VAR_4<VAR_5; VAR_4++) {

        switch (VAR_8) {
            case D_BLOB:
                if (VAR_2->parms.setup.BlobOffset == 0) {
                    FUNC_4(&VAR_2->spnego, VAR_2->parms.setup.BlobLength);
                }
            {
                size_t VAR_9 = VAR_5;
                if (VAR_9 > VAR_4 + VAR_2->parms.setup.BlobLength - VAR_2->parms.setup.BlobOffset)
                    VAR_9 = VAR_4 + VAR_2->parms.setup.BlobLength - VAR_2->parms.setup.BlobOffset;
                FUNC_3(&VAR_2->spnego, VAR_3+VAR_4, VAR_9-VAR_4, VAR_6);

                VAR_2->parms.setup.BlobOffset += (uint16_t)(VAR_9-VAR_4);
                VAR_4 = VAR_9;
                if (VAR_2->parms.setup.BlobLength - VAR_2->parms.setup.BlobOffset == 0) {
                    VAR_4--;
                    VAR_8 = D_PADDING;
                }
            }
                break;
            case D_PADDING:



                    VAR_4--;
                VAR_8 = D_PADDING2;
                break;
            case D_PADDING2:
                if (VAR_2->hdr.smb1.flags2 & 0x8000) {
                    VAR_8 = D_OSU1;
                } else {
                    VAR_8 = D_OSA1;
                }
                VAR_4--;
                break;
            case D_OSA1:
                if (VAR_3[VAR_4] == 0)
                    VAR_8 = D_VERSIONA1;
                else {
                    FUNC_0(VAR_6, VAR_1, " os=", VAR_0);
                    FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                    VAR_8 = D_OSA2;
                }
                break;
            case D_OSA2:
                if (VAR_3[VAR_4] == 0)
                    VAR_8 = D_VERSIONA1;
                else
                    FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                break;

            case D_VERSIONA1:
                if (VAR_3[VAR_4] == 0)
                    VAR_8 = D_DOMAINA1;
                else {
                    FUNC_0(VAR_6, VAR_1, " ver=", VAR_0);
                    FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                    VAR_8 = D_VERSIONA2;
                }
                break;
            case D_VERSIONA2:
                if (VAR_3[VAR_4] == 0)
                    VAR_8 = D_DOMAINA1;
                else
                    FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                break;
            case D_DOMAINA1:
                if (VAR_3[VAR_4] == 0)
                    VAR_8 = D_UNKNOWN;
                else {
                    FUNC_0(VAR_6, VAR_1, " domain=", VAR_0);
                    FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                    VAR_8 = D_DOMAINA2;
                }
                break;
            case D_DOMAINA2:
                if (VAR_3[VAR_4] == 0)
                    VAR_8 = D_UNKNOWN;
                else
                    FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                break;

            case D_OSU1:
            case D_OSU3:
            case D_VERSION1:
            case D_VERSION3:
            case D_DOMAIN1:
            case D_DOMAIN3:
                VAR_2->hdr.smb1.unicode_char = VAR_3[VAR_4];
                VAR_8++;
                break;

            case D_OSU2:
                VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
                if (VAR_2->hdr.smb1.unicode_char == 0)
                    VAR_8 = D_VERSION1;
                else {
                    FUNC_0(VAR_6, VAR_1, " os=", VAR_0);
                    FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                    VAR_8 = D_OSU3;
                }
                break;

            case D_OSU4:
                VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
                if (VAR_2->hdr.smb1.unicode_char == 0)
                    VAR_8 = D_VERSION1;
                else {
                    FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                    VAR_8--;
                }
                break;


            case D_VERSION2:
                VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
                if (VAR_2->hdr.smb1.unicode_char == 0)
                    VAR_8 = D_DOMAIN1;
                else {
                    FUNC_0(VAR_6, VAR_1, " ver=", VAR_0);
                    FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                    VAR_8 = D_VERSION3;
                }
                break;

            case D_VERSION4:
                VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
                if (VAR_2->hdr.smb1.unicode_char == 0)
                    VAR_8 = D_DOMAIN1;
                else {
                    FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                    VAR_8--;
                }
                break;

            case D_DOMAIN2:
                VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
                if (VAR_2->hdr.smb1.unicode_char == 0)
                    VAR_8 = D_UNKNOWN;
                else {
                    FUNC_0(VAR_6, VAR_1, " domain=", VAR_0);
                    FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                    VAR_8 = D_DOMAIN3;
                }
                break;

            case D_DOMAIN4:
                VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
                if (VAR_2->hdr.smb1.unicode_char == 0)
                    VAR_8 = D_UNKNOWN;
                else {
                    FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                    VAR_8--;
                }
                break;
            default:
                break;
        }
    }

    VAR_2->hdr.smb1.byte_state = (unsigned short)VAR_8;
    VAR_2->hdr.smb1.byte_offset += (unsigned short)(VAR_4 - VAR_7);
    return VAR_4 - VAR_7;
}
