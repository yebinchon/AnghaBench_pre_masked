
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbox {int* table; int* outputs; int inputs; } ;
struct optimised_sbox {int* output; int * input_lookup; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct optimised_sbox* VAR_0, const struct sbox* VAR_1) {
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {

  for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
   VAR_0[VAR_3].input_lookup[VAR_2] = FUNC_0(VAR_2, VAR_1[VAR_3].inputs);
  }

  for (VAR_2 = 0; VAR_2 < 64; ++VAR_2) {
   int VAR_4 = VAR_1[VAR_3].table[VAR_2];
   VAR_0[VAR_3].output[VAR_2] = 0;
   if (VAR_4 & 1) {
    VAR_0[VAR_3].output[VAR_2] |= 1 << VAR_1[VAR_3].outputs[0];
   }
   if (VAR_4 & 2) {
    VAR_0[VAR_3].output[VAR_2] |= 1 << VAR_1[VAR_3].outputs[1];
   }
  }
 }
}
