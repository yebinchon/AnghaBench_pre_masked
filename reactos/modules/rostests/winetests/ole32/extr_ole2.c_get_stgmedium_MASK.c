
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STGMEDIUM ;
typedef int CLIPFORMAT ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(CLIPFORMAT VAR_0, STGMEDIUM *VAR_1)
{
    switch (VAR_0)
    {
    case 130:
        FUNC_0(VAR_1);
        break;
    case 128:
        FUNC_2(VAR_1);
        break;
    case 129:
        FUNC_1(VAR_1);
        break;
    default:
        FUNC_3(0, "cf %x not implemented\n", VAR_0);
    }
}
