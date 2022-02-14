
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int pc; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 char* FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 const char *VAR_4 = FUNC_0 (VAR_0->pc, VAR_2, VAR_3);
 return VAR_1->size = VAR_4? 1: 0;
}
