
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef int ut32 ;
typedef int st64 ;
struct TYPE_3__ {int eob; int dst; int type; scalar_t__ fail; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int const* const,scalar_t__,int) ;
 int FUNC_6 (int const* const,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(RAnal const * const VAR_6, RAnalOp *VAR_7, const ut32 VAR_8, const ut64 VAR_9) {
 st64 VAR_10 = 0;
 if (FUNC_0 (VAR_8)) {
  VAR_10 = FUNC_4 (VAR_8, 12);
 }

 if (FUNC_1(VAR_8) == VAR_2) {
  VAR_7->type = VAR_4;
  VAR_7->fail = VAR_9 + 4;
 } else if (FUNC_1(VAR_8) == VAR_0
  && FUNC_0(VAR_8) == 1
  && (FUNC_2(VAR_8) == VAR_1 || FUNC_2(VAR_8) == VAR_2)
  && VAR_10 == 8) {
   VAR_7->type = VAR_3;
   VAR_7->eob = 1;
   return;
   }
 else {
  VAR_7->type = VAR_5;
  VAR_7->eob = 1;
 }

 if(FUNC_0(VAR_8)) {
  VAR_7->dst = FUNC_5(VAR_6, FUNC_2(VAR_8), VAR_10);
 } else {
  VAR_7->dst = FUNC_6(VAR_6, FUNC_2(VAR_8), FUNC_3(VAR_8));
 }
}
