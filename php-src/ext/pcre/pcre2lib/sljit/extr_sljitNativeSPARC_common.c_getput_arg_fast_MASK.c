
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_sw ;
typedef int sljit_s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int) ;
 int* VAR_10 ;
 int FUNC_10 (struct sljit_compiler*,int,int ) ;

__attribute__((used)) static sljit_s32 FUNC_11(struct sljit_compiler *VAR_11, sljit_s32 VAR_12, sljit_s32 VAR_13, sljit_s32 VAR_14, sljit_sw VAR_15)
{
 FUNC_8(VAR_14 & VAR_9);

 if ((!(VAR_14 & VAR_5) && VAR_15 <= VAR_7 && VAR_15 >= VAR_8)
   || ((VAR_14 & VAR_5) && (VAR_15 & 0x3) == 0)) {

  if (FUNC_9(VAR_12 & VAR_0))
   return 1;
  FUNC_2(FUNC_10(VAR_11, VAR_10[VAR_12 & VAR_3]
   | ((VAR_12 & VAR_3) <= VAR_1 ? FUNC_0(VAR_13) : FUNC_3(VAR_13))
   | FUNC_6(VAR_14 & VAR_6) | ((VAR_14 & VAR_5) ? FUNC_7(FUNC_5(VAR_14)) : FUNC_4(VAR_15)),
   ((VAR_12 & VAR_3) <= VAR_1 && (VAR_12 & VAR_2)) ? FUNC_1(VAR_13) : VAR_4));
  return -1;
 }
 return 0;
}
