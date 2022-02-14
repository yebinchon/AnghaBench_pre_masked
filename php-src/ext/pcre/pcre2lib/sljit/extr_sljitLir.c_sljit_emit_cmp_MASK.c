
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_jump {int dummy; } ;
struct sljit_compiler {int skip_checks; } ;
typedef scalar_t__ sljit_sw ;
typedef int sljit_s32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct sljit_compiler*,int,int,scalar_t__,int,scalar_t__) ;
 struct sljit_jump* FUNC_5 (struct sljit_compiler*,int,int,scalar_t__) ;
 struct sljit_jump* FUNC_6 (struct sljit_compiler*,int) ;
 int FUNC_7 (struct sljit_compiler*,int,int ,int ,int,scalar_t__,int,scalar_t__) ;

struct sljit_jump* FUNC_8(struct sljit_compiler *VAR_10, sljit_s32 VAR_11,
 sljit_s32 VAR_12, sljit_sw VAR_13,
 sljit_s32 VAR_14, sljit_sw VAR_15)
{

 sljit_s32 VAR_16, VAR_17, VAR_18;
 sljit_sw VAR_19;

 FUNC_0();
 FUNC_1(FUNC_4(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15));

 VAR_18 = VAR_11 & 0xff;
 if (FUNC_3((VAR_12 & VAR_2) && !(VAR_14 & VAR_2))) {

  switch (VAR_18) {
  case 133:
   VAR_18 = 135;
   break;
  case 134:
   VAR_18 = 132;
   break;
  case 135:
   VAR_18 = 133;
   break;
  case 132:
   VAR_18 = 134;
   break;
  case 129:
   VAR_18 = 131;
   break;
  case 130:
   VAR_18 = 128;
   break;
  case 131:
   VAR_18 = 129;
   break;
  case 128:
   VAR_18 = 130;
   break;
  }

  VAR_11 = VAR_18 | (VAR_11 & (VAR_1 | VAR_5));
  VAR_17 = VAR_12;
  VAR_12 = VAR_14;
  VAR_14 = VAR_17;
  VAR_19 = VAR_13;
  VAR_13 = VAR_15;
  VAR_15 = VAR_19;
 }

 if (VAR_18 <= VAR_4)
  VAR_16 = VAR_6;
 else
  VAR_16 = VAR_18 << VAR_9;





 FUNC_2(FUNC_7(VAR_10, VAR_7 | VAR_16 | (VAR_11 & VAR_1),
  VAR_8, 0, VAR_12, VAR_13, VAR_14, VAR_15));




 return FUNC_6(VAR_10, VAR_18 | (VAR_11 & (VAR_5 | VAR_1)));
}
