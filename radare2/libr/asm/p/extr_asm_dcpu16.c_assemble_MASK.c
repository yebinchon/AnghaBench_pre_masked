
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int len; } ;
struct TYPE_4__ {TYPE_2__ buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_0, RAsmOp *VAR_1, const char *VAR_2) {
 int VAR_3 = FUNC_0 ((ut8*)FUNC_1 (&VAR_1->buf), VAR_2);
 VAR_1->buf.len = VAR_3;
 return VAR_3;
}
