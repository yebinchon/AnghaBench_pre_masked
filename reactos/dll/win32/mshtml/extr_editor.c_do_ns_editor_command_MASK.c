
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
struct TYPE_3__ {int editor_controller; } ;
typedef TYPE_1__ NSContainer ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static void FUNC_4(NSContainer *VAR_0, const char *VAR_1)
{
    nsresult VAR_2;

    if(!VAR_0->editor_controller)
        return;

    VAR_2 = FUNC_3(VAR_0->editor_controller, VAR_1);
    if(FUNC_1(VAR_2))
        FUNC_0("DoCommand(%s) failed: %08x\n", FUNC_2(VAR_1), VAR_2);
}
