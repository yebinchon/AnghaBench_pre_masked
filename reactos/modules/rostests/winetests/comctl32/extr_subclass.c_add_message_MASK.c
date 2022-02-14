
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct message {int procnum; int wParam; } ;
struct TYPE_6__ {int procnum; int wParam; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(const struct message *VAR_3)
{
    if (!VAR_0)
    {
        VAR_2 = 10;
        VAR_0 = FUNC_1( VAR_2 * sizeof (struct message) );
    }
    if (VAR_1 == VAR_2)
    {
        VAR_2 *= 2;
        VAR_0 = FUNC_2( VAR_0, VAR_2 * sizeof (struct message) );
    }
    FUNC_0(VAR_0);

    VAR_0[VAR_1].wParam = VAR_3->wParam;
    VAR_0[VAR_1].procnum = VAR_3->procnum;

    VAR_1++;
}
