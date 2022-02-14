
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_3__ {int size; int esil; int * src; int dst; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *,char*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(RAnal* VAR_2, RAnalOp* VAR_3, ut16 VAR_4) {
 VAR_3->type = VAR_1;
 VAR_3->dst = FUNC_2 (VAR_2, FUNC_1 (VAR_4));
 VAR_3->src[0] = FUNC_3 (VAR_2, FUNC_0 (VAR_4), VAR_4 & 0x0F, VAR_0);
 FUNC_4 (&VAR_3->esil, "r%d,0x%x,+,[4],r%d,=", FUNC_0 (VAR_4), (VAR_4&0xF) * 4, FUNC_1 (VAR_4));
 return VAR_3->size;
}
