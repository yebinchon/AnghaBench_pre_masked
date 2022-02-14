
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int buf; } ;
struct SpnegoDecode {TYPE_3__ ntlmssp; struct CertDecode* x509; } ;
struct TYPE_6__ {unsigned char length_of_length; unsigned char remaining; } ;
struct TYPE_9__ {TYPE_1__ tag; } ;
struct TYPE_7__ {scalar_t__* remainings; scalar_t__ depth; } ;
struct CertDecode {unsigned int state; int brother_state; int child_state; int is_der_failure; TYPE_5__ u; TYPE_2__ stack; } ;
struct BannerOutput {int dummy; } ;


 unsigned int FUNC_0 (struct CertDecode*) ;
 int FUNC_1 (struct CertDecode*,int,unsigned char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,unsigned char const*,size_t,struct BannerOutput*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;

void
FUNC_6(struct SpnegoDecode *VAR_0,
            const unsigned char *VAR_1, size_t VAR_2,
            struct BannerOutput *VAR_3)
{
    struct CertDecode *VAR_4 = VAR_0->x509;
    unsigned VAR_5;
    unsigned VAR_6 = VAR_4->state;

    enum {




        NegotiationToken_tag, len, lenlen,

        NegTokenInit_tag,
        NegTokenInit_choice,
        NegTokenResp_tag,
        NegTokenResp_choice,
        mechType_tag,

        negState_tag,
        supportedMech_tag,
        responseToken_tag,
        mechListMIC_tag,

        mechTypes_tag,
        reqFlags_tag,
        mechToken_tag,

        mechToken_content,
        responseToken_content,
        mechToken_content2,
        responseToken_content2,

        UnknownContents,


    };






    for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
        while (VAR_4->stack.remainings[0] == 0) {
            if (VAR_4->stack.depth == 0)
                return;
            VAR_6 = FUNC_0(VAR_4);
        }




        VAR_4->stack.remainings[0]--;




        switch (VAR_6) {
            case NegotiationToken_tag:
                VAR_4->brother_state = UnknownContents;
                switch (VAR_1[VAR_5]) {
                    case 0xa0:
                        VAR_4->child_state = NegTokenInit_tag;
                        break;
                    case 0xa1:
                        VAR_4->child_state = NegTokenResp_tag;
                        break;
                    case 0x60:
                        VAR_4->child_state = mechType_tag;
                        break;
                    default:
                        VAR_4->child_state = UnknownContents;
                        break;
                }
                VAR_6 = len;
                break;

            case NegTokenResp_choice:
                VAR_4->brother_state = NegTokenResp_choice;
                switch (VAR_1[VAR_5]) {
                    case 0xa0:
                        VAR_4->child_state = negState_tag;
                        break;
                    case 0xa1:
                        VAR_4->child_state = supportedMech_tag;
                        break;
                    case 0xa2:
                        VAR_4->child_state = responseToken_tag;
                        break;
                    case 0xa3:
                        VAR_4->child_state = mechListMIC_tag;
                        break;
                    default:
                        VAR_4->child_state = UnknownContents;
                        break;
                }
                VAR_6 = len;
                break;

            case NegTokenResp_tag:
                if (VAR_1[VAR_5] != 0x30) {
                    VAR_4->brother_state = UnknownContents;
                    VAR_4->child_state = UnknownContents;
                } else {
                    VAR_4->brother_state = UnknownContents;
                    VAR_4->child_state = NegTokenResp_choice;
                }
                VAR_6 = len;
                break;

            case NegTokenInit_choice:
                VAR_4->brother_state = NegTokenInit_choice;
                switch (VAR_1[VAR_5]) {
                    case 0xa0:
                        VAR_4->child_state = mechTypes_tag;
                        break;
                    case 0xa1:
                        VAR_4->child_state = reqFlags_tag;
                        break;
                    case 0xa2:
                        VAR_4->child_state = mechToken_tag;
                        break;
                    case 0xa3:
                        VAR_4->child_state = mechListMIC_tag;
                        break;
                    default:
                        VAR_4->child_state = UnknownContents;
                        break;
                }
                VAR_6 = len;
                break;

            case NegTokenInit_tag:
                if (VAR_1[VAR_5] != 0x30) {
                    VAR_4->brother_state = UnknownContents;
                    VAR_4->child_state = UnknownContents;
                } else {
                    VAR_4->brother_state = UnknownContents;
                    VAR_4->child_state = NegTokenInit_choice;
                }
                VAR_6 = len;
                break;

            case mechType_tag:
                if (VAR_1[VAR_5] == 0x06) {
                    VAR_4->brother_state = NegotiationToken_tag;
                    VAR_4->child_state = UnknownContents;
                } else {
                    VAR_4->brother_state = NegotiationToken_tag;
                    VAR_4->child_state = UnknownContents;
                }
                VAR_6 = len;
                break;

            case negState_tag:
            case supportedMech_tag:
            case mechListMIC_tag:
            case mechTypes_tag:
            case reqFlags_tag:
                VAR_4->brother_state = UnknownContents;
                VAR_4->child_state = UnknownContents;
                VAR_6 = len;
                break;

            case responseToken_tag:
                VAR_4->brother_state = UnknownContents;
                VAR_4->child_state = responseToken_content;
                VAR_6 = len;
                break;

            case mechToken_tag:
                VAR_4->brother_state = UnknownContents;
                VAR_4->child_state = mechToken_content;
                VAR_6 = len;
                break;

            case mechToken_content:
            case mechToken_content2:
                break;
            case responseToken_content:
                FUNC_5(&VAR_0->ntlmssp, VAR_4->stack.remainings[0] + 1);
                VAR_6 = responseToken_content2;

            case responseToken_content2:
            {
                size_t VAR_7 = VAR_2 - VAR_5;

                if (VAR_7 > VAR_4->stack.remainings[0] + 1U)
                    VAR_7 = VAR_4->stack.remainings[0] + 1;

                FUNC_4(&VAR_0->ntlmssp, VAR_1+VAR_5, VAR_7, VAR_3);

                VAR_4->stack.remainings[0] -= (unsigned short)(VAR_7 - 1);
                if (VAR_4->stack.remainings[0] == 0) {
                    if (VAR_0->ntlmssp.buf)
                        FUNC_2(VAR_0->ntlmssp.buf);
                }
            }
                break;

            case len:
                if (VAR_1[VAR_5] & 0x80) {
                    VAR_4->u.tag.length_of_length = VAR_1[VAR_5]&0x7F;
                    VAR_4->u.tag.remaining = 0;
                    VAR_6 = lenlen;
                    break;
                } else {
                    VAR_4->u.tag.remaining = VAR_1[VAR_5];
                    FUNC_1(VAR_4, VAR_4->brother_state, VAR_4->u.tag.remaining);
                    VAR_6 = VAR_4->child_state;
                    FUNC_3(&VAR_4->u, 0, sizeof(VAR_4->u));
                    break;
                }
                break;
            case lenlen:







                if (VAR_4->u.tag.remaining == 0 && VAR_1[VAR_5] == 0)
                    VAR_4->is_der_failure = 1;


                VAR_4->u.tag.remaining = (VAR_4->u.tag.remaining)<<8 | VAR_1[VAR_5];
                VAR_4->u.tag.length_of_length--;


                if (VAR_4->u.tag.length_of_length)
                    continue;




                if (VAR_4->u.tag.remaining < 128)
                    VAR_4->is_der_failure = 1;






                FUNC_1(VAR_4, VAR_4->brother_state, VAR_4->u.tag.remaining);
                VAR_6 = VAR_4->child_state;
                FUNC_3(&VAR_4->u, 0, sizeof(VAR_4->u));
                break;
            default:
                ;
        }
    }
}
