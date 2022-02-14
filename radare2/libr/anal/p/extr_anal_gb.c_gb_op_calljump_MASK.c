
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_3__ {void* jump; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 void* FUNC_0 (int const,int const,int ) ;
 scalar_t__ FUNC_1 (int const,int const) ;
 int FUNC_2 (int const,int const) ;
 void* FUNC_3 (int const,int const) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int ,char*) ;

__attribute__((used)) static ut8 FUNC_5(RAnal *VAR_1, RAnalOp *VAR_2, const ut8 *VAR_3, ut64 VAR_4)
{
 if (FUNC_1 (VAR_3[1],VAR_3[2])) {
  VAR_2->jump = FUNC_3 (VAR_3[1], VAR_3[2]);
  FUNC_4 (VAR_1, VAR_0, VAR_4, "--> unpredictable");
  return 0;
 }
 if (!FUNC_2 (VAR_3[1], VAR_3[2])) {
  VAR_2->jump = FUNC_3(VAR_3[1], VAR_3[2]);
 } else {
  VAR_2->jump = FUNC_0 (VAR_3[1], VAR_3[2], VAR_4);
 }
 return 1;
}
