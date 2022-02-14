
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {int big_endian; } ;
struct TYPE_5__ {int buf; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,short,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,long,int ) ;

__attribute__((used)) static inline int FUNC_6(RAsm *VAR_0, RAsmOp *VAR_1, char *VAR_2, int VAR_3) {
 short VAR_4;
 int VAR_5;
 long int VAR_6;
 ut64 VAR_7 = FUNC_1 (((void*)0), VAR_2);
 if (VAR_3 != 8 && VAR_7 >> (VAR_3 * 8)) {
  FUNC_0 ("int16 Out is out of range\n");
  return 0;
 }

 ut8 *VAR_8 = (ut8*)FUNC_2 (&VAR_1->buf);
 if (!VAR_8) {
  return 0;
 }
 if (VAR_3 == 2) {
  VAR_4 = (short)VAR_7;
  FUNC_3 (VAR_8, VAR_4, VAR_0->big_endian);
 } else if (VAR_3 == 4) {
  VAR_5 = (int)VAR_7;
  FUNC_4 (VAR_8, VAR_5, VAR_0->big_endian);
 } else if (VAR_3 == 8) {
  VAR_6 = (long int)VAR_7;
  FUNC_5 (VAR_8, VAR_6, VAR_0->big_endian);
 } else {
  return 0;
 }
 return VAR_3;
}
