
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line_number; int char_number; int state; int * input; int file; } ;
struct TYPE_3__ {int (* close ) (int ) ;int (* open ) (char const*,int) ;} ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_9 (char*,char const*) ;
 int * FUNC_10 (char const*) ;
 int FUNC_11 (char*,char const*) ;
 int * VAR_1 ;
 int FUNC_12 () ;
 int VAR_2 ;
 int FUNC_13 (char const*,int) ;
 int FUNC_14 (int ) ;
 TYPE_1__* VAR_3 ;

int FUNC_15( const char *VAR_4, FILE *VAR_5 )
{
    int VAR_6;

    VAR_0.input = ((void*)0);
    VAR_0.line_number = 1;
    VAR_0.char_number = 1;
    VAR_0.state = 0;

    VAR_6 = FUNC_8();
    if(VAR_6)
        return VAR_6;
    FUNC_0();
    FUNC_1();

    if (!VAR_4) VAR_0.file = VAR_2;
    else if (!(VAR_0.file = VAR_3->open(VAR_4, 1)))
    {
        FUNC_11("Could not open %s\n", VAR_4);
        FUNC_3();
        FUNC_2();
        FUNC_6();
        return 2;
    }

    VAR_0.input = VAR_4 ? FUNC_10(VAR_4) : ((void*)0);

    VAR_1 = VAR_5;
    FUNC_9("# 1 \"%s\" 1\n", VAR_4 ? VAR_4 : "");

    VAR_6 = FUNC_12();

    if (!VAR_6 && VAR_0.state) VAR_6 = VAR_0.state;

    if (VAR_4)
    {
 VAR_3->close(VAR_0.file);
 FUNC_4(VAR_0.input);
    }

    while (FUNC_5()) FUNC_7();
    FUNC_3();
    FUNC_2();
    FUNC_6();
    return VAR_6;
}
