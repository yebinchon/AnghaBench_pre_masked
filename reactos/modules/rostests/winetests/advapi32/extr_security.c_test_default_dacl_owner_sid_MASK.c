
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int SidStart; } ;
struct TYPE_4__ {int nLength; int * lpSecurityDescriptor; void* bInheritHandle; } ;
typedef int SECURITY_DESCRIPTOR ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef void* PSID ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;
typedef void ACL ;
typedef TYPE_2__ ACCESS_ALLOWED_ACE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,void*) ;
 void* VAR_2 ;
 int FUNC_3 (int *,int,int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int*,void**,int*) ;
 int FUNC_7 (int *,void**,int*) ;
 int * FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ FUNC_12 (void*,int ,void**) ;

__attribute__((used)) static void FUNC_13(void)
{
    HANDLE VAR_7;
    BOOL VAR_8, VAR_9, VAR_10, VAR_11;
    DWORD VAR_12, VAR_13;
    SECURITY_DESCRIPTOR *VAR_14;
    SECURITY_ATTRIBUTES VAR_15;
    PSID VAR_16;
    ACL *VAR_17;
    ACCESS_ALLOWED_ACE *VAR_18;

    VAR_14 = FUNC_8( FUNC_5(), 0, VAR_4 );
    VAR_8 = FUNC_10( VAR_14, VAR_5 );
    FUNC_11( VAR_8, "error %u\n", FUNC_4() );

    VAR_15.nLength = sizeof(SECURITY_ATTRIBUTES);
    VAR_15.lpSecurityDescriptor = VAR_14;
    VAR_15.bInheritHandle = VAR_2;
    VAR_7 = FUNC_1( &VAR_15, VAR_6, VAR_6, "test_event" );
    FUNC_11( VAR_7 != ((void*)0), "error %u\n", FUNC_4() );

    VAR_12 = 0;
    VAR_8 = FUNC_3( VAR_7, VAR_3|VAR_0, ((void*)0), 0, &VAR_12 );
    FUNC_11( !VAR_8 && FUNC_4() == VAR_1, "error %u\n", FUNC_4() );

    VAR_14 = FUNC_8( FUNC_5(), 0, VAR_12 );
    VAR_8 = FUNC_3( VAR_7, VAR_3|VAR_0, VAR_14, VAR_12, &VAR_12 );
    FUNC_11( VAR_8, "error %u\n", FUNC_4() );

    VAR_16 = (void *)0xdeadbeef;
    VAR_9 = VAR_6;
    VAR_8 = FUNC_7( VAR_14, &VAR_16, &VAR_9 );
    FUNC_11( VAR_8, "error %u\n", FUNC_4() );
    FUNC_11( VAR_16 != (void *)0xdeadbeef, "owner not set\n" );
    FUNC_11( !VAR_9, "owner defaulted\n" );

    VAR_17 = (void *)0xdeadbeef;
    VAR_10 = VAR_2;
    VAR_9 = VAR_6;
    VAR_8 = FUNC_6( VAR_14, &VAR_10, &VAR_17, &VAR_9 );
    FUNC_11( VAR_8, "error %u\n", FUNC_4() );
    FUNC_11( VAR_10, "dacl not present\n" );
    FUNC_11( VAR_17 != (void *)0xdeadbeef, "dacl not set\n" );
    FUNC_11( !VAR_9, "dacl defaulted\n" );

    VAR_13 = 0;
    VAR_11 = VAR_2;
    while (FUNC_12( VAR_17, VAR_13++, (void **)&VAR_18 ))
    {
        if (FUNC_2( &VAR_18->SidStart, VAR_16 )) VAR_11 = VAR_6;
    }
    FUNC_11( VAR_11, "owner sid not found in dacl\n" );

    FUNC_9( FUNC_5(), 0, VAR_15.lpSecurityDescriptor );
    FUNC_9( FUNC_5(), 0, VAR_14 );
    FUNC_0( VAR_7 );
}
