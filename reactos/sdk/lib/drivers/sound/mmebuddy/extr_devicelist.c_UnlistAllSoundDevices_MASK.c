
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ MMRESULT ;
typedef scalar_t__ MMDEVICE_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

VOID
FUNC_3()
{
    MMDEVICE_TYPE VAR_3;

    FUNC_1(L"Unlisting all sound devices\n");

    for ( VAR_3 = VAR_1; VAR_3 <= VAR_0; ++ VAR_3 )
    {
        MMRESULT VAR_4;
        VAR_4 = FUNC_2(VAR_3);
        FUNC_0( VAR_4 == VAR_2 );
    }
}
