
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aDia ;


 unsigned char VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2){
  unsigned short VAR_3[] = {
        0, 1797, 1848, 1859, 1891, 1928, 1940, 1995,
     2024, 2040, 2060, 2110, 2168, 2206, 2264, 2286,
     2344, 2383, 2472, 2488, 2516, 2596, 2668, 2732,
     2782, 2842, 2894, 2954, 2984, 3000, 3028, 3336,
     3456, 3696, 3712, 3728, 3744, 3766, 3832, 3896,
     3912, 3928, 3944, 3968, 4008, 4040, 4056, 4106,
     4138, 4170, 4202, 4234, 4266, 4296, 4312, 4344,
     4408, 4424, 4442, 4472, 4488, 4504, 6148, 6198,
     6264, 6280, 6360, 6429, 6505, 6529, 61448, 61468,
    61512, 61534, 61592, 61610, 61642, 61672, 61688, 61704,
    61726, 61784, 61800, 61816, 61836, 61880, 61896, 61914,
    61948, 61998, 62062, 62122, 62154, 62184, 62200, 62218,
    62252, 62302, 62364, 62410, 62442, 62478, 62536, 62554,
    62584, 62604, 62640, 62648, 62656, 62664, 62730, 62766,
    62830, 62890, 62924, 62974, 63032, 63050, 63082, 63118,
    63182, 63242, 63274, 63310, 63368, 63390,
  };

  unsigned char VAR_4[] = {
    '\0', 'a', 'c', 'e', 'i', 'n',
    'o', 'u', 'y', 'y', 'a', 'c',
    'd', 'e', 'e', 'g', 'h', 'i',
    'j', 'k', 'l', 'n', 'o', 'r',
    's', 't', 'u', 'u', 'w', 'y',
    'z', 'o', 'u', 'a', 'i', 'o',
    'u', 'u'|((unsigned char)0x80), 'a'|((unsigned char)0x80), 'g', 'k', 'o',
    'o'|((unsigned char)0x80), 'j', 'g', 'n', 'a'|((unsigned char)0x80), 'a',
    'e', 'i', 'o', 'r', 'u', 's',
    't', 'h', 'a', 'e', 'o'|((unsigned char)0x80), 'o',
    'o'|((unsigned char)0x80), 'y', '\0', '\0', '\0', '\0',
    '\0', '\0', '\0', '\0', 'a', 'b',
    'c'|((unsigned char)0x80), 'd', 'd', 'e'|((unsigned char)0x80), 'e', 'e'|((unsigned char)0x80),
    'f', 'g', 'h', 'h', 'i', 'i'|((unsigned char)0x80),
    'k', 'l', 'l'|((unsigned char)0x80), 'l', 'm', 'n',
    'o'|((unsigned char)0x80), 'p', 'r', 'r'|((unsigned char)0x80), 'r', 's',
    's'|((unsigned char)0x80), 't', 'u', 'u'|((unsigned char)0x80), 'v', 'w',
    'w', 'x', 'y', 'z', 'h', 't',
    'w', 'y', 'a', 'a'|((unsigned char)0x80), 'a'|((unsigned char)0x80), 'a'|((unsigned char)0x80),
    'e', 'e'|((unsigned char)0x80), 'e'|((unsigned char)0x80), 'i', 'o', 'o'|((unsigned char)0x80),
    'o'|((unsigned char)0x80), 'o'|((unsigned char)0x80), 'u', 'u'|((unsigned char)0x80), 'u'|((unsigned char)0x80), 'y',
  };

  unsigned int VAR_5 = (((unsigned int)VAR_1)<<3) | 0x00000007;
  int VAR_6 = 0;
  int VAR_7 = sizeof(VAR_3)/sizeof(VAR_3[0]) - 1;
  int VAR_8 = 0;
  while( VAR_7>=VAR_8 ){
    int VAR_9 = (VAR_7 + VAR_8) / 2;
    if( VAR_5 >= VAR_3[VAR_9] ){
      VAR_6 = VAR_9;
      VAR_8 = VAR_9+1;
    }else{
      VAR_7 = VAR_9-1;
    }
  }
  FUNC_0( VAR_5>=VAR_3[VAR_6] );
  if( VAR_2==0 && (VAR_4[VAR_6] & 0x80) ) return VAR_1;
  return (VAR_1 > (VAR_3[VAR_6]>>3) + (VAR_3[VAR_6]&0x07)) ? VAR_1 : ((int)VAR_4[VAR_6] & 0x7F);
}
