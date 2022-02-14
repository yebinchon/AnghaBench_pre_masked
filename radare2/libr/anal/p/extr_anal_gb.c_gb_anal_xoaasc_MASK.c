
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int type; int esil; TYPE_2__** src; TYPE_1__* dst; } ;
struct TYPE_6__ {int memref; void* reg; } ;
struct TYPE_5__ {void* reg; } ;
typedef int RReg ;
typedef TYPE_3__ RAnalOp ;
 int VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_3 (RReg *VAR_2, RAnalOp *VAR_3, const ut8 *VAR_4) {
 VAR_3->dst = FUNC_0 ();
 VAR_3->src[0] = FUNC_0 ();
 VAR_3->dst->reg = FUNC_1 (VAR_2, "a", VAR_0);
 VAR_3->src[0]->reg = FUNC_1 (VAR_2, VAR_1[VAR_4[0] & 7], VAR_0);
 VAR_3->src[0]->memref = ((VAR_4[0] & 7) == 6);
 switch (VAR_3->type) {
 case 128:
  if (VAR_3->src[0]->memref) {
   FUNC_2 (&VAR_3->esil, "%s,[1],a,^=,$z,Z,:=,0,N,:=,0,H,:=,0,C,:=", VAR_1[VAR_4[0] & 7]);
  } else {
   FUNC_2 (&VAR_3->esil, "%s,a,^=,$z,Z,:=,0,N,:=,0,H,:=,0,C,:=", VAR_1[VAR_4[0] & 7]);
  }
  break;
 case 130:
  if (VAR_3->src[0]->memref) {
   FUNC_2 (&VAR_3->esil, "%s,[1],a,|=,$z,Z,:=,0,N,:=,0,H,:=,0,C,:=", VAR_1[VAR_4[0] &7]);
  } else {
   FUNC_2 (&VAR_3->esil, "%s,a,|=,$z,Z,:=,0,N,:=,0,H,:=,0,C,:=", VAR_1[VAR_4[0] & 7]);
  }
  break;
 case 132:
  if (VAR_3->src[0]->memref) {
   FUNC_2 (&VAR_3->esil, "%s,[1],a,&=,$z,Z,:=,0,N,:=,1,H,:=,0,C,:=", VAR_1[VAR_4[0] & 7]);
  } else {
   FUNC_2 (&VAR_3->esil, "%s,a,&=,$z,Z,:=,0,N,:=,1,H,:=,0,C,:=", VAR_1[VAR_4[0] & 7]);
  }
  break;
 case 133:
  if (VAR_3->src[0]->memref) {
   if (VAR_4[0] > 0x87) {
    VAR_3->src[1] = FUNC_0 ();
    VAR_3->src[1]->reg = FUNC_1 (VAR_2, "C", VAR_0);
    FUNC_2 ( &VAR_3->esil, "C,%s,[1],+,a,+=,$z,Z,:=,3,$c,H,:=,7,$c,C,:=,0,N,:=", VAR_1[VAR_4[0] & 7]);
   } else {
    FUNC_2 (&VAR_3->esil, "%s,[1],a,+=,$z,Z,:=,3,$c,H,:=,7,$c,C,:=,0,N,:=", VAR_1[VAR_4[0] & 7]);
   }
  } else {
   if (VAR_4[0] > 0x87) {
    VAR_3->src[1] = FUNC_0 ();
    VAR_3->src[1]->reg = FUNC_1 (VAR_2, "C", VAR_0);
    FUNC_2 (&VAR_3->esil, "C,%s,+,a,+=,$z,Z,:=,3,$c,H,:=,7,$c,C,:=,0,N,:=", VAR_1[VAR_4[0] & 7]);
   } else {
    FUNC_2 (&VAR_3->esil, "%s,a,+=,$z,Z,:=,3,$c,H,:=,7,$c,C,:=,0,N,:=", VAR_1[VAR_4[0] & 7]);
   }
  }
  break;
 case 129:
  if (VAR_3->src[0]->memref) {
   if (VAR_4[0] > 0x97) {
    VAR_3->src[1] = FUNC_0 ();
    VAR_3->src[1]->reg = FUNC_1 (VAR_2, "C", VAR_0);
    FUNC_2 (&VAR_3->esil, "C,%s,[1],+,a,-=,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_1[VAR_4[0] & 7]);
   } else {
    FUNC_2 (&VAR_3->esil, "%s,[1],a,-=,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_1[VAR_4[0] & 7]);
   }
  } else {
   if (VAR_4[0] > 0x97) {
    VAR_3->src[1] = FUNC_0 ();
    VAR_3->src[1]->reg = FUNC_1 (VAR_2, "C", VAR_0);
    FUNC_2 (&VAR_3->esil, "C,%s,+,a,-=,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_1[VAR_4[0] & 7]);
   } else {
    FUNC_2 (&VAR_3->esil, "%s,a,-=,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_1[VAR_4[0] & 7]);
   }
  }
  break;
 case 131:
  if (VAR_3->src[0]->memref) {
   FUNC_2 (&VAR_3->esil, "%s,[1],a,==,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_1[VAR_4[0] & 7]);
  } else {
   FUNC_2 (&VAR_3->esil, "%s,a,==,$z,Z,:=,4,$b,H,:=,8,$b,C,:=,1,N,:=", VAR_1[VAR_4[0] & 7]);
  }
  break;
 default:

  break;
 }
}
