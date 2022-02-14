
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ freeze_count; } ;
typedef TYPE_1__ GtkForm ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(GtkForm *VAR_0)
{
    FUNC_2(FUNC_0(VAR_0));

    if (VAR_0->freeze_count)
    {
 if (!(--VAR_0->freeze_count))
 {
     FUNC_3(VAR_0);
     FUNC_4(FUNC_1(VAR_0));
 }
    }
}
