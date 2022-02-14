
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {scalar_t__ big_endian; int pc; } ;
struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (char const*,int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(RAsm *VAR_0, RAsmOp *VAR_1, const char *VAR_2) {
 ut8 *VAR_3 = (ut8*)FUNC_1 (&VAR_1->buf);
 int VAR_4 = FUNC_0 (VAR_2, VAR_0->pc, VAR_3);
 if (VAR_0->big_endian) {
  ut8 *VAR_5 = VAR_3;
  ut8 VAR_6 = VAR_5[0];
  VAR_5[0] = VAR_5[3];
  VAR_5[3] = VAR_6;
  VAR_6 = VAR_5[1];
  VAR_5[1] = VAR_5[2];
  VAR_5[2] = VAR_6;
 }
 return VAR_4;
}
