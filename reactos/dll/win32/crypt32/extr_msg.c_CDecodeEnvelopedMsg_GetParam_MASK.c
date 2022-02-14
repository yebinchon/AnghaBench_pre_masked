
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* pbData; int cbData; } ;
struct TYPE_12__ {TYPE_2__* data; TYPE_1__ content; } ;
struct TYPE_13__ {TYPE_3__ enveloped_data; } ;
struct TYPE_17__ {int type; TYPE_4__ u; } ;
struct TYPE_14__ {int IssuerSerialNumber; } ;
struct TYPE_15__ {TYPE_5__ u; } ;
struct TYPE_16__ {TYPE_6__ RecipientId; } ;
struct TYPE_11__ {int cRecipientInfo; TYPE_7__* rgRecipientInfo; } ;
typedef TYPE_7__* PCMSG_KEY_TRANS_RECIPIENT_INFO ;
typedef int DWORD ;
typedef TYPE_8__ CDecodeMsg ;
typedef int BOOL ;






 int FUNC_0 (void*,int*,int*,int) ;
 int FUNC_1 (void*,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4(CDecodeMsg *VAR_3, DWORD VAR_4,
 DWORD VAR_5, void *VAR_6, DWORD *VAR_7)
{
    BOOL VAR_8 = VAR_2;

    switch (VAR_4)
    {
    case 128:
        VAR_8 = FUNC_0(VAR_6, VAR_7, &VAR_3->type, sizeof(VAR_3->type));
        break;
    case 131:
        if (VAR_3->u.enveloped_data.data)
            VAR_8 = FUNC_0(VAR_6, VAR_7,
             VAR_3->u.enveloped_data.content.pbData,
             VAR_3->u.enveloped_data.content.cbData);
        else
            FUNC_3(VAR_1);
        break;
    case 130:
        if (VAR_3->u.enveloped_data.data)
            VAR_8 = FUNC_0(VAR_6, VAR_7,
             &VAR_3->u.enveloped_data.data->cRecipientInfo, sizeof(DWORD));
        else
            FUNC_3(VAR_1);
        break;
    case 129:
        if (VAR_3->u.enveloped_data.data)
        {
            if (VAR_5 < VAR_3->u.enveloped_data.data->cRecipientInfo)
            {
                PCMSG_KEY_TRANS_RECIPIENT_INFO VAR_9 =
                 &VAR_3->u.enveloped_data.data->rgRecipientInfo[VAR_5];

                VAR_8 = FUNC_1(VAR_6, VAR_7,
                 &VAR_9->RecipientId.u.IssuerSerialNumber);
            }
            else
                FUNC_3(VAR_0);
        }
        else
            FUNC_3(VAR_1);
        break;
    default:
        FUNC_2("unimplemented for %d\n", VAR_4);
        FUNC_3(VAR_1);
    }
    return VAR_8;
}
