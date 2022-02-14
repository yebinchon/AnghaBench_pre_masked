
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ ULONG_PTR ;
typedef int UINT ;
struct TYPE_3__ {int Flags; scalar_t__ Text; } ;
typedef int NTSTATUS ;
typedef TYPE_1__ MESSAGE_RESOURCE_ENTRY ;
typedef int * LPWSTR ;
typedef scalar_t__ HMODULE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,char const*,int,int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__,scalar_t__,int ,int ,TYPE_1__ const**) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (int *,scalar_t__,int) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static LPWSTR FUNC_12( HMODULE VAR_4, UINT VAR_5, WORD VAR_6 )
{



    const MESSAGE_RESOURCE_ENTRY *VAR_7;

    WCHAR *VAR_8;
    NTSTATUS VAR_9;

    FUNC_8("module = %p, id = %08x\n", VAR_4, VAR_5 );

    if (!VAR_4) VAR_4 = FUNC_0( ((void*)0) );




    if ((VAR_9 = FUNC_5( VAR_4, VAR_2, VAR_6, VAR_5, &VAR_7 )) != VAR_3)

    {
        FUNC_7( FUNC_6(VAR_9) );
        return ((void*)0);
    }

    if (VAR_7->Flags & VAR_1)
    {
        int VAR_10 = (FUNC_10( (const WCHAR *)VAR_7->Text ) + 1) * sizeof(WCHAR);
        if (!(VAR_8 = FUNC_2( FUNC_1(), 0, VAR_10 ))) return ((void*)0);
        FUNC_9( VAR_8, VAR_7->Text, VAR_10 );
    }
    else
    {
        int VAR_11 = FUNC_3( VAR_0, 0, (const char *)VAR_7->Text, -1, ((void*)0), 0 );
        if (!(VAR_8 = FUNC_2( FUNC_1(), 0, VAR_11 * sizeof(WCHAR) ))) return ((void*)0);
        FUNC_3( VAR_0, 0, (const char*)VAR_7->Text, -1, VAR_8, VAR_11 );
    }
    FUNC_8("returning %s\n", FUNC_11(VAR_8));
    return VAR_8;
}
