
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_1(void *VAR_3, size_t VAR_4, size_t VAR_5)
{
  unsigned char *VAR_6 = (unsigned char *) VAR_3;
  size_t VAR_7,VAR_8;
  size_t VAR_9,VAR_10,VAR_11,VAR_12, VAR_13;




  VAR_9 = ((((size_t) 0x736f6d65 << 16) << 16) + 0x70736575) ^ VAR_5;
  VAR_10 = ((((size_t) 0x646f7261 << 16) << 16) + 0x6e646f6d) ^ ~VAR_5;
  VAR_11 = ((((size_t) 0x6c796765 << 16) << 16) + 0x6e657261) ^ VAR_5;
  VAR_12 = ((((size_t) 0x74656462 << 16) << 16) + 0x79746573) ^ ~VAR_5;
  for (VAR_7=0; VAR_7+sizeof(size_t) <= VAR_4; VAR_7 += sizeof(size_t), VAR_6 += sizeof(size_t)) {
    VAR_13 = VAR_6[0] | (VAR_6[1] << 8) | (VAR_6[2] << 16) | (VAR_6[3] << 24);
    VAR_13 |= (size_t) (VAR_6[4] | (VAR_6[5] << 8) | (VAR_6[6] << 16) | (VAR_6[7] << 24)) << 16 << 16;

    VAR_12 ^= VAR_13;
    for (VAR_8=0; VAR_8 < VAR_0; ++VAR_8)
      do { VAR_9 += VAR_10; VAR_10 = FUNC_0(VAR_10, 13); VAR_10 ^= VAR_9; VAR_9 = FUNC_0(VAR_9,VAR_2/2); VAR_11 += VAR_12; VAR_12 = FUNC_0(VAR_12, 16); VAR_12 ^= VAR_11; VAR_11 += VAR_10; VAR_10 = FUNC_0(VAR_10, 17); VAR_10 ^= VAR_11; VAR_11 = FUNC_0(VAR_11,VAR_2/2); VAR_9 += VAR_12; VAR_12 = FUNC_0(VAR_12, 21); VAR_12 ^= VAR_9; } while (0);
    VAR_9 ^= VAR_13;
  }
  VAR_13 = VAR_4 << (VAR_2-8);
  switch (VAR_4 - VAR_7) {
    case 7: VAR_13 |= ((size_t) VAR_6[6] << 24) << 24;
    case 6: VAR_13 |= ((size_t) VAR_6[5] << 20) << 20;
    case 5: VAR_13 |= ((size_t) VAR_6[4] << 16) << 16;
    case 4: VAR_13 |= (VAR_6[3] << 24);
    case 3: VAR_13 |= (VAR_6[2] << 16);
    case 2: VAR_13 |= (VAR_6[1] << 8);
    case 1: VAR_13 |= VAR_6[0];
    case 0: break;
  }
  VAR_12 ^= VAR_13;
  for (VAR_8=0; VAR_8 < VAR_0; ++VAR_8)
    do { VAR_9 += VAR_10; VAR_10 = FUNC_0(VAR_10, 13); VAR_10 ^= VAR_9; VAR_9 = FUNC_0(VAR_9,VAR_2/2); VAR_11 += VAR_12; VAR_12 = FUNC_0(VAR_12, 16); VAR_12 ^= VAR_11; VAR_11 += VAR_10; VAR_10 = FUNC_0(VAR_10, 17); VAR_10 ^= VAR_11; VAR_11 = FUNC_0(VAR_11,VAR_2/2); VAR_9 += VAR_12; VAR_12 = FUNC_0(VAR_12, 21); VAR_12 ^= VAR_9; } while (0);
  VAR_9 ^= VAR_13;
  VAR_11 ^= 0xff;
  for (VAR_8=0; VAR_8 < VAR_1; ++VAR_8)
    do { VAR_9 += VAR_10; VAR_10 = FUNC_0(VAR_10, 13); VAR_10 ^= VAR_9; VAR_9 = FUNC_0(VAR_9,VAR_2/2); VAR_11 += VAR_12; VAR_12 = FUNC_0(VAR_12, 16); VAR_12 ^= VAR_11; VAR_11 += VAR_10; VAR_10 = FUNC_0(VAR_10, 17); VAR_10 ^= VAR_11; VAR_11 = FUNC_0(VAR_11,VAR_2/2); VAR_9 += VAR_12; VAR_12 = FUNC_0(VAR_12, 21); VAR_12 ^= VAR_9; } while (0);



  return VAR_10^VAR_11^VAR_12;

}
