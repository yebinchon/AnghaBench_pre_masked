
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef int ut32 ;
typedef int st64 ;
struct TYPE_3__ {int eob; scalar_t__ jump; int dst; scalar_t__ fail; int type; } ;
typedef TYPE_1__ RAnalOp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int const) ;
 int const FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__ const,int) ;

__attribute__((used)) static void FUNC_7(RAnalOp *VAR_11, const ut32 VAR_12, const ut64 VAR_13) {
 st64 VAR_14 = 0;
 int VAR_15 = 0;
 VAR_11->eob = 1;


 if(FUNC_2(VAR_12) == VAR_2 || FUNC_2(VAR_12) == VAR_0) {
  VAR_15 = FUNC_5 (FUNC_0(VAR_12));
 } else if(FUNC_2(VAR_12) == VAR_4 || FUNC_2(VAR_12) == VAR_3) {
  VAR_15 = FUNC_3 (FUNC_0(VAR_12));
 } else if(FUNC_2(VAR_12) == VAR_1) {
  VAR_15 = VAR_7;
 }

 if (VAR_15 == VAR_5) {
  VAR_11->type = VAR_9;
 } else if (VAR_15 == VAR_6) {
  VAR_11->type = VAR_10;
  return;
 } else {
  VAR_11->type = VAR_8;
  VAR_11->fail = VAR_13 + 4;
 }



 if (FUNC_2 (VAR_12) == VAR_2 || FUNC_2 (VAR_12) == VAR_4) {
  VAR_14 = FUNC_4(VAR_12, 21) * 4;
 } else if (FUNC_2(VAR_12) == VAR_0 || FUNC_2 (VAR_12) == VAR_3) {
  VAR_14 = FUNC_4 (VAR_12, 18) * 4;
 } else if (FUNC_2(VAR_12) == VAR_1) {
  VAR_14 = FUNC_4 (FUNC_1 (VAR_12), 15) * 4;
 }
 VAR_11->dst = FUNC_6 (VAR_13, VAR_14);
 VAR_11->jump = VAR_13 + VAR_14;
}
