
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int multiline; int fp; } ;
struct in_src {scalar_t__ type; TYPE_1__ u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char,char*,int const) ;
 int FUNC_3 (char*,int const,int ) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static bool
FUNC_6(const struct in_src *VAR_2, char *VAR_3, const int VAR_4)
{
    if (VAR_2->type == VAR_1)
    {
        return FUNC_1(FUNC_3(VAR_3, VAR_4, VAR_2->u.fp));
    }
    else if (VAR_2->type == VAR_0)
    {
        bool VAR_5 = FUNC_2(VAR_2->u.multiline, '\n', VAR_3, VAR_4);
        if ((int) FUNC_5(VAR_3) + 1 < VAR_4)
        {
            FUNC_4(VAR_3, "\n");
        }
        return VAR_5;
    }
    else
    {
        FUNC_0(0);
        return 0;
    }
}
