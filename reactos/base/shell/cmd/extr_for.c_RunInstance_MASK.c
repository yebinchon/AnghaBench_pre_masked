
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Type; } ;
struct TYPE_5__ {TYPE_3__* Subcommands; } ;
typedef TYPE_1__ PARSED_COMMAND ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static INT FUNC_5(PARSED_COMMAND *VAR_4)
{
    if (VAR_2 && !VAR_1 && VAR_4->Subcommands->Type != VAR_0)
    {
        if (!VAR_3)
            FUNC_0(FUNC_4('\n'));
        FUNC_3();
        FUNC_1(VAR_4->Subcommands);
        FUNC_0(FUNC_4('\n'));
    }

    return FUNC_2(VAR_4->Subcommands);
}
