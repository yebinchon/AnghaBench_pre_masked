
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rev; int buildrev; scalar_t__ opt_verbose; } ;
struct TYPE_3__ {int revconflicts; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,char*,char*,int,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_5, char *VAR_6, int VAR_7)
{
    int VAR_8 = 0;
    char VAR_9[VAR_0];

    FUNC_3(VAR_9, VAR_2);
    FUNC_2(VAR_9, VAR_6);
    VAR_8 = FUNC_0(VAR_9, 1);
    if (!VAR_7)
        VAR_9[0] = '\0';
    if (VAR_3.opt_verbose)
        FUNC_1(VAR_5, "| R--- %s Last Changed Rev: %d\n", VAR_9, VAR_8);

    if (VAR_8 && VAR_1)
    {
        if (VAR_3.rev < VAR_3.buildrev)
        {
            VAR_4.revconflicts++;
            FUNC_1(VAR_5, "| R--- Conflict %s: source tree(%d) < build(%d)\n", VAR_9, VAR_8, VAR_3.buildrev);
        }
        else if (VAR_8 > VAR_3.buildrev)
        {
            VAR_4.revconflicts++;
            FUNC_1(VAR_5, "| R--- Conflict %s: file(%d) > build(%d)\n", VAR_9, VAR_8, VAR_3.buildrev);
        }
    }
}
