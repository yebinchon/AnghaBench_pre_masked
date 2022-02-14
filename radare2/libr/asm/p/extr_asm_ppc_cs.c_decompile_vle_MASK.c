
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int size; } ;
typedef TYPE_1__ vle_t ;
struct TYPE_14__ {int member_0; } ;
typedef TYPE_2__ vle_handle ;
typedef int ut8 ;
typedef int buf_asm ;
struct TYPE_16__ {int pc; } ;
struct TYPE_15__ {int size; } ;
typedef TYPE_3__ RAsmOp ;
typedef TYPE_4__ RAsm ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int const*,int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 vle_t* VAR_4 = 0;
 vle_handle VAR_5 = {0};
 if (VAR_3 < 2) {
  return -1;
 }
 if (!FUNC_2 (&VAR_5, VAR_2, VAR_3) && (VAR_4 = FUNC_3 (&VAR_5))) {
  VAR_1->size = VAR_4->size;
  char VAR_6[64];
  FUNC_4 (VAR_6, sizeof (VAR_6), VAR_0->pc, VAR_4);
  FUNC_0 (VAR_1, VAR_6);
  FUNC_1 (VAR_4);
 } else {
  FUNC_0 (VAR_1, "invalid");
  VAR_1->size = 2;
  return -1;
 }
 return VAR_1->size;
}
