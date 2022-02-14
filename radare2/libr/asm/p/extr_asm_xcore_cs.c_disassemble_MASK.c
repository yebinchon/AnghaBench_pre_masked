
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
typedef int csh ;
struct TYPE_10__ {int size; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_12__ {int pc; scalar_t__ big_endian; } ;
struct TYPE_11__ {int size; } ;
typedef TYPE_2__ RAsmOp ;
typedef TYPE_3__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int,int ,int,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 char* FUNC_7 (char*,int ,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(RAsm *VAR_5, RAsmOp *VAR_6, const ut8 *VAR_7, int VAR_8) {
 csh VAR_9;
 cs_insn* VAR_10;
 int VAR_11, VAR_12, VAR_13 = -1;
 VAR_11 = VAR_5->big_endian? VAR_1: VAR_2;
 FUNC_5 (VAR_6, 0, sizeof (RAsmOp));
 VAR_6->size = 4;
 VAR_13 = FUNC_3 (VAR_0, VAR_11, &VAR_9);
 if (VAR_13) {
  goto fin;
 }
 FUNC_4 (VAR_9, VAR_3, VAR_4);
 VAR_12 = FUNC_1 (VAR_9, (ut8*)VAR_7, VAR_8, VAR_5->pc, 1, &VAR_10);
 if (VAR_12 < 1) {
  FUNC_6 (VAR_6, "invalid");
  VAR_6->size = 4;
  VAR_13 = -1;
  goto beach;
 }
 VAR_13 = 4;
 if (VAR_10->size < 1) {
  goto beach;
 }
 VAR_6->size = VAR_10->size;
 FUNC_6 (VAR_6, FUNC_7 ("%s%s%s",
  VAR_10->mnemonic, VAR_10->op_str[0]? " ": "",
  VAR_10->op_str));

 beach:
 FUNC_2 (VAR_10, VAR_12);
 FUNC_0 (&VAR_9);
 fin:
 return VAR_13;
}
