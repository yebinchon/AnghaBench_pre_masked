
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef int ut64 ;
struct TYPE_6__ {scalar_t__ const op; int len; scalar_t__ const name; } ;
struct TYPE_5__ {int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (char*,scalar_t__ const) ;
 int FUNC_2 (int,int,int ,TYPE_1__*,scalar_t__ const*,int ) ;

__attribute__((used)) static int FUNC_3 (ut64 VAR_1, RAsmOp *VAR_2, const ut8 *VAR_3, ut64 VAR_4) {
 int VAR_5;
 for (VAR_5=0; VAR_0[VAR_5].name != ((void*)0); VAR_5++) {
  if (VAR_0[VAR_5].op == VAR_3[0]) {
   const char *VAR_6 = "invalid";
   int VAR_7 = VAR_0[VAR_5].len;
   switch (VAR_0[VAR_5].len) {
   case 1:
    VAR_6 = FUNC_1 ("%s", VAR_0[VAR_5].name);
    break;
   case 2:
    if (VAR_7 > 1) {
     VAR_6 = FUNC_1 (VAR_0[VAR_5].name, VAR_3[1]);
    } else {
     VAR_6 = "truncated";
     VAR_7 = -1;
    }
    break;
   case 3:
    if (VAR_7 > 2) {
     VAR_6 = FUNC_1 (VAR_0[VAR_5].name, VAR_3[1] + 0x100 * VAR_3[2]);
    } else {
     VAR_6 = "truncated";
     VAR_7 = -1;
    }
    break;
   case 4:
    if (VAR_7 > 3) {
     VAR_6 = FUNC_1 (VAR_0[VAR_5].name, VAR_3[1]+0x100*VAR_3[2]+0x10000*VAR_3[3]);
    } else {
     VAR_6 = "truncated";
     VAR_7 = -1;
    }
    break;
   default:
    goto beach;
   }
   FUNC_0 (&VAR_2->buf_asm, VAR_6);
   return VAR_7;
  }
 }
beach:
 return FUNC_2 (1, 1, VAR_1, VAR_2, VAR_3, VAR_4);
}
