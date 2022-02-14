
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {size_t cache_arg; int cache_argw; } ;
typedef int sljit_sw ;
typedef size_t sljit_s32 ;
typedef int sljit_ins ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 size_t VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_5 (size_t) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (size_t) ;
 size_t VAR_10 ;
 scalar_t__ FUNC_9 (size_t) ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int* VAR_14 ;
 size_t FUNC_10 (struct sljit_compiler*,size_t,int) ;
 size_t FUNC_11 (struct sljit_compiler*,int,size_t) ;

__attribute__((used)) static sljit_s32 FUNC_12(struct sljit_compiler *VAR_15, sljit_s32 VAR_16, sljit_s32 VAR_17, sljit_s32 VAR_18, sljit_sw VAR_19, sljit_s32 VAR_20, sljit_sw VAR_21)
{
 sljit_s32 VAR_22, VAR_23, VAR_24;
 sljit_ins VAR_25;

 FUNC_8(VAR_18 & VAR_10);
 if (!(VAR_20 & VAR_10)) {
  VAR_20 = 0;
  VAR_21 = 0;
 }

 VAR_22 = VAR_18 & VAR_7;
 if (FUNC_9(VAR_18 & VAR_6)) {
  VAR_19 &= 0x3;


  if (((VAR_10 | (VAR_18 & VAR_6)) == VAR_15->cache_arg) && (VAR_19 == VAR_15->cache_argw))
   VAR_23 = VAR_13;
  else {
   if ((VAR_18 & VAR_6) == (VAR_20 & VAR_6) && VAR_19 == (VAR_21 & 0x3)) {
    VAR_15->cache_arg = VAR_10 | (VAR_18 & VAR_6);
    VAR_15->cache_argw = VAR_19;
    VAR_23 = VAR_13;
   }
   else if ((VAR_16 & VAR_3) && ((VAR_16 & VAR_4) <= VAR_1) && VAR_17 != VAR_22 && VAR_17 != FUNC_5(VAR_18))
    VAR_23 = VAR_17;
   else
    VAR_23 = VAR_12;
   FUNC_2(FUNC_11(VAR_15, VAR_11 | FUNC_0(VAR_23) | FUNC_6(FUNC_5(VAR_18)) | VAR_2 | VAR_19, FUNC_1(VAR_23)));
  }
 }
 else {

  if ((VAR_15->cache_arg == VAR_10) && (VAR_19 - VAR_15->cache_argw) <= VAR_8 && (VAR_19 - VAR_15->cache_argw) >= VAR_9) {
   if (VAR_19 != VAR_15->cache_argw) {
    FUNC_2(FUNC_11(VAR_15, VAR_0 | FUNC_0(VAR_13) | FUNC_6(VAR_13) | FUNC_4(VAR_19 - VAR_15->cache_argw), FUNC_1(VAR_13)));
    VAR_15->cache_argw = VAR_19;
   }
   VAR_23 = VAR_13;
  } else {
   if ((VAR_21 - VAR_19) <= VAR_8 && (VAR_21 - VAR_19) >= VAR_9) {
    VAR_15->cache_arg = VAR_10;
    VAR_15->cache_argw = VAR_19;
    VAR_23 = VAR_13;
   }
   else if ((VAR_16 & VAR_3) && ((VAR_16 & VAR_4) <= VAR_1) && VAR_17 != VAR_22)
    VAR_23 = VAR_17;
   else
    VAR_23 = VAR_12;
   FUNC_2(FUNC_10(VAR_15, VAR_23, VAR_19));
  }
 }

 VAR_25 = ((VAR_16 & VAR_4) <= VAR_1 ? FUNC_0(VAR_17) : FUNC_3(VAR_17));
 VAR_24 = ((VAR_16 & VAR_4) <= VAR_1 && (VAR_16 & VAR_3)) ? FUNC_1(VAR_17) : VAR_5;
 if (!VAR_22)
  return FUNC_11(VAR_15, VAR_14[VAR_16 & VAR_4] | VAR_25 | FUNC_6(VAR_23) | FUNC_4(0), VAR_24);
 return FUNC_11(VAR_15, VAR_14[VAR_16 & VAR_4] | VAR_25 | FUNC_6(VAR_22) | FUNC_7(VAR_23), VAR_24);
}
