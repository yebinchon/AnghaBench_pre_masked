
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tilegx_bundle_bits ;
struct sljit_compiler {int dummy; } ;
struct jit_instr {int line; } ;
typedef int sljit_s32 ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct jit_instr*) ;
 struct jit_instr* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct sljit_compiler*,int ) ;
 int FUNC_6 (struct sljit_compiler*,int ) ;

__attribute__((used)) static sljit_s32 FUNC_7(struct sljit_compiler *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_1;
 struct jit_instr VAR_5 = VAR_0[0];
 struct jit_instr VAR_6 = VAR_0[1];
 struct jit_instr VAR_7 = VAR_0[2];
 tilegx_bundle_bits VAR_8 = 0;


 if (FUNC_1() == 0) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   VAR_8 |= FUNC_2(VAR_0 + VAR_3);



  }
  VAR_1 = 0;




  return FUNC_5(VAR_2, VAR_8);

 }






 VAR_1 = VAR_4 - 1;
 VAR_0[0] = VAR_5;
 VAR_0[1] = VAR_6;
 VAR_0[2] = VAR_7;
 if (FUNC_1() == 0) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   VAR_8 |= FUNC_2(VAR_0 + VAR_3);



  }
  if ((VAR_4 - 1) == 2) {
   VAR_0[0] = VAR_7;
   VAR_1 = 1;
  } else if ((VAR_4 - 1) == 1) {
   VAR_0[0] = VAR_6;
   VAR_1 = 1;
  } else
   FUNC_0();




  return FUNC_5(VAR_2, VAR_8);

 } else {



  VAR_1 = 1;
  VAR_0[0] = VAR_5;
  VAR_0[1] = VAR_6;
  VAR_0[2] = VAR_7;
  if (FUNC_1() == 0) {
   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    VAR_8 |= FUNC_2(VAR_0 + VAR_3);



   }
   VAR_0[0] = VAR_6;
   VAR_0[1] = VAR_7;
   VAR_1 = VAR_4 - 1;



   return FUNC_5(VAR_2, VAR_8);

  } else
   FUNC_0();
 }

 FUNC_0();
}
