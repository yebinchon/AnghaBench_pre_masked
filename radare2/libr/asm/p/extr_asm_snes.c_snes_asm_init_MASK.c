
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snes_asm_flags {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_2 (void* VAR_1) {
 if (!VAR_0) {
  VAR_0 = FUNC_0 (sizeof (struct snes_asm_flags));
 }
 FUNC_1(VAR_0,0,sizeof (struct snes_asm_flags));
 return 0;
}
