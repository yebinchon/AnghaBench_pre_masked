
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t,int) ;
 size_t FUNC_1 (void*,size_t,size_t) ;

size_t FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2)
{



  unsigned char *VAR_3 = (unsigned char *) VAR_0;

  if (VAR_1 == 4) {
    unsigned int VAR_4 = VAR_3[0] | (VAR_3[1] << 8) | (VAR_3[2] << 16) | (VAR_3[3] << 24);
    VAR_4 ^= VAR_2;
    VAR_4 = (VAR_4 ^ 61) ^ (VAR_4 >> 16);
    VAR_4 = VAR_4 + (VAR_4 << 3);
    VAR_4 = VAR_4 ^ (VAR_4 >> 4);
    VAR_4 = VAR_4 * 0x27d4eb2d;
    VAR_4 ^= VAR_2;
    VAR_4 = VAR_4 ^ (VAR_4 >> 15);
    return (((size_t) VAR_4 << 16 << 16) | VAR_4) ^ VAR_2;
  } else if (VAR_1 == 8 && sizeof(size_t) == 8) {
    size_t VAR_5 = VAR_3[0] | (VAR_3[1] << 8) | (VAR_3[2] << 16) | (VAR_3[3] << 24);
    VAR_5 |= (size_t) (VAR_3[4] | (VAR_3[5] << 8) | (VAR_3[6] << 16) | (VAR_3[7] << 24)) << 16 << 16;
    VAR_5 ^= VAR_2;
    VAR_5 = (~VAR_5) + (VAR_5 << 21);
    VAR_5 ^= FUNC_0(VAR_5,24);
    VAR_5 *= 265;
    VAR_5 ^= FUNC_0(VAR_5,14);
    VAR_5 ^= VAR_2;
    VAR_5 *= 21;
    VAR_5 ^= FUNC_0(VAR_5,28);
    VAR_5 += (VAR_5 << 31);
    VAR_5 = (~VAR_5) + (VAR_5 << 18);
    return VAR_5;
  } else {
    return FUNC_1(VAR_0,VAR_1,VAR_2);
  }

}
