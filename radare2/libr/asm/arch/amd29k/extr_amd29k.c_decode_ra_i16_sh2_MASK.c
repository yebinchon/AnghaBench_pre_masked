
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int amd29k_instr_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(amd29k_instr_t* VAR_3, const ut8* VAR_4) {
 int VAR_5 = (VAR_4[1] << 10) + (VAR_4[3] << 2);
 if (VAR_5 & 0x20000) {
  VAR_5 = (int)(0xfffc0000 | VAR_5);
 }
 FUNC_2 (VAR_3, 0, VAR_4[2], VAR_2);
 if (FUNC_0 (VAR_4)) {
  FUNC_2 (VAR_3, 1, VAR_5, VAR_0);
 } else {
  FUNC_2 (VAR_3, 1, (ut32) VAR_5, VAR_1);
 }
 FUNC_1 (VAR_3, 2);
 FUNC_1 (VAR_3, 3);
 FUNC_1 (VAR_3, 4);
 FUNC_1 (VAR_3, 5);
}
