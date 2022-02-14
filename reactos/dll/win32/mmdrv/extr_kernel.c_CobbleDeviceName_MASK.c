
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int PWCHAR ;
typedef int MMRESULT ;
typedef int DeviceType ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int *,...) ;

MMRESULT
FUNC_2(
    DeviceType VAR_8,
    UINT VAR_9,
    PWCHAR VAR_10)
{
    WCHAR VAR_11[VAR_1];



    switch ( VAR_8 )
    {
        case 128 :
            FUNC_1(VAR_11, L"%ls", &VAR_7);
            break;

        case 129 :
            FUNC_1(VAR_11, L"%ls", &VAR_6);
            break;

        case 130 :
            FUNC_1(VAR_11, L"%ls", &VAR_3);
            break;

        case 131 :
            FUNC_1(VAR_11, L"%ls", &VAR_2);
            break;

        case 132 :
            FUNC_1(VAR_11, L"%ls", &VAR_0);
            break;

        default :
            return VAR_4;
    };



    FUNC_1(VAR_10,
             L"\\\\.%ls%d",
             VAR_11 + FUNC_0("\\Device"),
             VAR_9);

    return VAR_5;
}
