
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int type; int esil; TYPE_2__** src; TYPE_1__* dst; } ;
struct TYPE_6__ {int absolute; int imm; void* reg; } ;
struct TYPE_5__ {void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;
 int VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int const) ;

__attribute__((used)) static void FUNC_4 (RReg *VAR_1, RAnalOp *VAR_2, const ut8 *VAR_3)
{
 VAR_2->dst = FUNC_0 ();
 VAR_2->src[0] = FUNC_0 ();
 VAR_2->dst->reg = FUNC_1 (VAR_1, "a", VAR_0);
 VAR_2->src[0]->absolute = 1;
 VAR_2->src[0]->imm = VAR_3[1];
 switch (VAR_2->type) {
 case 128:
  FUNC_3 (&VAR_2->esil, "0x%02x,a,^=,$z,Z,:=,0,N,:=,0,H,:=,0,C,:=", VAR_3[1]);
  break;
 case 130:
  FUNC_3 (&VAR_2->esil, "0x%02x,a,|=,$z,Z,:=,0,N,:=,0,H,:=,0,C,:=", VAR_3[1]);
  break;
 case 132:
  FUNC_3 (&VAR_2->esil, "0x%02x,a,&=,$z,Z,:=,0,N,:=,1,H,:=,0,C,:=", VAR_3[1]);
  break;
 case 133:
  FUNC_3 (&VAR_2->esil, "0x%02x,", VAR_3[1]);
  if (VAR_3[0] == 0xce) {
   VAR_2->src[1] = FUNC_0 ();
   VAR_2->src[1]->reg = FUNC_1 (VAR_1, "C", VAR_0);
   FUNC_2 (&VAR_2->esil, "a,+=,C,NUM,7,$c,C,:=,3,$c,H,:=,a,+=,7,$c,C,|,C,:=,3,$c,H,|=,a,a,=,$z,Z,:=,0,N,:=");
  } else {
   FUNC_2 (&VAR_2->esil, "a,+=,3,$c,H,:=,7,$c,C,:=,0,N,:=,a,a,=,$z,Z,:=");
  }
  break;
 case 129:
  FUNC_3 (&VAR_2->esil, "0x%02x,", VAR_3[1]);
  if (VAR_3[0] == 0xde) {
   VAR_2->src[1] = FUNC_0 ();
   VAR_2->src[1]->reg = FUNC_1 (VAR_1, "C", VAR_0);
   FUNC_2 (&VAR_2->esil, "a,-=,C,NUM,8,$b,C,:=,4,$b,H,:=,a,-=,8,$b,C,|,C,=,4,$b,H,|,H,=,a,a,=,$z,Z,:=,1,N,:=");
  } else {
   FUNC_2 (&VAR_2->esil, "a,-=,4,$b,H,:=,8,$b,C,:=,1,N,:=,a,a,=,$z,Z,:=");
  }
  break;
 case 131:
  FUNC_3 (&VAR_2->esil, "%d,a,==,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_3[1]);
  break;
 }
}
