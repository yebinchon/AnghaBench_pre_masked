
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float*,float*,int) ;

__attribute__((used)) static inline int
FUNC_4(fz_context *VAR_3, fz_stream *VAR_4, uint8_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 float VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 float VAR_19, VAR_20, VAR_21;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = FUNC_1(VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_8 = FUNC_1(VAR_3, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = (VAR_6<<16) | (VAR_7<<8) | VAR_8;


 VAR_10 = (VAR_9>>14) & 0x3ff;
 VAR_17 = (VAR_10 == 0 ? 0 : FUNC_0(VAR_0/64*(VAR_10+.5f) - VAR_0*12));
 if (VAR_17 <= 0)
 {
  VAR_16 = VAR_17 = VAR_18 = 0;
 }
 else
 {

  if (FUNC_3(&VAR_11, &VAR_12, VAR_9 & 0x3fff) < 0) {
   VAR_11 = VAR_1; VAR_12 = VAR_2;
  }
  VAR_13 = 6*VAR_11 - 16*VAR_12 + 12;
  VAR_14 = 9*VAR_11;
  VAR_15 = 4*VAR_12;

  VAR_16 = VAR_14/VAR_15 * VAR_17;
  VAR_18 = (VAR_13-VAR_14-VAR_15)/VAR_15 * VAR_17;
 }


 VAR_19 = 2.690f*VAR_16 + -1.276f*VAR_17 + -0.414f*VAR_18;
 VAR_20 = -1.022f*VAR_16 + 1.978f*VAR_17 + 0.044f*VAR_18;
 VAR_21 = 0.061f*VAR_16 + -0.224f*VAR_17 + 1.163f*VAR_18;



 VAR_5[0] = (uint8_t)((VAR_19<=0) ? 0 : (VAR_19 >= 1) ? 255 : (int)(256*FUNC_2(VAR_19)));
 VAR_5[1] = (uint8_t)((VAR_20<=0) ? 0 : (VAR_20 >= 1) ? 255 : (int)(256*FUNC_2(VAR_20)));
 VAR_5[2] = (uint8_t)((VAR_21<=0) ? 0 : (VAR_21 >= 1) ? 255 : (int)(256*FUNC_2(VAR_21)));

 return 0;
}
