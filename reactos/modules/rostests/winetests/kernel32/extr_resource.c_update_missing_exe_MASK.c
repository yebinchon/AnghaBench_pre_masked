
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;


 int * FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4( void )
{
    HANDLE VAR_3;

    FUNC_2(0xdeadbeef);
    VAR_3 = FUNC_0( VAR_2, VAR_1 );
    VAR_0 = FUNC_1();
    FUNC_3( VAR_3 == ((void*)0), "BeginUpdateResource should fail\n");
}
