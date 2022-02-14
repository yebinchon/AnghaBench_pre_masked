
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int AceSize; void* AceFlags; void* AceType; } ;
struct TYPE_7__ {int Mask; TYPE_1__ Header; int SidStart; } ;
struct TYPE_6__ {int AclSize; int AceCount; scalar_t__ Sbz2; scalar_t__ Sbz1; int AclRevision; } ;
typedef TYPE_2__* PACL ;
typedef TYPE_3__* PACCESS_ALLOWED_ACE ;
typedef int* LPDWORD ;
typedef char* LPCWSTR ;
typedef int LPBYTE ;
typedef int DWORD ;
typedef void* BYTE ;
typedef int BOOL ;
typedef int ACL ;
typedef int ACCESS_ALLOWED_ACE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (char*,int *,int*) ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;
 int VAR_4 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static BOOL FUNC_11(LPCWSTR VAR_5, LPDWORD VAR_6,
    PACL VAR_7, LPDWORD VAR_8)
{
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11 = sizeof(ACL);
    DWORD VAR_12 = 0;
    DWORD VAR_13 = 0;
    PACCESS_ALLOWED_ACE VAR_14 = ((void*)0);
    DWORD VAR_15 = VAR_1;

    FUNC_8("%s\n", FUNC_10(VAR_5));

    if (!VAR_5)
 return VAR_2;

    if (VAR_7)
        VAR_14 = (PACCESS_ALLOWED_ACE) (VAR_7 + 1);


    *VAR_6 = FUNC_5(&VAR_5);


    while (*VAR_5 == '(')
    {
        VAR_5++;


        VAR_9 = FUNC_4(&VAR_5);
 if (VAR_14)
            VAR_14->Header.AceType = (BYTE) VAR_9;
        if (*VAR_5 != ';')
        {
            VAR_15 = VAR_3;
            goto lerr;
        }
        VAR_5++;


 VAR_9 = FUNC_2(&VAR_5);
 if (VAR_14)
            VAR_14->Header.AceFlags = (BYTE) VAR_9;
        if (*VAR_5 != ';')
            goto lerr;
        VAR_5++;


 VAR_9 = FUNC_3(&VAR_5);
 if (VAR_14)
            VAR_14->Mask = VAR_9;
        if (*VAR_5 != ';')
            goto lerr;
        VAR_5++;


        while (*VAR_5 == ' ')
            VAR_5++;
        if (*VAR_5 != ';')
        {
            FUNC_1("Support for *_OBJECT_ACE_TYPE not implemented\n");
            goto lerr;
        }
        VAR_5++;


        while (*VAR_5 == ' ')
            VAR_5++;
        if (*VAR_5 != ';')
        {
            FUNC_1("Support for *_OBJECT_ACE_TYPE not implemented\n");
            goto lerr;
        }
        VAR_5++;


        if (FUNC_6(VAR_5, VAR_14 ? &VAR_14->SidStart : ((void*)0), &VAR_10))
 {
            while (*VAR_5 && *VAR_5 != ')')
                VAR_5++;
 }

        if (*VAR_5 != ')')
            goto lerr;
        VAR_5++;

        VAR_12 = sizeof(ACCESS_ALLOWED_ACE) - sizeof(DWORD) + VAR_10;
        VAR_11 += VAR_12;
        if (VAR_14)
        {
            VAR_14->Header.AceSize = VAR_12;
            VAR_14 = (PACCESS_ALLOWED_ACE)((LPBYTE)VAR_14 + VAR_12);
        }
        VAR_13++;
    }

    *VAR_8 = VAR_11;

    if (VAR_11 > 0xffff)
    {
        FUNC_0("ACL too large\n");
        goto lerr;
    }

    if (VAR_7)
    {
        VAR_7->AclRevision = VAR_0;
        VAR_7->Sbz1 = 0;
        VAR_7->AclSize = VAR_11;
        VAR_7->AceCount = VAR_13;
        VAR_7->Sbz2 = 0;
    }
    return VAR_4;

lerr:
    FUNC_7(VAR_15);
    FUNC_9("Invalid ACE string format\n");
    return VAR_2;
}
