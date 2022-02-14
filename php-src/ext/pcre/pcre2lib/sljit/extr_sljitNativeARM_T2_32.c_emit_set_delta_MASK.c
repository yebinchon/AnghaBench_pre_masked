
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_5(struct sljit_compiler *VAR_6, sljit_s32 VAR_7, sljit_s32 VAR_8, sljit_sw VAR_9)
{
 if (VAR_9 >= 0) {
  if (VAR_9 <= 0xfff)
   return FUNC_4(VAR_6, VAR_0 | FUNC_1(VAR_7) | FUNC_2(VAR_8) | FUNC_0(VAR_9));
  VAR_9 = FUNC_3(VAR_9);
  if (VAR_9 != VAR_2)
   return FUNC_4(VAR_6, VAR_1 | FUNC_1(VAR_7) | FUNC_2(VAR_8) | VAR_9);
 }
 else {
  VAR_9 = -VAR_9;
  if (VAR_9 <= 0xfff)
   return FUNC_4(VAR_6, VAR_4 | FUNC_1(VAR_7) | FUNC_2(VAR_8) | FUNC_0(VAR_9));
  VAR_9 = FUNC_3(VAR_9);
  if (VAR_9 != VAR_2)
   return FUNC_4(VAR_6, VAR_5 | FUNC_1(VAR_7) | FUNC_2(VAR_8) | VAR_9);
 }
 return VAR_3;
}
