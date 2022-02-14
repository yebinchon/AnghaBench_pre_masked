
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int,int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int const*,int *,int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_3[] = { 0 };
    WCHAR VAR_4[VAR_0];
    UNICODE_STRING VAR_5;
    NTSTATUS VAR_6;

    if (!&FUNC_4)
    {
        FUNC_5("RtlDosPathNameToNtPathName_U_WithStatus() is not supported.\n");
        return;
    }

    FUNC_0( VAR_0, VAR_4 );

    VAR_6 = FUNC_4( VAR_4, &VAR_5, ((void*)0), ((void*)0) );
    FUNC_3(!VAR_6, "Failed convert to nt path, %#x.\n", VAR_6);

    VAR_6 = FUNC_4( ((void*)0), &VAR_5, ((void*)0), ((void*)0) );
    FUNC_3(VAR_6 == VAR_1 || FUNC_2(VAR_6 == VAR_2) ,
        "Unexpected status %#x.\n", VAR_6);

    VAR_6 = FUNC_4( VAR_3, &VAR_5, ((void*)0), ((void*)0) );
    FUNC_3(VAR_6 == VAR_1 || FUNC_2(VAR_6 == VAR_2) ,
        "Unexpected status %#x.\n", VAR_6);

    FUNC_1( &VAR_5 );
}
