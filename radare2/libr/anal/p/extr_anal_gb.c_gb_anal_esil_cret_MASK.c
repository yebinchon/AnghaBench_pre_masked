
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {scalar_t__ cond; int esil; } ;
typedef TYPE_1__ RAnalOp ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char) ;

__attribute__((used)) static inline void FUNC_1 (RAnalOp *VAR_1, const ut8 VAR_2)
{
 char VAR_3;
 if ((VAR_2 & 0xd0) == 0xd0) {
  VAR_3 = 'C';
 } else {
  VAR_3 = 'Z';
 }
 if (VAR_1->cond == VAR_0) {
  FUNC_0 (&VAR_1->esil, "%c,?{,sp,[2],pc,:=,2,sp,+=,}", VAR_3);
 } else {
  FUNC_0 (&VAR_1->esil, "%c,!,?{,sp,[2],pc,:=,2,sp,+=,}", VAR_3);
 }
}
