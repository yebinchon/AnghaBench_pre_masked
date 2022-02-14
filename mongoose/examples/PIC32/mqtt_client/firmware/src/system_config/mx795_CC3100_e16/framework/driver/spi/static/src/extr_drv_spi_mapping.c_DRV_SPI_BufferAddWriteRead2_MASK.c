
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_SPI_BUFFER_HANDLE ;
typedef int DRV_SPI_BUFFER_EVENT_HANDLER ;
typedef int DRV_HANDLE ;


 int FUNC_0 (void*,size_t,void*,size_t,int ,void*,int *) ;
 int VAR_0 ;


DRV_SPI_BUFFER_HANDLE FUNC_1 ( DRV_HANDLE VAR_1, void *VAR_2, size_t VAR_3,void *VAR_4, size_t VAR_5,DRV_SPI_BUFFER_EVENT_HANDLER VAR_6,void * VAR_7, DRV_SPI_BUFFER_HANDLE * VAR_8)
{
    uintptr_t VAR_9;
    DRV_SPI_BUFFER_HANDLE VAR_10;

    VAR_9 = VAR_1 & 0x00FF;

    switch(VAR_9)
    {
        case 128:
        {
            VAR_10 = FUNC_0 ( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
            break;
        }
        default:
        {
            VAR_10 = VAR_0;
            break;
        }
    }
    return VAR_10;
}
