
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_4__ {int addr; int size; int esil; int dst; int * src; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int,int ) ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(RAnal* VAR_2, RAnalOp* VAR_3, ut16 VAR_4) {
 VAR_3->type = VAR_1;
 VAR_3->src[0] = FUNC_2 (VAR_2, VAR_3, VAR_4 & 0xFF, VAR_0);

 VAR_3->dst = FUNC_1 (VAR_2, FUNC_0 (VAR_4));

 FUNC_3 (&VAR_3->esil, "0x%x,[4],r%d,=", (VAR_4 & 0xFF) * 4 + ((VAR_3->addr >> 2)<<2) + 4, FUNC_0 (VAR_4));
 return VAR_3->size;
}
