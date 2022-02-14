
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int amd29k_instr_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(amd29k_instr_t* VAR_2, const ut8* VAR_3) {
 int VAR_4 = (VAR_3[1] << 10) + (VAR_3[3] << 2);
 if (VAR_4 & 0x20000) {
  VAR_4 = (int)(0xfffc0000 | VAR_4);
 }
 FUNC_2 (VAR_2, 0, VAR_4, FUNC_0 (VAR_3) ? VAR_1 : VAR_0);
 FUNC_1 (VAR_2, 1);
 FUNC_1 (VAR_2, 2);
 FUNC_1 (VAR_2, 3);
 FUNC_1 (VAR_2, 4);
 FUNC_1 (VAR_2, 5);
}
