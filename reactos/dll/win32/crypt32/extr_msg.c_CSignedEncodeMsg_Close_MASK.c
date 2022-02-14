
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* info; } ;
struct TYPE_10__ {size_t cSignerInfo; struct TYPE_10__* rgSignerInfo; struct TYPE_10__* signerKeySpec; int rgCrlEncoded; int cCrlEncoded; int rgCertEncoded; int cCertEncoded; } ;
struct TYPE_8__ {TYPE_4__* pbData; } ;
struct TYPE_9__ {TYPE_6__ msg_data; TYPE_1__ data; TYPE_4__* innerOID; } ;
typedef TYPE_2__* HCRYPTMSG ;
typedef size_t DWORD ;
typedef TYPE_2__ CSignedEncodeMsg ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(HCRYPTMSG VAR_0)
{
    CSignedEncodeMsg *VAR_1 = VAR_0;
    DWORD VAR_2;

    FUNC_3(VAR_1->innerOID);
    FUNC_3(VAR_1->data.pbData);
    FUNC_0(VAR_1->msg_data.info->cCertEncoded,
     VAR_1->msg_data.info->rgCertEncoded);
    FUNC_0(VAR_1->msg_data.info->cCrlEncoded,
     VAR_1->msg_data.info->rgCrlEncoded);
    for (VAR_2 = 0; VAR_2 < VAR_1->msg_data.info->cSignerInfo; VAR_2++)
        FUNC_2(&VAR_1->msg_data.info->rgSignerInfo[VAR_2]);
    FUNC_1(&VAR_1->msg_data);
    FUNC_3(VAR_1->msg_data.info->signerKeySpec);
    FUNC_3(VAR_1->msg_data.info->rgSignerInfo);
    FUNC_3(VAR_1->msg_data.info);
}
