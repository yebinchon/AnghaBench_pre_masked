
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int size; int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_0, RAsmOp *VAR_1, const char *VAR_2) {
 ut8 *VAR_3 = (ut8*)FUNC_0 (&VAR_1->buf);
 VAR_1->size = FUNC_1 (VAR_2, VAR_3, 32);
 return VAR_1->size;
}
