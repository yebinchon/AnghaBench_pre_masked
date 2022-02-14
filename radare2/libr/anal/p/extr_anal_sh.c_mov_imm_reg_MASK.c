
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut16 ;
typedef int st8 ;
struct TYPE_3__ {int size; int esil; int * src; int dst; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(RAnal* VAR_1, RAnalOp* VAR_2, ut16 VAR_3) {
 VAR_2->type = VAR_0;
 VAR_2->dst = FUNC_1 (VAR_1, FUNC_0 (VAR_3));
 VAR_2->src[0] = FUNC_2 (VAR_1, (st8)(VAR_3 & 0xFF));
 FUNC_3 (&VAR_2->esil, "0x%x,r%d,=,r%d,0x80,&,?{,0xFFFFFF00,r%d,|=,}", VAR_3 & 0xFF, FUNC_0 (VAR_3), FUNC_0 (VAR_3), FUNC_0 (VAR_3));
 return VAR_2->size;
}
