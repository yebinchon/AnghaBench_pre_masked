
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int fz_context ;


 int VAR_0 ;
 float VAR_1 ;
 float FUNC_0 (int) ;
 int FUNC_1 (float) ;

__attribute__((used)) static inline void
FUNC_2(fz_context *VAR_2, uint32_t VAR_3, uint8_t *VAR_4)
{
 float VAR_5, VAR_6, VAR_7;
 float VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 float VAR_13, VAR_14, VAR_15;

 if (VAR_3>>31)
 {
  VAR_13 = VAR_14 = VAR_15 = 0;
 }
 else
 {
  int VAR_16 = (VAR_3>>16) & 0x7fff;
  VAR_14 = !VAR_16 ? 0 : FUNC_0(VAR_0/256*(VAR_16+.5f) - VAR_0*64);

  VAR_8 = (1.f/VAR_1) * ((VAR_3>>8 & 0xff) + .5f);
  VAR_9 = (1.f/VAR_1) * ((VAR_3 & 0xff) + .5f);
  VAR_10 = 6*VAR_8 - 16*VAR_9 + 12;
  VAR_11 = 9 * VAR_8;
  VAR_12 = 4 * VAR_9;


  VAR_13 = VAR_11/VAR_12 * VAR_14;
  VAR_15 = (VAR_10-VAR_11-VAR_12)/VAR_12 * VAR_14;
 }


 VAR_5 = 2.690f*VAR_13 + -1.276f*VAR_14 + -0.414f*VAR_15;
 VAR_6 = -1.022f*VAR_13 + 1.978f*VAR_14 + 0.044f*VAR_15;
 VAR_7 = 0.061f*VAR_13 + -0.224f*VAR_14 + 1.163f*VAR_15;



 VAR_4[0] = (uint8_t)((VAR_5<=0) ? 0 : (VAR_5 >= 1) ? 255 : (int)(256*FUNC_1(VAR_5)));
 VAR_4[1] = (uint8_t)((VAR_6<=0) ? 0 : (VAR_6 >= 1) ? 255 : (int)(256*FUNC_1(VAR_6)));
 VAR_4[2] = (uint8_t)((VAR_7<=0) ? 0 : (VAR_7 >= 1) ? 255 : (int)(256*FUNC_1(VAR_7)));
}
