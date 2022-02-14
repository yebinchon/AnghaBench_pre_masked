
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_10__ {int size; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_12__ {int pc; scalar_t__ big_endian; scalar_t__* cpu; } ;
struct TYPE_11__ {int size; } ;
typedef TYPE_2__ RAsmOp ;
typedef TYPE_3__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,int const*,int,int ,int,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (char*,char,int ) ;
 char* FUNC_8 (char*,int ,char*,scalar_t__*) ;
 int FUNC_9 (scalar_t__*,char*) ;

__attribute__((used)) static int FUNC_10(RAsm *VAR_6, RAsmOp *VAR_7, const ut8 *VAR_8, int VAR_9) {
 cs_insn* VAR_10;
 int VAR_11 = -1, VAR_12 = -1;
 int VAR_13 = VAR_1;
 if (VAR_6->cpu && *VAR_6->cpu) {
  if (!FUNC_9 (VAR_6->cpu, "v9")) {
   VAR_13 |= VAR_2;
  }
 }
 if (VAR_7) {
  FUNC_5 (VAR_7, 0, sizeof (RAsmOp));
  VAR_7->size = 4;
 }
 if (VAR_5 != 0) {
  FUNC_0 (&VAR_5);
 }
 VAR_12 = FUNC_3 (VAR_0, VAR_13, &VAR_5);
 if (VAR_12) {
  goto fin;
 }
 FUNC_4 (VAR_5, VAR_3, VAR_4);
 if (!VAR_7) {
  return 0;
 }
 if (VAR_6->big_endian) {
  VAR_11 = FUNC_1 (VAR_5, VAR_8, VAR_9, VAR_6->pc, 1, &VAR_10);
 }
 if (VAR_11 < 1) {
  FUNC_6 (VAR_7, "invalid");
  VAR_7->size = 4;
  VAR_12 = -1;
  goto beach;
 } else {
  VAR_12 = 4;
 }
 if (VAR_10->size < 1) {
  goto beach;
 }
 VAR_7->size = VAR_10->size;
 char *VAR_14 = FUNC_8 ("%s%s%s",
  VAR_10->mnemonic, VAR_10->op_str[0]? " ": "",
  VAR_10->op_str);
 FUNC_7 (VAR_14, '%', 0);
 FUNC_6 (VAR_7, VAR_14);

 FUNC_2 (VAR_10, VAR_11);
 beach:

 fin:
 return VAR_12;
}
