
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int,unsigned int*) ;
 int FUNC_1 (unsigned int*,int,int *) ;

__attribute__((used)) static void FUNC_2( WCHAR *VAR_0 )
{
    unsigned int VAR_1[4] = {0, 0, 0, 0};

    FUNC_0( 0x80000000, VAR_1 );
    if (VAR_1[0] >= 0x80000004)
    {
        FUNC_0( 0x80000002, VAR_1 );
        FUNC_1( VAR_1, 16, VAR_0 );
        FUNC_0( 0x80000003, VAR_1 );
        FUNC_1( VAR_1, 16, VAR_0 + 16 );
        FUNC_0( 0x80000004, VAR_1 );
        FUNC_1( VAR_1, 16, VAR_0 + 32 );
    }
}
