
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_2(void)
{
    LONG VAR_0, VAR_1;

    VAR_0 = 0;
    VAR_1 = FUNC_0( &VAR_0, 1 );
    FUNC_1( VAR_1 == 0 && VAR_0 == 1,
        "Expected 0 and 1, got %ld and %ld", VAR_1, VAR_0 );

    VAR_0 = 1;
    VAR_1 = FUNC_0( &VAR_0, 2 );
    FUNC_1( VAR_1 == 1 && VAR_0 == 3,
        "Expected 1 and 3, got %ld and %ld", VAR_1, VAR_0 );

    VAR_0 = 1;
    VAR_1 = FUNC_0( &VAR_0, -1 );
    FUNC_1( VAR_1 == 1 && VAR_0 == 0,
        "Expected 1 and 0, got %ld and %ld", VAR_1, VAR_0 );
}
