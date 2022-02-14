
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int attrs ;
struct TYPE_21__ {int Length; } ;
struct TYPE_20__ {int Entries; TYPE_3__* Domains; } ;
struct TYPE_16__ {int Sid; } ;
struct TYPE_19__ {TYPE_1__ User; } ;
struct TYPE_17__ {int * Buffer; int Length; int MaximumLength; } ;
struct TYPE_18__ {TYPE_2__ Name; scalar_t__ Sid; } ;
typedef TYPE_4__ TOKEN_USER ;
typedef int PSID ;
typedef int NTSTATUS ;
typedef TYPE_5__ LSA_TRANSLATED_NAME ;
typedef TYPE_5__ LSA_REFERENCED_DOMAIN_LIST ;
typedef TYPE_7__ LSA_OBJECT_ATTRIBUTES ;
typedef int LSA_HANDLE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,TYPE_4__*,int ,int *) ;
 TYPE_4__* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,TYPE_4__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int ,int,int *,TYPE_5__**,TYPE_5__**) ;
 int FUNC_11 (int *,TYPE_7__*,int ,int *) ;
 int VAR_0 ;
 int FUNC_12 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (TYPE_7__*,int ,int) ;
 int FUNC_14 (int,char*,...) ;

__attribute__((used)) static void FUNC_15(void)
{
    LSA_REFERENCED_DOMAIN_LIST *VAR_5;
    LSA_OBJECT_ATTRIBUTES VAR_6;
    LSA_TRANSLATED_NAME *VAR_7;
    LSA_HANDLE VAR_8;
    TOKEN_USER *VAR_9;
    NTSTATUS VAR_10;
    HANDLE VAR_11;
    DWORD VAR_12;
    BOOL VAR_13;
    PSID VAR_14;

    FUNC_13(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.Length = sizeof(VAR_6);

    VAR_10 = FUNC_11(((void*)0), &VAR_6, VAR_1, &VAR_8);
    FUNC_14(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    VAR_13 = FUNC_12(FUNC_3(), VAR_0, &VAR_11);
    FUNC_14(VAR_13, "got %d\n", VAR_13);

    VAR_13 = FUNC_5(VAR_11, VAR_4, ((void*)0), 0, &VAR_12);
    FUNC_14(!VAR_13, "got %d\n", VAR_13);

    VAR_9 = FUNC_6(FUNC_4(), 0, VAR_12);
    VAR_13 = FUNC_5(VAR_11, VAR_4, VAR_9, VAR_12, &VAR_12);
    FUNC_14(VAR_13, "got %d\n", VAR_13);

    VAR_10 = FUNC_10(VAR_8, 1, &VAR_9->User.Sid, &VAR_5, &VAR_7);
    FUNC_14(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    FUNC_14(VAR_5->Entries > 0, "got %d\n", VAR_5->Entries);
    if (VAR_5->Entries)
    {
       FUNC_14((char*)VAR_5->Domains - (char*)VAR_5 > 0, "%p, %p\n", VAR_5, VAR_5->Domains);
       FUNC_14((char*)VAR_5->Domains[0].Sid - (char*)VAR_5->Domains > 0, "%p, %p\n", VAR_5->Domains, VAR_5->Domains[0].Sid);
       FUNC_14(VAR_5->Domains[0].Name.MaximumLength > VAR_5->Domains[0].Name.Length, "got %d, %d\n", VAR_5->Domains[0].Name.MaximumLength,
           VAR_5->Domains[0].Name.Length);
    }

    FUNC_9(VAR_7);
    FUNC_9(VAR_5);

    FUNC_7(FUNC_4(), 0, VAR_9);

    FUNC_0(VAR_11);

    VAR_13 = FUNC_1("S-1-1-0", &VAR_14);
    FUNC_14(VAR_13 == VAR_3, "ConvertStringSidToSidA returned false\n");

    VAR_10 = FUNC_10(VAR_8, 1, &VAR_14, &VAR_5, &VAR_7);
    FUNC_14(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);

    FUNC_14(VAR_5->Entries > 0, "got %d\n", VAR_5->Entries);

    if (VAR_5->Entries)
    {
       FUNC_14((char*)VAR_5->Domains - (char*)VAR_5 > 0, "%p, %p\n", VAR_5, VAR_5->Domains);
       FUNC_14((char*)VAR_5->Domains[0].Sid - (char*)VAR_5->Domains > 0, "%p, %p\n", VAR_5->Domains, VAR_5->Domains[0].Sid);
       FUNC_14(VAR_5->Domains[0].Name.MaximumLength > VAR_5->Domains[0].Name.Length, "got %d, %d\n", VAR_5->Domains[0].Name.MaximumLength,
           VAR_5->Domains[0].Name.Length);
       FUNC_14(VAR_5->Domains[0].Name.Buffer != ((void*)0), "domain[0] name buffer is null\n");
    }

    FUNC_9(VAR_7);
    FUNC_9(VAR_5);

    FUNC_2(VAR_14);

    VAR_10 = FUNC_8(VAR_8);
    FUNC_14(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
}
