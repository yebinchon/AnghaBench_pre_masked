
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_data {int asm_rep; int expected_rel; int data; int expected_branch_str; int expected_op_str; int expected_length; } ;
struct intel_pt_insn {int rel; scalar_t__ branch; scalar_t__ op; } ;
struct insn {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct insn*) ;
 int FUNC_3 (struct insn*) ;
 int FUNC_4 (struct insn*,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int,struct intel_pt_insn*) ;
 int FUNC_6 (char*,int ,...) ;

__attribute__((used)) static int FUNC_7(struct test_data *VAR_1, int VAR_2)
{
 struct intel_pt_insn VAR_3;
 struct insn VAR_4;
 int VAR_5, VAR_6;

 FUNC_4(&VAR_4, VAR_1->data, VAR_0, VAR_2);
 FUNC_3(&VAR_4);

 if (!FUNC_2(&VAR_4)) {
  FUNC_6("Failed to decode: %s\n", VAR_1->asm_rep);
  return -1;
 }

 if (VAR_4.length != VAR_1->expected_length) {
  FUNC_6("Failed to decode length (%d vs expected %d): %s\n",
    VAR_4.length, VAR_1->expected_length, VAR_1->asm_rep);
  return -1;
 }

 VAR_5 = FUNC_1(VAR_1->expected_op_str);
 VAR_6 = FUNC_0(VAR_1->expected_branch_str);

 if (FUNC_5(VAR_1->data, VAR_0, VAR_2, &VAR_3)) {
  FUNC_6("Intel PT failed to decode: %s\n", VAR_1->asm_rep);
  return -1;
 }

 if ((int)VAR_3.op != VAR_5) {
  FUNC_6("Failed to decode 'op' value (%d vs expected %d): %s\n",
    VAR_3.op, VAR_5, VAR_1->asm_rep);
  return -1;
 }

 if ((int)VAR_3.branch != VAR_6) {
  FUNC_6("Failed to decode 'branch' value (%d vs expected %d): %s\n",
    VAR_3.branch, VAR_6, VAR_1->asm_rep);
  return -1;
 }

 if (VAR_3.rel != VAR_1->expected_rel) {
  FUNC_6("Failed to decode 'rel' value (%#x vs expected %#x): %s\n",
    VAR_3.rel, VAR_1->expected_rel, VAR_1->asm_rep);
  return -1;
 }

 FUNC_6("Decoded ok: %s\n", VAR_1->asm_rep);

 return 0;
}
