
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sa_family_t ;
struct TYPE_3__ {scalar_t__ proto_af; int proto; char const* display_form; char const* short_form; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_1(int VAR_1, sa_family_t VAR_2, bool VAR_3)
{
    unsigned int VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); ++VAR_4)
    {
        if (VAR_0[VAR_4].proto_af == VAR_2 && VAR_0[VAR_4].proto == VAR_1)
        {
            if (VAR_3)
            {
                return VAR_0[VAR_4].display_form;
            }
            else
            {
                return VAR_0[VAR_4].short_form;
            }
        }
    }

    return "[unknown protocol]";
}
