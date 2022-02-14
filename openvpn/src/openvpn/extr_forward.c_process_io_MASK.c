
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int event_set_status; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct context*) ;
 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 unsigned int const VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct context*) ;
 int FUNC_4 (struct context*) ;
 int FUNC_5 (struct context*) ;
 int FUNC_6 (struct context*) ;
 int FUNC_7 (struct context*) ;
 int FUNC_8 (struct context*) ;

void
FUNC_9(struct context *VAR_7)
{
    const unsigned int VAR_8 = VAR_7->c2.event_set_status;
    if (VAR_8 & VAR_3)
    {
        FUNC_5(VAR_7);
    }

    else if (VAR_8 & VAR_5)
    {
        FUNC_6(VAR_7);
    }

    else if (VAR_8 & VAR_2)
    {
        FUNC_7(VAR_7);
        if (!FUNC_1(VAR_7))
        {
            FUNC_3(VAR_7);
        }
    }

    else if (VAR_8 & VAR_4)
    {
        FUNC_8(VAR_7);
        if (!FUNC_1(VAR_7))
        {
            FUNC_4(VAR_7);
        }
    }
}
