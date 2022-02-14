
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Lock; } ;
struct TYPE_6__ {TYPE_2__* Console; } ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;
typedef TYPE_2__* PCONSOLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_3(PGUI_CONSOLE_DATA VAR_4)
{
    PCONSOLE VAR_5 = VAR_4->Console;

    if (!FUNC_1(VAR_5, VAR_0, VAR_3))
        return VAR_3;
    FUNC_0(VAR_5, 0, VAR_1);

    FUNC_2(&VAR_5->Lock);
    return VAR_2;
}
