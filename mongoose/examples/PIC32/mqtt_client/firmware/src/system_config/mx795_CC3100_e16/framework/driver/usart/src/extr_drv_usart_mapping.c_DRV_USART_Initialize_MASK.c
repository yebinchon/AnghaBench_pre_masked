
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYS_MODULE_OBJ ;
typedef int SYS_MODULE_INIT ;
typedef int SYS_MODULE_INDEX ;


 int FUNC_0 () ;

 int VAR_0 ;

SYS_MODULE_OBJ FUNC_1(const SYS_MODULE_INDEX VAR_1,const SYS_MODULE_INIT * const VAR_2)
{
    SYS_MODULE_OBJ VAR_3;

    switch(VAR_1)
    {
        case 128:
        {
            VAR_3 = FUNC_0();
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
