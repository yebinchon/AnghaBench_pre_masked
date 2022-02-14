
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int drawarea; } ;
struct TYPE_5__ {scalar_t__ info; } ;
typedef TYPE_1__ GtkTargetEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_7 ;

void
FUNC_2(void)
{
    int VAR_8, VAR_9 = 0;
    int VAR_10 = VAR_3;
    GtkTargetEntry VAR_11[VAR_3];

    for (VAR_8 = 0; VAR_8 < (int)VAR_3; ++VAR_8)
    {
 if (!VAR_5 && VAR_6[VAR_8].info == VAR_4)
     VAR_10--;
 else
     VAR_11[VAR_9++] = VAR_6[VAR_8];
    }

    FUNC_1(VAR_7.drawarea);
    FUNC_0(VAR_7.drawarea,
        VAR_2,
        VAR_11, VAR_10,
        VAR_0 | VAR_1);
}
