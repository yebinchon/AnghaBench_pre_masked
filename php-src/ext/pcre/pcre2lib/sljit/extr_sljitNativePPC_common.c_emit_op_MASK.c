
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int dummy; } ;
typedef int sljit_sw ;
typedef scalar_t__ sljit_s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_3 (struct sljit_compiler*,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sljit_compiler*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sljit_compiler*,scalar_t__,int ) ;

__attribute__((used)) static sljit_s32 FUNC_6(struct sljit_compiler *VAR_18, sljit_s32 VAR_19, sljit_s32 VAR_20,
 sljit_s32 VAR_21, sljit_sw VAR_22,
 sljit_s32 VAR_23, sljit_sw VAR_24,
 sljit_s32 VAR_25, sljit_sw VAR_26)
{



 sljit_s32 VAR_27 = VAR_17;
 sljit_s32 VAR_28;
 sljit_s32 VAR_29;
 sljit_s32 VAR_30 = VAR_17;
 sljit_s32 VAR_31 = VAR_20 & (VAR_0 | VAR_1 | VAR_2 | VAR_3 | VAR_4 | VAR_6 | VAR_5);


 if (FUNC_2(VAR_21)) {
  VAR_27 = VAR_21;
  VAR_31 |= VAR_10;

  if (VAR_19 >= VAR_13 && VAR_19 <= VAR_14)
   VAR_30 = VAR_27;
 }


 if (FUNC_1(VAR_23)) {
  VAR_28 = VAR_23;
  VAR_31 |= VAR_8;
 }
 else if (VAR_23 & VAR_11) {
  FUNC_0(FUNC_5(VAR_18, VAR_16, VAR_24));
  VAR_28 = VAR_16;
 }
 else {
  FUNC_0(FUNC_3(VAR_18, VAR_20 | VAR_7, VAR_16, VAR_23, VAR_24, VAR_16));
  VAR_28 = VAR_16;
 }


 if (FUNC_1(VAR_25)) {
  VAR_29 = VAR_25;
  VAR_31 |= VAR_9;

  if (!(VAR_31 & VAR_10) && VAR_19 >= VAR_13 && VAR_19 <= VAR_14)
   VAR_27 = VAR_29;
 }
 else if (VAR_25 & VAR_11) {
  FUNC_0(FUNC_5(VAR_18, VAR_30, VAR_26));
  VAR_29 = VAR_30;
 }
 else {
  FUNC_0(FUNC_3(VAR_18, VAR_20 | VAR_7, VAR_30, VAR_25, VAR_26, VAR_17));
  VAR_29 = VAR_30;
 }

 FUNC_0(FUNC_4(VAR_18, VAR_19, VAR_31, VAR_27, VAR_28, VAR_29));

 if (!(VAR_21 & VAR_12))
  return VAR_15;

 return FUNC_3(VAR_18, VAR_20, VAR_27, VAR_21, VAR_22, VAR_16);
}
