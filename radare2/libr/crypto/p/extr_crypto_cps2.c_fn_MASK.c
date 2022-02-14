
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int ut32 ;
struct optimised_sbox {size_t* output; int* input_lookup; } ;



__attribute__((used)) static ut8 FUNC_0(ut8 VAR_0, const struct optimised_sbox *VAR_1, ut32 VAR_2) {
 const struct optimised_sbox *VAR_3 = &VAR_1[0];
 const struct optimised_sbox *VAR_4 = &VAR_1[1];
 const struct optimised_sbox *VAR_5 = &VAR_1[2];
 const struct optimised_sbox *VAR_6 = &VAR_1[3];

 return
  VAR_3->output[VAR_3->input_lookup[VAR_0] ^ ((VAR_2 >> 0) & 0x3f)] |
  VAR_4->output[VAR_4->input_lookup[VAR_0] ^ ((VAR_2 >> 6) & 0x3f)] |
  VAR_5->output[VAR_5->input_lookup[VAR_0] ^ ((VAR_2 >> 12) & 0x3f)] |
  VAR_6->output[VAR_6->input_lookup[VAR_0] ^ ((VAR_2 >> 18) & 0x3f)];
}
