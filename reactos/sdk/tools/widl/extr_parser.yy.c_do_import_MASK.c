
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imports {struct imports* next; void* name; } ;
struct TYPE_2__ {char* temp_name; char* input_name; int line_number; int state; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 struct imports* VAR_3 ;
 int * FUNC_5 (char*,char*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (void*,char*) ;
 char* VAR_8 ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,int *) ;
 struct imports* FUNC_13 (int) ;
 void* FUNC_14 (char*) ;

int FUNC_15(char *VAR_9)
{
    FILE *VAR_10;
    char *VAR_11, *VAR_12;
    struct imports *VAR_13;
    int VAR_14 = VAR_5;
    int VAR_15, VAR_16;

    VAR_13 = VAR_3;
    while (VAR_13 && FUNC_10(VAR_13->name, VAR_9))
        VAR_13 = VAR_13->next;
    if (VAR_13) return 0;

    VAR_13 = FUNC_13(sizeof(struct imports));
    VAR_13->name = FUNC_14(VAR_9);
    VAR_13->next = VAR_3;
    VAR_3 = VAR_13;



    if (FUNC_9( VAR_9, '/' ) || FUNC_9( VAR_9, '\\' ))
        VAR_11 = FUNC_14( VAR_9 );
    else if (!(VAR_11 = FUNC_11( VAR_9, VAR_6 )))
        FUNC_1("Unable to open include file %s\n", VAR_9);

    if (VAR_5 == VAR_0)
        FUNC_1("Exceeded max import depth\n");

    VAR_4[VAR_14].temp_name = VAR_8;
    VAR_4[VAR_14].input_name = VAR_6;
    VAR_4[VAR_14].line_number = VAR_7;
    VAR_5++;
    VAR_6 = VAR_11;
    VAR_7 = 1;

    VAR_12 = FUNC_14( "widl.XXXXXX" );
    if((VAR_16 = FUNC_6( VAR_12, 0 )) == -1)
        FUNC_0("Could not generate a temp name from %s\n", VAR_12);

    VAR_8 = VAR_12;
    if (!(VAR_10 = FUNC_4(VAR_16, "wt")))
        FUNC_0("Could not open fd %s for writing\n", VAR_12);

    VAR_15 = FUNC_12( VAR_11, VAR_10 );
    FUNC_3( VAR_10 );
    if (VAR_15) FUNC_2(1);

    if((VAR_10 = FUNC_5(VAR_8, "r")) == ((void*)0))
        FUNC_1("Unable to open %s\n", VAR_8);

    VAR_4[VAR_14].state = VAR_2;
    FUNC_8(FUNC_7(VAR_10,VAR_1));
    return 1;
}
