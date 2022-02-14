
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int * VAR_0 ;
 int FUNC_0 (int,char*,unsigned int,int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    BOOL VAR_1;
    unsigned int VAR_2;

    if (!&FUNC_1)
    {
        FUNC_2("PathIsValidCharW isn't available\n");
        return;
    }

    for (VAR_2 = 0; VAR_2 < 0x7f; VAR_2++)
    {
        VAR_1 = FUNC_1( VAR_2, ~0U );
        FUNC_0 ( VAR_1 || !VAR_0[VAR_2], "PathIsValidCharW failed: 0x%02x got 0x%08x\n", VAR_2, VAR_1 );
    }

    for (VAR_2 = 0x007f; VAR_2 <= 0xffff; VAR_2++)
    {
        VAR_1 = FUNC_1( VAR_2, ~0U );
        FUNC_0 ( VAR_1, "PathIsValidCharW failed: 0x%02x got 0x%08x\n", VAR_2, VAR_1 );
    }
}
