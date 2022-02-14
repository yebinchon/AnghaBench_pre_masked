
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf ;
struct TYPE_10__ {TYPE_1__* pCertInfo; } ;
struct TYPE_9__ {int Value; int dwValueType; } ;
struct TYPE_8__ {int cbData; int pbData; } ;
struct TYPE_7__ {TYPE_2__ Subject; } ;
typedef TYPE_3__* PCERT_RDN_ATTR ;
typedef TYPE_4__* PCCERT_CONTEXT ;
typedef int DWORD ;
typedef int CERT_NAME_INFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,char*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,int *,int **,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static const char *FUNC_4(PCCERT_CONTEXT VAR_5)
{
    static char VAR_6[1024];
    const char *VAR_7 = ((void*)0);
    CERT_NAME_INFO *VAR_8;
    DWORD VAR_9;
    BOOL VAR_10 = FUNC_2(VAR_2, VAR_3,
     VAR_5->pCertInfo->Subject.pbData, VAR_5->pCertInfo->Subject.cbData,
     VAR_1 | VAR_0, ((void*)0), &VAR_8,
     &VAR_9);

    if (VAR_10)
    {
        PCERT_RDN_ATTR VAR_11 = FUNC_0(VAR_4,
         VAR_8);

        if (VAR_11)
        {
            FUNC_1(VAR_11->dwValueType,
             &VAR_11->Value, VAR_6, sizeof(VAR_6));
            VAR_7 = VAR_6;
        }
        FUNC_3(VAR_8);
    }
    return VAR_7;
}
