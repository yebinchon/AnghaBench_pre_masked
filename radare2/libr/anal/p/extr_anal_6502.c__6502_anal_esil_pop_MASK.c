
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int esil; } ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_2(RAnalOp *VAR_1, ut8 VAR_2) {


 char *VAR_3 = (VAR_2==0x28) ? "flags" : "a";

 FUNC_1 (&VAR_1->esil, "sp,++=,sp,0x100,+,[1],%s,=", VAR_3);

 if (VAR_2 == 0x68) {
  FUNC_0 (VAR_1, VAR_0);
 }
}
