
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYS_MODULE_INDEX ;
typedef int DRV_IO_INTENT ;
typedef int DRV_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int const,int const) ;


DRV_HANDLE FUNC_1( const SYS_MODULE_INDEX VAR_1, const DRV_IO_INTENT VAR_2)
{
    DRV_HANDLE VAR_3;

    switch(VAR_1)
    {
        case 128:
        {
            VAR_3 = FUNC_0(VAR_1,VAR_2);
            break;
        }
        default:
        {
            VAR_3 = VAR_0;
            break;
        }
    }
    return VAR_3;
}
