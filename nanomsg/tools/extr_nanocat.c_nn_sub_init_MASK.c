
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; char** items; } ;
struct TYPE_5__ {TYPE_1__ subscriptions; } ;
typedef TYPE_2__ nn_options_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ,int ,char*,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3 (nn_options_t *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (VAR_2->subscriptions.num) {
        for (VAR_4 = 0; VAR_4 < VAR_2->subscriptions.num; ++VAR_4) {
            VAR_5 = FUNC_1 (VAR_3, VAR_0, VAR_1,
                VAR_2->subscriptions.items[VAR_4],
                FUNC_2 (VAR_2->subscriptions.items[VAR_4]));
            FUNC_0 (VAR_5 == 0, "Can't subscribe");
        }
    } else {
        VAR_5 = FUNC_1 (VAR_3, VAR_0, VAR_1, "", 0);
        FUNC_0 (VAR_5 == 0, "Can't subscribe");
    }
}
