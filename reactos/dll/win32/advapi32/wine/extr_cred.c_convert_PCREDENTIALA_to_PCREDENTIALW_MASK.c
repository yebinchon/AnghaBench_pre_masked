
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ UserName; scalar_t__ TargetAlias; int Persist; scalar_t__ CredentialBlobSize; int CredentialBlob; int LastWritten; scalar_t__ Comment; scalar_t__ TargetName; int Type; int Flags; } ;
struct TYPE_5__ {int * UserName; int * TargetAlias; int * Attributes; scalar_t__ AttributeCount; int Persist; int * CredentialBlob; scalar_t__ CredentialBlobSize; int LastWritten; int * Comment; int * TargetName; int Type; int Flags; } ;
typedef TYPE_1__* PCREDENTIALW ;
typedef void* LPWSTR ;
typedef int * LPBYTE ;
typedef int INT ;
typedef int CREDENTIALW ;
typedef TYPE_2__ CREDENTIALA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int,int *,int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static INT FUNC_2(const CREDENTIALA *VAR_1, PCREDENTIALW VAR_2, INT VAR_3)
{
    char *VAR_4;
    INT VAR_5;
    INT VAR_6 = sizeof(CREDENTIALW);

    if (!VAR_2)
    {
        if (VAR_1->TargetName)
            VAR_6 += sizeof(WCHAR) * FUNC_0(VAR_0, 0, VAR_1->TargetName, -1, ((void*)0), 0);
        if (VAR_1->Comment)
            VAR_6 += sizeof(WCHAR) * FUNC_0(VAR_0, 0, VAR_1->Comment, -1, ((void*)0), 0);
        VAR_6 += VAR_1->CredentialBlobSize;
        if (VAR_1->TargetAlias)
            VAR_6 += sizeof(WCHAR) * FUNC_0(VAR_0, 0, VAR_1->TargetAlias, -1, ((void*)0), 0);
        if (VAR_1->UserName)
            VAR_6 += sizeof(WCHAR) * FUNC_0(VAR_0, 0, VAR_1->UserName, -1, ((void*)0), 0);

        return VAR_6;
    }

    VAR_4 = (char *)VAR_2 + sizeof(CREDENTIALW);
    VAR_3 -= sizeof(CREDENTIALW);
    VAR_2->Flags = VAR_1->Flags;
    VAR_2->Type = VAR_1->Type;
    if (VAR_1->TargetName)
    {
        VAR_2->TargetName = (LPWSTR)VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->TargetName, -1, VAR_2->TargetName, VAR_3 / sizeof(WCHAR));
        VAR_4 += sizeof(WCHAR) * VAR_5;
        VAR_6 += sizeof(WCHAR) * VAR_5;
        VAR_3 -= sizeof(WCHAR) * VAR_5;
    }
    else
        VAR_2->TargetName = ((void*)0);
    if (VAR_1->Comment)
    {
        VAR_2->Comment = (LPWSTR)VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->Comment, -1, VAR_2->Comment, VAR_3 / sizeof(WCHAR));
        VAR_4 += sizeof(WCHAR) * VAR_5;
        VAR_6 += sizeof(WCHAR) * VAR_5;
        VAR_3 -= sizeof(WCHAR) * VAR_5;
    }
    else
        VAR_2->Comment = ((void*)0);
    VAR_2->LastWritten = VAR_1->LastWritten;
    VAR_2->CredentialBlobSize = VAR_1->CredentialBlobSize;
    if (VAR_1->CredentialBlobSize)
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
        VAR_2->TargetAlias = (LPWSTR)VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->TargetAlias, -1, VAR_2->TargetAlias, VAR_3 / sizeof(WCHAR));
        VAR_4 += sizeof(WCHAR) * VAR_5;
        VAR_6 += sizeof(WCHAR) * VAR_5;
        VAR_3 -= sizeof(WCHAR) * VAR_5;
    }
    else
        VAR_2->TargetAlias = ((void*)0);
    if (VAR_1->UserName)
    {
        VAR_2->UserName = (LPWSTR)VAR_4;
        VAR_5 = FUNC_0(VAR_0, 0, VAR_1->UserName, -1, VAR_2->UserName, VAR_3 / sizeof(WCHAR));
        VAR_6 += sizeof(WCHAR) * VAR_5;
    }
    else
        VAR_2->UserName = ((void*)0);

    return VAR_6;
}
