
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 int * FUNC_6 (char*,char*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 char* VAR_7 ;
 int FUNC_10 (int *,int *) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    int VAR_8 = VAR_4;
    int VAR_9, VAR_10;
    char *VAR_11;
    FILE *VAR_12;

    FUNC_0(VAR_4 == 0);

    VAR_5 = VAR_2;
    VAR_2 = ((void*)0);
    VAR_6 = 1;

    VAR_11 = FUNC_11( "widl.XXXXXX" );
    if((VAR_10 = FUNC_7( VAR_11, 0 )) == -1)
        FUNC_1("Could not generate a temp name from %s\n", VAR_11);

    VAR_7 = VAR_11;
    if (!(VAR_12 = FUNC_5(VAR_10, "wt")))
        FUNC_1("Could not open fd %s for writing\n", VAR_11);

    VAR_9 = FUNC_10(VAR_5, VAR_12);
    FUNC_4(VAR_12);
    if (VAR_9) FUNC_3(1);

    if((VAR_12 = FUNC_6(VAR_7, "r")) == ((void*)0))
        FUNC_2("Unable to open %s\n", VAR_7);

    VAR_3[VAR_8].state = VAR_1;
    FUNC_9(FUNC_8(VAR_12,VAR_0));
}
