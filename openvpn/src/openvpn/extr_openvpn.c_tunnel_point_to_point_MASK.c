
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ event_set_status; } ;
struct context {TYPE_1__ c2; int es; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct context*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (struct context*) ;
 int FUNC_4 (struct context*,int ,int ) ;
 int FUNC_5 (struct context*,int ) ;
 int FUNC_6 (struct context*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct context*) ;
 int FUNC_10 (struct context*) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(struct context *VAR_4)
{
    FUNC_3(VAR_4);


    VAR_4->mode = VAR_1;


    FUNC_4(VAR_4, VAR_4->es, VAR_0);
    if (FUNC_0(VAR_4))
    {
        return;
    }


    while (1)
    {
        FUNC_8(VAR_3);


        FUNC_9(VAR_4);
        FUNC_1();


        FUNC_5(VAR_4, FUNC_6(VAR_4));
        FUNC_1();


        if (VAR_4->c2.event_set_status == VAR_2)
        {
            FUNC_7();
            continue;
        }


        FUNC_10(VAR_4);
        FUNC_1();

        FUNC_7();
    }

    FUNC_11();


    FUNC_2(VAR_4);
}
