
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int byte_state; size_t byte_count; size_t byte_offset; int flags2; unsigned char unicode_char; } ;
struct TYPE_8__ {TYPE_3__ smb1; } ;
struct TYPE_5__ {int ChallengeLength; } ;
struct TYPE_6__ {TYPE_1__ negotiate; } ;
struct SMBSTUFF {TYPE_4__ hdr; TYPE_2__ parms; } ;
struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_1 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_2 (struct BannerOutput*,int ,unsigned char const) ;

__attribute__((used)) static size_t
FUNC_3(struct SMBSTUFF *VAR_2, const unsigned char *VAR_3, size_t VAR_4, size_t VAR_5, struct BannerOutput *VAR_6)
{
    size_t VAR_7 = VAR_4;
    unsigned VAR_8 = VAR_2->hdr.smb1.byte_state;
    enum {
        D_NEGOT_CHALLENGE,
        D_NEGOT_DOMAINA_PRE,
        D_NEGOT_NAMEA_PRE,
        D_NEGOT_DOMAINA,
        D_NEGOT_NAMEA,
        D_NEGOT_ENDA,
        D_NEGOT_DOMAINU1,
        D_NEGOT_DOMAINU2,
        D_NEGOT_DOMAIN1,
        D_NEGOT_DOMAIN2,
        D_NEGOT_NAMEU1,
        D_NEGOT_NAMEU2,
        D_NEGOT_NAME1,
        D_NEGOT_NAME2,
        D_NEGOT_END,

        D_UNKNOWN,
    };

    if (VAR_5 > VAR_4 + (VAR_2->hdr.smb1.byte_count - VAR_2->hdr.smb1.byte_offset))
        VAR_5 = VAR_4 + (VAR_2->hdr.smb1.byte_count - VAR_2->hdr.smb1.byte_offset);

    for (;VAR_4<VAR_5; VAR_4++)
    switch (VAR_8) {
        case D_NEGOT_CHALLENGE:
            if (VAR_2->parms.negotiate.ChallengeLength == 0) {
                if (VAR_2->hdr.smb1.flags2 & 0x8000) {
                    VAR_8 = D_NEGOT_DOMAINU1;
                } else {
                    VAR_8 = D_NEGOT_DOMAINA_PRE;
                }
                VAR_4--;
            } else
                VAR_2->parms.negotiate.ChallengeLength--;
            break;
        case D_NEGOT_DOMAINU1:
        case D_NEGOT_NAMEU1:
            VAR_2->hdr.smb1.unicode_char = VAR_3[VAR_4];
            VAR_8++;
            break;
        case D_NEGOT_DOMAINU2:
            VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
            if (VAR_2->hdr.smb1.unicode_char == 0) {
                VAR_8 = D_NEGOT_NAMEU1;
            } else {
                FUNC_0(VAR_6, VAR_1, " domain=", VAR_0);
                FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                VAR_8++;
            }
            break;
        case D_NEGOT_NAMEU2:
            VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
            if (VAR_2->hdr.smb1.unicode_char == 0) {
                VAR_8 = D_NEGOT_END;
            } else {
                FUNC_0(VAR_6, VAR_1, " name=", VAR_0);
                FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                VAR_8++;
            }
            break;
        case D_NEGOT_DOMAIN1:
        case D_NEGOT_NAME1:
            VAR_2->hdr.smb1.unicode_char = VAR_3[VAR_4];
            VAR_8++;
            break;
        case D_NEGOT_DOMAIN2:
        case D_NEGOT_NAME2:
            VAR_2->hdr.smb1.unicode_char |= VAR_3[VAR_4]<<8;
            if (VAR_2->hdr.smb1.unicode_char == 0) {
                VAR_8++;
            } else {
                FUNC_2(VAR_6, VAR_1, VAR_2->hdr.smb1.unicode_char);
                VAR_8--;
            }
            break;

        case D_NEGOT_DOMAINA_PRE:
            if (VAR_3[VAR_4] == 0) {
                VAR_8 = D_NEGOT_NAMEA_PRE;
            } else {
                FUNC_0(VAR_6, VAR_1, " domain=", VAR_0);
                FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                VAR_8 = D_NEGOT_DOMAINA;
            }
            break;
        case D_NEGOT_NAMEA_PRE:
            if (VAR_3[VAR_4] == 0) {
                VAR_8 = D_NEGOT_END;
            } else {
                FUNC_0(VAR_6, VAR_1, " name=", VAR_0);
                FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
                VAR_8 = D_NEGOT_NAMEA;
            }
            break;
        case D_NEGOT_DOMAINA:
        case D_NEGOT_NAMEA:
            if (VAR_3[VAR_4] == 0) {
                VAR_8++;
            } else {
                FUNC_1(VAR_6, VAR_1, VAR_3[VAR_4]);
            }
            break;

        default:
            break;
    }

    VAR_2->hdr.smb1.byte_state = (unsigned short)VAR_8;
    VAR_2->hdr.smb1.byte_offset += (unsigned short)(VAR_4 - VAR_7);
    return VAR_4 - VAR_7;
}
