
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int pc; } ;
struct TYPE_5__ {int size; int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (int ,int *,char const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_0, RAsmOp *VAR_1, const char *VAR_2) {


 return VAR_1->size = FUNC_0 (VAR_0->pc, (ut8*)FUNC_1 (&VAR_1->buf), VAR_2);
}
