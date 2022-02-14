
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_7__ {int colorsTotal; scalar_t__* open; void* interlace; } ;


 void* FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (int ,unsigned char,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned char,unsigned char) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int,unsigned char**) ;
 int FUNC_4 (TYPE_1__*,int ,int,int,unsigned char**,void*,int*) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (unsigned char**,int ,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

gdImagePtr FUNC_13(gdIOCtxPtr VAR_5)
{
 int VAR_6;





 int VAR_7 = (-1);
 unsigned char VAR_8[16];
 unsigned char VAR_9;
 unsigned char VAR_10[3][VAR_3];
 unsigned char VAR_11[3][VAR_3];
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;


 int VAR_19 = VAR_0;
 int VAR_20;
 gdImagePtr VAR_21 = 0;

 FUNC_10(VAR_10, 0, 3 * VAR_3);
 FUNC_10(VAR_11, 0, 3 * VAR_3);


 if (! FUNC_5(VAR_5,VAR_8,6)) {
  return 0;
 }
 if (FUNC_12((char *)VAR_8,"GIF",3) != 0) {
  return 0;
 }

 if (FUNC_9((char *)VAR_8+3, "87a", 3) == 0) {

 } else if (FUNC_9((char *)VAR_8+3, "89a", 3) == 0) {

 } else {
  return 0;
 }

 if (! FUNC_5(VAR_5,VAR_8,7)) {
  return 0;
 }

 VAR_6 = 2<<(VAR_8[4]&0x07);





 VAR_14 = VAR_12 = FUNC_2(VAR_8[0],VAR_8[1]);
 VAR_15 = VAR_13 = FUNC_2(VAR_8[2],VAR_8[3]);

 VAR_20 = FUNC_0(VAR_8[4], VAR_2);
 if (VAR_20) {
  if (FUNC_3(VAR_5, VAR_6, VAR_10)) {
   return 0;
  }
 }

 for (;;) {
  int VAR_22, VAR_23;
  int VAR_24, VAR_25;

  if (! FUNC_5(VAR_5,&VAR_9,1)) {
   return 0;
  }
  if (VAR_9 == ';') {
   goto terminated;
  }

  if (VAR_9 == '!') {
   if (! FUNC_5(VAR_5,&VAR_9,1)) {
    return 0;
   }
   FUNC_1(VAR_5, VAR_9, &VAR_7, &VAR_19);
   continue;
  }

  if (VAR_9 != ',') {
   continue;
  }



  if (! FUNC_5(VAR_5,VAR_8,9)) {
   return 0;
  }

  VAR_16 = ! FUNC_0(VAR_8[8], VAR_2);

  VAR_17 = 1<<((VAR_8[8]&0x07)+1);
  VAR_23 = FUNC_2(VAR_8[0], VAR_8[1]);
  VAR_22 = FUNC_2(VAR_8[2], VAR_8[3]);
  VAR_24 = FUNC_2(VAR_8[4], VAR_8[5]);
  VAR_25 = FUNC_2(VAR_8[6], VAR_8[7]);

  if (VAR_23 + VAR_24 > VAR_14 || VAR_22 + VAR_25 > VAR_15) {
   if (VAR_4) {
    FUNC_11("Frame is not confined to screen dimension.\n");
   }
   return 0;
  }

  if (!(VAR_21 = FUNC_7(VAR_24, VAR_25))) {
   return 0;
  }
  VAR_21->interlace = FUNC_0(VAR_8[8], VAR_1);
  if (!VAR_16) {
   if (FUNC_3(VAR_5, VAR_17, VAR_11)) {
    FUNC_8(VAR_21);
    return 0;
   }
   FUNC_4(VAR_21, VAR_5, VAR_24, VAR_25, VAR_11,
     FUNC_0(VAR_8[8], VAR_1), &VAR_19);
  } else {
   if (!VAR_20) {
    FUNC_8(VAR_21);
    return 0;
   }
   FUNC_4(VAR_21, VAR_5, VAR_24, VAR_25,
      VAR_10,
      FUNC_0(VAR_8[8], VAR_1), &VAR_19);
  }
  if (VAR_7 != (-1)) {
   FUNC_6(VAR_21, VAR_7);
  }
  goto terminated;
 }

terminated:

 if (!VAR_21) {
  return 0;
 }



 for (VAR_18=((VAR_21->colorsTotal-1)); (VAR_18>=0); VAR_18--) {
  if (VAR_21->open[VAR_18]) {
   VAR_21->colorsTotal--;
  } else {
   break;
  }
 }
 if (!VAR_21->colorsTotal) {
  FUNC_8(VAR_21);
  return 0;
 }
 return VAR_21;
}
