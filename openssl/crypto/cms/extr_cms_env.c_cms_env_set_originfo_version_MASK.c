
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; } ;
struct TYPE_10__ {int version; TYPE_2__* originatorInfo; } ;
struct TYPE_9__ {int crls; int certificates; } ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ CMS_RevocationInfoChoice ;
typedef TYPE_2__ CMS_OriginatorInfo ;
typedef TYPE_3__ CMS_EnvelopedData ;
typedef TYPE_4__ CMS_CertificateChoices ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(CMS_EnvelopedData *VAR_3)
{
    CMS_OriginatorInfo *VAR_4 = VAR_3->originatorInfo;
    int VAR_5;
    if (VAR_4 == ((void*)0))
        return;
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->certificates); VAR_5++) {
        CMS_CertificateChoices *VAR_6;
        VAR_6 = FUNC_1(VAR_4->certificates, VAR_5);
        if (VAR_6->type == VAR_0) {
            VAR_3->version = 4;
            return;
        } else if (VAR_6->type == VAR_1) {
            if (VAR_3->version < 3)
                VAR_3->version = 3;
        }
    }

    for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4->crls); VAR_5++) {
        CMS_RevocationInfoChoice *VAR_7;
        VAR_7 = FUNC_3(VAR_4->crls, VAR_5);
        if (VAR_7->type == VAR_2) {
            VAR_3->version = 4;
            return;
        }
    }
}
