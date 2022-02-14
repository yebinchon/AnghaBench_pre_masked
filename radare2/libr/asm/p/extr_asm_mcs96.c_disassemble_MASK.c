
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int const*,int,int *) ;
 int FUNC_1 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 if (VAR_3 > 1 && !FUNC_1 (VAR_2, "\xff\xff", 2)) {
  return -1;
 }
 VAR_1->size = FUNC_0 (VAR_2, VAR_3, &VAR_1->buf_asm);
 return VAR_1->size;
}
