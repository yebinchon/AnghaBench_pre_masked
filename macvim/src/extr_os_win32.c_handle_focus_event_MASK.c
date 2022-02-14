
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bSetFocus; } ;
struct TYPE_6__ {TYPE_1__ FocusEvent; } ;
struct TYPE_7__ {TYPE_2__ Event; } ;
typedef TYPE_3__ INPUT_RECORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(INPUT_RECORD VAR_1)
{
    VAR_0 = VAR_1.Event.FocusEvent.bSetFocus;
    FUNC_0((int)VAR_0);
}
