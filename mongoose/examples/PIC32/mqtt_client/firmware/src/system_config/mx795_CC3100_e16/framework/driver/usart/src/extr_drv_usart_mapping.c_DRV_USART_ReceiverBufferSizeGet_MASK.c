
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DRV_HANDLE ;


 unsigned int FUNC_0 () ;


unsigned int FUNC_1( const DRV_HANDLE VAR_0 )
{
    uintptr_t VAR_1;
    unsigned int VAR_2;

    VAR_1 = VAR_0 & 0x00FF;

    switch(VAR_1)
    {
        case 128:
        {
            VAR_2 = FUNC_0();
            break;
        }
        default:
        {
            VAR_2 = (unsigned int)((void*)0);
            break;
        }
    }
    return VAR_2;
}
