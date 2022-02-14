
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (unsigned int*,int,int *) ;

__attribute__((used)) static void FUNC_2( WCHAR *VAR_0 )
{
    unsigned int VAR_1, VAR_2[4] = {0, 0, 0, 0};

    FUNC_0( 0, VAR_2 );
    VAR_1 = VAR_2[2];
    VAR_2[2] = VAR_2[3];
    VAR_2[3] = VAR_1;

    FUNC_1( VAR_2 + 1, 12, VAR_0 );
}
