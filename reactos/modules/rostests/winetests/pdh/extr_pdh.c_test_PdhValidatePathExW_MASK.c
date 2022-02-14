
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ PDH_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char const* VAR_4 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 char const* VAR_5 ;
 char const* VAR_6 ;

__attribute__((used)) static void FUNC_2( void )
{
    PDH_STATUS VAR_7;

    static const WCHAR VAR_8[] = {0};
    static const WCHAR VAR_9[] = {'\\','S','y','s','t','e','m',0};

    VAR_7 = FUNC_1( ((void*)0), ((void*)0) );
    FUNC_0(VAR_7 == VAR_3, "PdhValidatePathExW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( ((void*)0), VAR_8 );
    FUNC_0(VAR_7 == VAR_3, "PdhValidatePathExW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( ((void*)0), VAR_9 );
    FUNC_0(VAR_7 == VAR_1, "PdhValidatePathExW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( ((void*)0), VAR_6 );
    FUNC_0(VAR_7 == VAR_1, "PdhValidatePathExW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( ((void*)0), VAR_4 );
    FUNC_0(VAR_7 == VAR_2, "PdhValidatePathExW failed 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1( ((void*)0), VAR_5 );
    FUNC_0(VAR_7 == VAR_0, "PdhValidatePathExW failed 0x%08x\n", VAR_7);
}
