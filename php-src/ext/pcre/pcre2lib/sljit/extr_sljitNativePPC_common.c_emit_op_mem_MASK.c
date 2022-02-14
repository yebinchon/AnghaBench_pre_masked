
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_sw ;
typedef size_t sljit_s32 ;
typedef int sljit_ins ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int) ;
 size_t VAR_1 ;
 int FUNC_5 (int,size_t,size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_6 (size_t) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_7 (size_t,size_t,int,int,int) ;
 int VAR_6 ;
 int FUNC_8 (size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 size_t VAR_9 ;
 scalar_t__ FUNC_10 (size_t) ;
 int* VAR_10 ;
 size_t FUNC_11 (struct sljit_compiler*,size_t,int) ;
 size_t FUNC_12 (struct sljit_compiler*,int) ;

__attribute__((used)) static sljit_s32 FUNC_13(struct sljit_compiler *VAR_11, sljit_s32 VAR_12, sljit_s32 VAR_13,
 sljit_s32 VAR_14, sljit_sw VAR_15, sljit_s32 VAR_16)
{
 sljit_ins VAR_17;
 sljit_s32 VAR_18;
 sljit_sw VAR_19;


 FUNC_9(FUNC_0(0) == 0);
 FUNC_9(VAR_14 & VAR_9);

 if (FUNC_10(VAR_14 & VAR_4)) {
  VAR_15 &= 0x3;
  VAR_18 = FUNC_6(VAR_14);

  if (VAR_15 != 0) {



   FUNC_3(FUNC_12(VAR_11, FUNC_7(VAR_16, FUNC_6(VAR_14), VAR_15, 63 - VAR_15, 1)));

   VAR_18 = VAR_16;
  }

  VAR_17 = VAR_10[(VAR_12 | VAR_1) & VAR_3];





  return FUNC_12(VAR_11, FUNC_5(VAR_17, VAR_12, VAR_13) | FUNC_0(VAR_14 & VAR_5) | FUNC_1(VAR_18));
 }

 VAR_17 = VAR_10[VAR_12 & VAR_3];
 VAR_14 &= VAR_5;
 if (VAR_15 <= VAR_7 && VAR_15 >= VAR_8)
  return FUNC_12(VAR_11, FUNC_5(VAR_17, VAR_12, VAR_13) | FUNC_0(VAR_14) | FUNC_4(VAR_15));





  VAR_19 = (sljit_s32)(VAR_15 + ((VAR_15 & 0x8000) << 1)) & ~0xffff;




  FUNC_9(VAR_19);


  FUNC_3(FUNC_12(VAR_11, VAR_0 | FUNC_2(VAR_16) | FUNC_0(VAR_14) | FUNC_4(VAR_19 >> 16)));
  return FUNC_12(VAR_11, FUNC_5(VAR_17, VAR_12, VAR_13) | FUNC_0(VAR_16) | FUNC_4(VAR_15));
}
