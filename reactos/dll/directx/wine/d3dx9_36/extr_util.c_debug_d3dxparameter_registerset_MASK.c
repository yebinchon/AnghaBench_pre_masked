
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DXREGISTER_SET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

const char *FUNC_2(D3DXREGISTER_SET VAR_4)
{
    switch (VAR_4)
    {
        FUNC_1(VAR_0);
        FUNC_1(VAR_2);
        FUNC_1(VAR_1);
        FUNC_1(VAR_3);
        default:
            FUNC_0("Unrecognized D3DXREGISTER_SET %#x.\n", VAR_4);
            return "unrecognized";
    }
}
