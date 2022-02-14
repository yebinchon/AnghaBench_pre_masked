
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ MMRESULT ;
typedef int LPVOID ;
typedef int HANDLE ;
typedef int DeviceType ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int *,int ,int ,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int ,int ,int ,int *) ;

DWORD
FUNC_10(
    DeviceType VAR_5,
    UINT VAR_6,
    DWORD_PTR VAR_7,
    DWORD VAR_8)
{
    MMRESULT VAR_9;
    DWORD VAR_10;
    HANDLE VAR_11;
    DWORD VAR_12;
    BOOL VAR_13;

    FUNC_0(VAR_7);



    if ( FUNC_8(VAR_5) )
        VAR_10 = VAR_2;
    else if ( FUNC_7(VAR_5) )
        VAR_10 = VAR_1;
    else if ( FUNC_6(VAR_5) )
        return VAR_4;
    else
        return VAR_4;

    VAR_9 = FUNC_9(VAR_5,
                              VAR_6,
                              VAR_0,
                              &VAR_11);

    if ( VAR_9 != VAR_3 )
    {
        FUNC_2("Failed to open kernel device\n");
        return VAR_9;
    }

    VAR_13 = FUNC_3(VAR_11,
                                       VAR_10,
                                       ((void*)0),
                                       0,
                                       (LPVOID) VAR_7,
                                       VAR_8,
                                       &VAR_12,
                                       ((void*)0));



    if ( VAR_13 )
        VAR_9 = VAR_3;
    else
        VAR_9 = FUNC_4(FUNC_5());



    FUNC_1(VAR_11);

    return VAR_9;
}
