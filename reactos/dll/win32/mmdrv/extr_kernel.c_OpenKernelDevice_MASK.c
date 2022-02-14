
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef scalar_t__ MMRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DeviceType ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

MMRESULT
FUNC_6(
    DeviceType VAR_7,
    UINT VAR_8,
    DWORD VAR_9,
    HANDLE* VAR_10)
{
    MMRESULT VAR_11;
    WCHAR VAR_12[VAR_4];
    DWORD VAR_13 = 0;

    FUNC_0(VAR_10);



    VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_12);

    FUNC_3("Opening kernel device %ls\n", VAR_12);

    if ( VAR_11 != VAR_5 )
        return VAR_11;



    if ( VAR_9 != VAR_2 )
        VAR_13 = VAR_0;



    *VAR_10 = FUNC_2(VAR_12,
                         VAR_9,
                         VAR_1,
                         ((void*)0),
                         VAR_6,
                         VAR_13,
                         ((void*)0));

    if ( *VAR_10 == VAR_3 )
        return FUNC_4(FUNC_5());

    return VAR_5;
}
