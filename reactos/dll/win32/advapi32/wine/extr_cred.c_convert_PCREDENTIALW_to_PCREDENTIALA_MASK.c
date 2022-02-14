
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ CredentialBlobSize; scalar_t__ UserName; scalar_t__ TargetAlias; int Persist; int CredentialBlob; int LastWritten; scalar_t__ Comment; scalar_t__ TargetName; int Type; int Flags; } ;
struct TYPE_5__ {char* TargetName; char* Comment; scalar_t__ CredentialBlobSize; char* TargetAlias; char* UserName; int * Attributes; scalar_t__ AttributeCount; int Persist; int * CredentialBlob; int LastWritten; int Type; int Flags; } ;
typedef TYPE_1__* PCREDENTIALA ;
typedef int * LPBYTE ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ CREDENTIALW ;
typedef int CREDENTIALA ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int,char*,scalar_t__,int *,int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static INT FUNC_2(const CREDENTIALW *VAR_1, PCREDENTIALA VAR_2, DWORD VAR_3)
{
    char *VAR_4;
    INT VAR_5;
    INT VAR_6 = sizeof(CREDENTIALA);

    if (!VAR_2)
    {
        if (VAR_1->TargetName)
            VAR_6 += FUNC_0(VAR_0, 0, VAR_1->TargetName, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        if (VAR_1->Comment)
            VAR_6 += FUNC_0(VAR_0, 0, VAR_1->Comment, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_6 += VAR_1->CredentialBlobSize;
        if (VAR_1->TargetAlias)
            VAR_6 += FUNC_0(VAR_0, 0, VAR_1->TargetAlias, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        if (VAR_1->UserName)
            VAR_6 += FUNC_0(VAR_0, 0, VAR_1->UserName, -1, ((void*)0), 0, ((void*)0), ((void*)0));

        return VAR_6;
    }


    VAR_4 = (char *)VAR_2 + sizeof(CREDENTIALA);
    VAR_3 -= sizeof(CREDENTIALA);
    VAR_2->Flags = VAR_1->Flags;
    VAR_2->Type = VAR_1->Type;

    if (VAR_1->TargetName)
    {
        VAR_2->TargetName = VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->TargetName, -1, VAR_4, VAR_3, ((void*)0), ((void*)0));
        VAR_4 += VAR_5;
        VAR_6 += VAR_5;
        VAR_3 -= VAR_5;
    }
    else
        VAR_2->TargetName = ((void*)0);
    if (VAR_1->Comment)
    {
        VAR_2->Comment = VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->Comment, -1, VAR_4, VAR_3, ((void*)0), ((void*)0));
        VAR_4 += VAR_5;
        VAR_6 += VAR_5;
        VAR_3 -= VAR_5;
    }
    else
        VAR_2->Comment = ((void*)0);
    VAR_2->LastWritten = VAR_1->LastWritten;
    VAR_2->CredentialBlobSize = VAR_1->CredentialBlobSize;
    if (VAR_1->CredentialBlobSize && (VAR_1->CredentialBlobSize <= VAR_3))
    {
        VAR_2->CredentialBlob =(LPBYTE)VAR_4;
        FUNC_1(VAR_2->CredentialBlob, VAR_1->CredentialBlob,
               VAR_1->CredentialBlobSize);
        VAR_4 += VAR_1->CredentialBlobSize;
        VAR_6 += VAR_1->CredentialBlobSize;
        VAR_3 -= VAR_1->CredentialBlobSize;
    }
    else
        VAR_2->CredentialBlob = ((void*)0);
    VAR_2->Persist = VAR_1->Persist;
    VAR_2->AttributeCount = 0;
    VAR_2->Attributes = ((void*)0);
    if (VAR_1->TargetAlias)
    {
        VAR_2->TargetAlias = VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->TargetAlias, -1, VAR_4, VAR_3, ((void*)0), ((void*)0));
        VAR_4 += VAR_5;
        VAR_6 += VAR_5;
        VAR_3 -= VAR_5;
    }
    else
        VAR_2->TargetAlias = ((void*)0);
    if (VAR_1->UserName)
    {
        VAR_2->UserName = VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->UserName, -1, VAR_4, VAR_3, ((void*)0), ((void*)0));
        VAR_6 += VAR_5;
    }
    else
        VAR_2->UserName = ((void*)0);

    return VAR_6;
}
