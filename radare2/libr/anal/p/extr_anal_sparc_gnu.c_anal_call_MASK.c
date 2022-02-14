
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
typedef int st64 ;
struct TYPE_3__ {int jump; int fail; int dst; int type; } ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (int const,int const) ;

__attribute__((used)) static void FUNC_2(RAnalOp *VAR_1, const ut32 VAR_2, const ut64 VAR_3) {
 const st64 VAR_4 = (FUNC_0(VAR_2, 29) * 4);
 VAR_1->type = VAR_0;
 VAR_1->dst = FUNC_1(VAR_3, VAR_4);
 VAR_1->jump = VAR_3 + VAR_4;
 VAR_1->fail = VAR_3 + 4;
}
