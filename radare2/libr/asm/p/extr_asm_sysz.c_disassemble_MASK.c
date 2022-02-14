
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_9__ {scalar_t__ size; scalar_t__* op_str; int mnemonic; } ;
typedef TYPE_1__ cs_insn ;
struct TYPE_11__ {int pc; } ;
struct TYPE_10__ {scalar_t__ size; } ;
typedef TYPE_2__ RAsmOp ;
typedef TYPE_3__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,int const*,int,int ,int,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 char* FUNC_7 (char*,int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(RAsm *VAR_5, RAsmOp *VAR_6, const ut8 *VAR_7, int VAR_8) {
 static int VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12;
 ut64 VAR_13 = VAR_5->pc;
 cs_insn* VAR_14 = ((void*)0);
 VAR_10 = VAR_1;
 if (VAR_4 && VAR_10 != VAR_9) {
  FUNC_0 (&VAR_4);
  VAR_4 = 0;
 }
 VAR_6->size = 0;
 VAR_9 = VAR_10;
 if (VAR_4 == 0) {
  VAR_12 = FUNC_3 (VAR_0, VAR_10, &VAR_4);
  if (VAR_12) {
   return 0;
  }
  FUNC_4 (VAR_4, VAR_2, VAR_3);
 }
 VAR_11 = FUNC_1 (VAR_4, (const ut8*)VAR_7, VAR_8, VAR_13, 1, &VAR_14);
 if (VAR_11>0) {
  if (VAR_14->size>0) {
   VAR_6->size = VAR_14->size;
   char *VAR_15 = FUNC_7 ("%s%s%s",
     VAR_14->mnemonic, VAR_14->op_str[0]?" ": "",
     VAR_14->op_str);
   char *VAR_16 = FUNC_9 (VAR_15, "ptr ");
   if (VAR_16) {
    FUNC_5 (VAR_16, VAR_16 + 4, FUNC_8 (VAR_16 + 4) + 1);
   }
   FUNC_6 (VAR_6, VAR_15);
  }
  FUNC_2 (VAR_14, VAR_11);
 }
 return VAR_6->size;
}
