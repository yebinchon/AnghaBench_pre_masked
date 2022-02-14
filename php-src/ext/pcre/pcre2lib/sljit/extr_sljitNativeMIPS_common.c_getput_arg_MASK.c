
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {int cache_argw; size_t cache_arg; } ;
typedef int sljit_sw ;
typedef size_t sljit_s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 size_t VAR_2 ;
 int FUNC_4 (int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_5 (size_t) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (size_t) ;
 size_t VAR_10 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_11 ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (size_t) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int* VAR_14 ;
 size_t FUNC_13 (struct sljit_compiler*,size_t,int) ;
 size_t FUNC_14 (struct sljit_compiler*,int,size_t) ;

__attribute__((used)) static sljit_s32 FUNC_15(struct sljit_compiler *VAR_15, sljit_s32 VAR_16, sljit_s32 VAR_17, sljit_s32 VAR_18, sljit_sw VAR_19, sljit_s32 VAR_20, sljit_sw VAR_21)
{
 sljit_s32 VAR_22, VAR_23, VAR_24;

 FUNC_9(VAR_18 & VAR_10);
 if (!(VAR_20 & VAR_10)) {
  VAR_20 = 0;
  VAR_21 = 0;
 }

 if ((VAR_16 & VAR_4) <= VAR_2 && (VAR_16 & VAR_3)) {
  VAR_22 = VAR_17;
  VAR_24 = VAR_17;
 }
 else {
  VAR_22 = FUNC_2(VAR_12);
  VAR_24 = VAR_5;
 }
 VAR_23 = VAR_18 & VAR_7;

 if (FUNC_10(VAR_18 & VAR_6)) {
  VAR_19 &= 0x3;


  if (VAR_19 == VAR_15->cache_argw) {
   if (VAR_18 == VAR_15->cache_arg)
    return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_6(VAR_13) | FUNC_12(VAR_17), VAR_24);

   if ((VAR_10 | (VAR_18 & VAR_6)) == VAR_15->cache_arg) {
    if (VAR_18 == VAR_20 && VAR_19 == (VAR_21 & 0x3)) {
     VAR_15->cache_arg = VAR_18;
     VAR_15->cache_argw = VAR_19;
     FUNC_3(FUNC_14(VAR_15, VAR_1 | FUNC_6(VAR_23) | FUNC_11(VAR_13) | FUNC_0(VAR_13), FUNC_2(VAR_13)));
     return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_6(VAR_13) | FUNC_12(VAR_17), VAR_24);
    }
    FUNC_3(FUNC_14(VAR_15, VAR_1 | FUNC_6(VAR_23) | FUNC_11(VAR_13) | FUNC_1(VAR_22), VAR_22));
    return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_7(VAR_22) | FUNC_12(VAR_17), VAR_24);
   }
  }

  if (FUNC_10(VAR_19)) {
   VAR_15->cache_arg = VAR_10 | (VAR_18 & VAR_6);
   VAR_15->cache_argw = VAR_19;
   FUNC_3(FUNC_14(VAR_15, VAR_11 | FUNC_11(FUNC_5(VAR_18)) | FUNC_0(VAR_13) | FUNC_8(VAR_19), FUNC_2(VAR_13)));
  }

  if (VAR_18 == VAR_20 && VAR_19 == (VAR_21 & 0x3)) {
   VAR_15->cache_arg = VAR_18;
   VAR_15->cache_argw = VAR_19;
   FUNC_3(FUNC_14(VAR_15, VAR_1 | FUNC_6(VAR_23) | FUNC_11(!VAR_19 ? FUNC_5(VAR_18) : VAR_13) | FUNC_0(VAR_13), FUNC_2(VAR_13)));
   VAR_22 = FUNC_2(VAR_13);
  }
  else
   FUNC_3(FUNC_14(VAR_15, VAR_1 | FUNC_6(VAR_23) | FUNC_11(!VAR_19 ? FUNC_5(VAR_18) : VAR_13) | FUNC_1(VAR_22), VAR_22));
  return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_7(VAR_22) | FUNC_12(VAR_17), VAR_24);
 }

 if (VAR_15->cache_arg == VAR_18 && VAR_19 - VAR_15->cache_argw <= VAR_8 && VAR_19 - VAR_15->cache_argw >= VAR_9) {
  if (VAR_19 != VAR_15->cache_argw) {
   FUNC_3(FUNC_14(VAR_15, VAR_0 | FUNC_6(VAR_13) | FUNC_11(VAR_13) | FUNC_4(VAR_19 - VAR_15->cache_argw), FUNC_2(VAR_13)));
   VAR_15->cache_argw = VAR_19;
  }
  return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_6(VAR_13) | FUNC_12(VAR_17), VAR_24);
 }

 if (VAR_15->cache_arg == VAR_10 && VAR_19 - VAR_15->cache_argw <= VAR_8 && VAR_19 - VAR_15->cache_argw >= VAR_9) {
  if (VAR_19 != VAR_15->cache_argw)
   FUNC_3(FUNC_14(VAR_15, VAR_0 | FUNC_6(VAR_13) | FUNC_11(VAR_13) | FUNC_4(VAR_19 - VAR_15->cache_argw), FUNC_2(VAR_13)));
 }
 else {
  VAR_15->cache_arg = VAR_10;
  FUNC_3(FUNC_13(VAR_15, FUNC_2(VAR_13), VAR_19));
 }
 VAR_15->cache_argw = VAR_19;

 if (!VAR_23)
  return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_6(VAR_13) | FUNC_12(VAR_17), VAR_24);

 if (VAR_18 == VAR_20 && VAR_21 - VAR_19 <= VAR_8 && VAR_21 - VAR_19 >= VAR_9) {
  VAR_15->cache_arg = VAR_18;
  FUNC_3(FUNC_14(VAR_15, VAR_1 | FUNC_6(VAR_13) | FUNC_11(VAR_23) | FUNC_0(VAR_13), FUNC_2(VAR_13)));
  return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_6(VAR_13) | FUNC_12(VAR_17), VAR_24);
 }

 FUNC_3(FUNC_14(VAR_15, VAR_1 | FUNC_6(VAR_13) | FUNC_11(VAR_23) | FUNC_1(VAR_22), VAR_22));
 return FUNC_14(VAR_15, VAR_14[VAR_16 & VAR_4] | FUNC_7(VAR_22) | FUNC_12(VAR_17), VAR_24);
}
