
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_set_owned; int event_set_max; int event_set; } ;
struct context {TYPE_1__ c2; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct context *VAR_3,
                  bool VAR_4)
{
    unsigned int VAR_5 = 0;

    VAR_3->c2.event_set_max = VAR_0;

    VAR_5 |= VAR_1;

    if (VAR_4)
    {
        VAR_5 |= VAR_2;
    }

    VAR_3->c2.event_set = FUNC_0(&VAR_3->c2.event_set_max, VAR_5);
    VAR_3->c2.event_set_owned = 1;
}
