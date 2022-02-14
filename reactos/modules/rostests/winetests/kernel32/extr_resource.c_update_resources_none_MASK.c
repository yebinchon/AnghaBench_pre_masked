
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;
typedef int BOOL ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3( void )
{
    HMODULE VAR_2;
    BOOL VAR_3;

    VAR_2 = FUNC_0( VAR_1, VAR_0 );
    FUNC_2( VAR_2 != ((void*)0), "BeginUpdateResource failed\n");

    VAR_3 = FUNC_1( VAR_2, VAR_0 );
    FUNC_2( VAR_3, "EndUpdateResource failed\n");
}
