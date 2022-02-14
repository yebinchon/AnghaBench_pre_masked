
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {void* type; } ;
typedef TYPE_1__ pp_entry_t ;
typedef int buf ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    time_t VAR_1 = FUNC_3(((void*)0));
    pp_entry_t *VAR_2;
    char VAR_3[32];

    FUNC_2(VAR_3, sizeof(VAR_3), "\"%b %d %Y\"", FUNC_0(&VAR_1));
    FUNC_1( "__DATE__", VAR_3 );

    FUNC_2(VAR_3, sizeof(VAR_3), "\"%H:%M:%S\"", FUNC_0(&VAR_1));
    FUNC_1( "__TIME__", VAR_3 );

    VAR_2 = FUNC_1( "__FILE__", "" );
    if(VAR_2)
        VAR_2->type = VAR_0;

    VAR_2 = FUNC_1( "__LINE__", "" );
    if(VAR_2)
        VAR_2->type = VAR_0;
}
