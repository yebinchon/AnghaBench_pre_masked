
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long retval; scalar_t__ name; } ;
typedef TYPE_1__ OPT_PAIR ;


 unsigned long VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_2 ;

int FUNC_1(const char *VAR_3, unsigned long VAR_4)
{
    OPT_PAIR *VAR_5;

    if (VAR_4 == VAR_0) {
        FUNC_0("%s: Bad format \"%s\"; must be pem or der\n",
                          VAR_2, VAR_3);
    } else {
        FUNC_0("%s: Bad format \"%s\"; must be one of:\n",
                          VAR_2, VAR_3);
        for (VAR_5 = VAR_1; VAR_5->name; VAR_5++)
            if (VAR_4 & VAR_5->retval)
                FUNC_0("   %s\n", VAR_5->name);
    }
    return 0;
}
