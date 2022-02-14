
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int DRV_SPI_CLIENT_DATA ;
typedef int DRV_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;


int32_t FUNC_1 ( DRV_HANDLE VAR_1, const DRV_SPI_CLIENT_DATA * VAR_2 )
{
    uintptr_t VAR_3;
    int32_t VAR_4;

    VAR_3 = VAR_1 & 0x00FF;

    switch(VAR_3)
    {
        case 128:
        {
            VAR_4 = FUNC_0( VAR_2 );
            break;
        }
        default:
        {
            VAR_4 = (int32_t)VAR_0;
            break;
        }
    }
    return VAR_4;
}
