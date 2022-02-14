
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT16 ;
typedef int IF_OPER_STATUS ;


 int FUNC_0 (char*,int) ;



__attribute__((used)) static UINT16 FUNC_1( IF_OPER_STATUS VAR_0 )
{
    switch (VAR_0)
    {
    case 129:
        return 0;
    case 128:
        return 2;
    default:
        FUNC_0("unhandled status %u\n", VAR_0);
        break;
    }
    return 0;
}
