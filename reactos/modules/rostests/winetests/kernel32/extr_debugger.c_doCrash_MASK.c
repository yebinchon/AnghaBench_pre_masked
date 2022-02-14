
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; } ;
typedef TYPE_1__ crash_blackbox_t ;
typedef int blackbox ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_1__*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(int VAR_0, char** VAR_1)
{
    volatile char* VAR_2;


    FUNC_1( 0 );
    FUNC_2( ((void*)0) );

    if (VAR_0 >= 4)
    {
        crash_blackbox_t VAR_3;
        VAR_3.pid=FUNC_0();
        FUNC_3(VAR_1[3], &VAR_3, sizeof(VAR_3));
    }


    FUNC_4("child: crashing...\n");
    VAR_2=((void*)0);
    *VAR_2=0;
}
