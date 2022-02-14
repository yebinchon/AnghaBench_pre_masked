
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct group_data {int minLen; int maxLen; int* base; int* limit; int* permute; } ;
struct TYPE_4__ {int* dbuf; int dbufSize; int* selectors; int headerCRC; int inbufBitCount; scalar_t__ inbufPos; scalar_t__ inbufCount; int inbufBits; int* inbuf; int writeCurrent; int writePos; int writeRunCountdown; int writeCount; struct group_data* groups; int jmpbuf; } ;
typedef TYPE_1__ bunzip_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(bunzip_data *VAR_11)
{
 struct group_data *VAR_12;
 int VAR_13, VAR_14, VAR_15, *VAR_16, *VAR_17, VAR_18,
  VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26[256];
 int VAR_27;
 uint8_t VAR_28, VAR_29[256], VAR_30[256], *VAR_31;
 uint32_t *VAR_32;
 unsigned VAR_33;

 VAR_32 = VAR_11->dbuf;
 VAR_14 = VAR_11->dbufSize;
 VAR_31 = VAR_11->selectors;
 VAR_19 = FUNC_1(VAR_11, 24);
 VAR_20 = FUNC_1(VAR_11, 24);
 VAR_11->headerCRC = FUNC_1(VAR_11, 32);
 if ((VAR_19 == 0x177245) && (VAR_20 == 0x385090)) return VAR_6;
 if ((VAR_19 != 0x314159) || (VAR_20 != 0x265359)) return VAR_7;




 if (FUNC_1(VAR_11, 1)) return VAR_8;
 VAR_33 = FUNC_1(VAR_11, 24);
 if ((int)VAR_33 > VAR_14) return VAR_5;






 VAR_24 = 0;
 VAR_19 = 0;
 VAR_21 = FUNC_1(VAR_11, 16);
 do {
  if (VAR_21 & (1 << 15)) {
   unsigned VAR_34 = FUNC_1(VAR_11, 16);
   do {
    if (VAR_34 & (1 << 15))
     VAR_29[VAR_24++] = VAR_19;
    VAR_34 <<= 1;
    VAR_19++;
   } while (VAR_19 & 15);
   VAR_19 -= 16;
  }
  VAR_21 <<= 1;
  VAR_19 += 16;
 } while (VAR_19 < 256);


 VAR_15 = FUNC_1(VAR_11, 3);
 if (VAR_15 < 2 || VAR_15 > VAR_2)
  return VAR_5;





 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++)
  VAR_30[VAR_19] = VAR_19;
 VAR_25 = FUNC_1(VAR_11, 15);
 if (!VAR_25)
  return VAR_5;
 for (VAR_19 = 0; VAR_19 < VAR_25; VAR_19++) {
  uint8_t VAR_35;

  int VAR_36 = 0;
  while (FUNC_1(VAR_11, 1)) {
   if (VAR_36 >= VAR_15) return VAR_5;
   VAR_36++;
  }

  VAR_35 = VAR_30[VAR_36];
  while (--VAR_36 >= 0)
   VAR_30[VAR_36 + 1] = VAR_30[VAR_36];
  VAR_30[0] = VAR_31[VAR_19] = VAR_35;
 }



 VAR_23 = VAR_24 + 2;
 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  uint8_t VAR_37[VAR_4];

  unsigned VAR_38[VAR_3+1];
  int VAR_39, VAR_40, VAR_41, VAR_42;







  VAR_42 = FUNC_1(VAR_11, 5) - 1;
  for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++) {
   for (;;) {
    int VAR_43;
    if ((unsigned)VAR_42 > (VAR_3-1))
     return VAR_5;




    VAR_43 = FUNC_1(VAR_11, 2);
    if (VAR_43 < 2) {
     VAR_11->inbufBitCount++;
     break;
    }


    VAR_42 += (((VAR_43+1) & 2) - 1);
   }


   VAR_37[VAR_19] = VAR_42 + 1;
  }


  VAR_39 = VAR_40 = VAR_37[0];
  for (VAR_19 = 1; VAR_19 < VAR_23; VAR_19++) {
   if (VAR_37[VAR_19] > VAR_40) VAR_40 = VAR_37[VAR_19];
   else if (VAR_37[VAR_19] < VAR_39) VAR_39 = VAR_37[VAR_19];
  }
  VAR_12 = VAR_11->groups + VAR_20;
  VAR_12->minLen = VAR_39;
  VAR_12->maxLen = VAR_40;




  VAR_16 = VAR_12->base - 1;
  VAR_17 = VAR_12->limit - 1;


  VAR_41 = 0;
  for (VAR_19 = VAR_39; VAR_19 <= VAR_40; VAR_19++) {
   int VAR_44;
   VAR_38[VAR_19] = VAR_17[VAR_19] = 0;
   for (VAR_44 = 0; VAR_44 < VAR_23; VAR_44++)
    if (VAR_37[VAR_44] == VAR_19)
     VAR_12->permute[VAR_41++] = VAR_44;
  }




  for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++) VAR_38[VAR_37[VAR_19]]++;





  VAR_41 = VAR_21 = 0;
  for (VAR_19 = VAR_39; VAR_19 < VAR_40;) {
   unsigned VAR_45 = VAR_38[VAR_19];

   VAR_41 += VAR_45;







   VAR_17[VAR_19] = (VAR_41 << (VAR_40 - VAR_19)) - 1;
   VAR_41 <<= 1;
   VAR_21 += VAR_45;
   VAR_16[++VAR_19] = VAR_41 - VAR_21;
  }
  VAR_17[VAR_40] = VAR_41 + VAR_38[VAR_40] - 1;
  VAR_17[VAR_40+1] = VAR_1;
  VAR_16[VAR_39] = 0;
 }







 for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
  VAR_26[VAR_19] = 0;
  VAR_30[VAR_19] = (uint8_t)VAR_19;
 }



 VAR_22 = VAR_13 = VAR_18 = 0;
 for (;;) {
  int VAR_46;


  VAR_23 = VAR_0 - 1;
  if (VAR_18 >= VAR_25) return VAR_5;
  VAR_12 = VAR_11->groups + VAR_31[VAR_18++];
  VAR_16 = VAR_12->base - 1;
  VAR_17 = VAR_12->limit - 1;

 continue_this_group:
  if (1) {



   int VAR_47;
   while ((VAR_47 = VAR_11->inbufBitCount - VAR_12->maxLen) < 0) {

    if (VAR_11->inbufPos == VAR_11->inbufCount) {
     VAR_46 = FUNC_1(VAR_11, VAR_12->maxLen);
     goto got_huff_bits;
    }
    VAR_11->inbufBits = (VAR_11->inbufBits << 8) | VAR_11->inbuf[VAR_11->inbufPos++];
    VAR_11->inbufBitCount += 8;
   };
   VAR_11->inbufBitCount = VAR_47;
   VAR_46 = (VAR_11->inbufBits >> VAR_47) & ((1 << VAR_12->maxLen) - 1);
 got_huff_bits: ;
  } else {
   VAR_46 = FUNC_1(VAR_11, VAR_12->maxLen);
  }

  VAR_19 = VAR_12->minLen;
  while (VAR_46 > VAR_17[VAR_19]) ++VAR_19;
  VAR_20 = VAR_12->maxLen - VAR_19;
  if (VAR_20 < 0)
   return VAR_5;
  VAR_11->inbufBitCount += VAR_20;


  VAR_46 = (VAR_46 >> VAR_20) - VAR_16[VAR_19];
  if ((unsigned)VAR_46 >= VAR_4)
   return VAR_5;
  VAR_46 = VAR_12->permute[VAR_46];





  if ((unsigned)VAR_46 <= VAR_10) {


   if (VAR_22 == 0) {
    VAR_22 = 1;
    VAR_27 = 0;
   }
   VAR_27 += (VAR_22 << VAR_46);
   if (VAR_22 < VAR_14) VAR_22 <<= 1;
   goto end_of_huffman_loop;
  }





  if (VAR_22 != 0) {
   uint8_t VAR_48;
   if (VAR_13 + VAR_27 > VAR_14) {
    FUNC_0("dbufCount:%d+runCnt:%d %d > dbufSize:%d RETVAL_DATA_ERROR",
      VAR_13, VAR_27, VAR_13 + VAR_27, VAR_14);
    return VAR_5;
   }
   VAR_48 = VAR_29[VAR_30[0]];
   VAR_26[VAR_48] += VAR_27;
   while (--VAR_27 >= 0) VAR_32[VAR_13++] = (uint32_t)VAR_48;
   VAR_22 = 0;
  }


  if (VAR_46 > VAR_24) break;
  if (VAR_13 >= VAR_14) return VAR_5;
  VAR_19 = VAR_46 - 1;
  VAR_28 = VAR_30[VAR_19];





  do {
   VAR_30[VAR_19] = VAR_30[VAR_19-1];
  } while (--VAR_19);
  VAR_30[0] = VAR_28;
  VAR_28 = VAR_29[VAR_28];


  VAR_26[VAR_28]++;
  VAR_32[VAR_13++] = (uint32_t)VAR_28;



 end_of_huffman_loop:
  if (--VAR_23 >= 0) goto continue_this_group;
 }
 VAR_20 = 0;
 for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
  int VAR_49 = VAR_20 + VAR_26[VAR_19];
  VAR_26[VAR_19] = VAR_20;
  VAR_20 = VAR_49;
 }


 for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
  uint8_t VAR_50 = (uint8_t)VAR_32[VAR_19];
  int VAR_51 = VAR_26[VAR_50];
  VAR_32[VAR_51] |= (VAR_19 << 8);
  VAR_26[VAR_50] = VAR_51 + 1;
 }




 if (VAR_13) {
  uint32_t VAR_52;
  if ((int)VAR_33 >= VAR_13) return VAR_5;
  VAR_52 = VAR_32[VAR_33];
  VAR_11->writeCurrent = (uint8_t)VAR_52;
  VAR_11->writePos = (VAR_52 >> 8);
  VAR_11->writeRunCountdown = 5;
 }
 VAR_11->writeCount = VAR_13;

 return VAR_9;
}
