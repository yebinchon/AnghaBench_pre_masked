
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int pc; } ;
struct TYPE_5__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int const*,int,int*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 int VAR_4 = 0;
 char *VAR_5 = FUNC_1 (VAR_0->pc, VAR_2, VAR_3, &VAR_4);
 if (VAR_4 < 0) {
  VAR_4 = 0;
 }
 if (VAR_5) {
  FUNC_2 (&VAR_1->buf_asm, VAR_5);
  FUNC_0 (VAR_5);
 }
 VAR_1->size = VAR_4;
 return VAR_4;
}
