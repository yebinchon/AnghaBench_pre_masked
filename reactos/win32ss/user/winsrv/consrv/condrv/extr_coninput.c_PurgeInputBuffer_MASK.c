
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int InputEvents; } ;
struct TYPE_5__ {TYPE_1__ InputBuffer; } ;
typedef int PLIST_ENTRY ;
typedef TYPE_2__* PCONSOLE ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static VOID
FUNC_4(PCONSOLE VAR_3)
{
    PLIST_ENTRY VAR_4;
    VAR_0* VAR_1;

    while (!FUNC_2(&VAR_3->InputBuffer.InputEvents))
    {
        VAR_4 = FUNC_3(&VAR_3->InputBuffer.InputEvents);
        VAR_1 = FUNC_0(VAR_4, VAR_0, VAR_2);
        FUNC_1(VAR_1);
    }


}
