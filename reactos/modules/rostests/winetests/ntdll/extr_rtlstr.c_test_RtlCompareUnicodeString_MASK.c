
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int*,int,int*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
    WCHAR VAR_2, VAR_3;
    UNICODE_STRING VAR_4, VAR_5;

    VAR_4 = &VAR_2;
    VAR_4 = VAR_4 = sizeof(WCHAR);
    VAR_5 = &VAR_3;
    VAR_5 = VAR_5 = sizeof(WCHAR);
    for (VAR_2 = 0; VAR_2 < 512; VAR_2++)
    {
        for (VAR_3 = 0; VAR_3 < 1024; VAR_3++)
        {
            LONG VAR_6 = FUNC_1( &VAR_4, &VAR_5, VAR_0 );
            FUNC_0( VAR_6 == (VAR_2 - VAR_3), "wrong result %d %04x %04x\n", VAR_6, VAR_2, VAR_3 );
            VAR_6 = FUNC_1( &VAR_4, &VAR_5, VAR_1 );
            FUNC_0( VAR_6 == (FUNC_3(VAR_2) - FUNC_3(VAR_3)),
                "wrong result %d %04x %04x\n", VAR_6, VAR_2, VAR_3 );
            if (&FUNC_2)
            {
                VAR_6 = FUNC_2( &VAR_2, 1, &VAR_3, 1, VAR_0 );
                FUNC_0( VAR_6 == (VAR_2 - VAR_3), "wrong result %d %04x %04x\n", VAR_6, VAR_2, VAR_3 );
                VAR_6 = FUNC_2( &VAR_2, 1, &VAR_3, 1, VAR_1 );
                FUNC_0( VAR_6 == (FUNC_3(VAR_2) - FUNC_3(VAR_3)),
                    "wrong result %d %04x %04x\n", VAR_6, VAR_2, VAR_3 );
            }
        }
    }
}
