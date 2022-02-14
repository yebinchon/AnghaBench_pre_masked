
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct exec_command_t {int cmd; int core; } ;
struct TYPE_3__ {int offset; int size; } ;
typedef TYPE_1__ RFlagItem ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(RFlagItem *VAR_0, void *VAR_1) {
 struct exec_command_t *VAR_2 = (struct exec_command_t *)VAR_1;
 FUNC_0 (VAR_2->core, VAR_0->size);
 FUNC_2 (VAR_2->core, VAR_0->offset, 1);
 FUNC_1 (VAR_2->core, VAR_2->cmd);
 return 1;
}
