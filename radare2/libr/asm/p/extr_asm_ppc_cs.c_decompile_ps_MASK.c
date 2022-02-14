
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_1__ ppcps_t ;
typedef int buf_asm ;
struct TYPE_11__ {int pc; } ;
struct TYPE_10__ {int size; } ;
typedef TYPE_2__ RAsmOp ;
typedef TYPE_3__ RAsm ;


 int FUNC_0 (int const,TYPE_1__*) ;
 int FUNC_1 (char*,int,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 ppcps_t VAR_4 = {0};
 if (VAR_3 < 4) {
  return -1;
 }
 VAR_1->size = 4;
 const ut32 VAR_5 = (VAR_2[0] << 24) | (VAR_2[1] << 16) | (VAR_2[2] << 8) | VAR_2[3];
 if (FUNC_0 (VAR_5, &VAR_4) < 1) {
  FUNC_2 (VAR_1, "invalid");
  return -1;
 }
 char VAR_6[64];
 FUNC_1 (VAR_6, sizeof (VAR_6), VAR_0->pc, &VAR_4);
 FUNC_2 (VAR_1, VAR_6);
 return VAR_1->size;
}
