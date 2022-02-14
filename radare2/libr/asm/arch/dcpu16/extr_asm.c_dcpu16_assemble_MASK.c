
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut16 ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,int*,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int*,int*,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

int FUNC_6 (ut8* VAR_1, const char* VAR_2) {
 ut16 VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 char VAR_7[256] = {0}, *VAR_8;
 int VAR_9 = 0;

 FUNC_0 (VAR_7, VAR_2);

 if (!(*VAR_7)) return 0;
 if (FUNC_4 (VAR_7)<4) return 0;
 VAR_8 = VAR_7 + 3;



 if (!FUNC_5 ("SET", VAR_7, 3)) VAR_5 = 0x1;
 else if (!FUNC_5 ("ADD", VAR_7, 3)) VAR_5 = 0x2;
 else if (!FUNC_5 ("SUB", VAR_7, 3)) VAR_5 = 0x3;
 else if (!FUNC_5 ("MUL", VAR_7, 3)) VAR_5 = 0x4;
 else if (!FUNC_5 ("DIV", VAR_7, 3)) VAR_5 = 0x5;
 else if (!FUNC_5 ("MOD", VAR_7, 3)) VAR_5 = 0x6;
 else if (!FUNC_5 ("SHL", VAR_7, 3)) VAR_5 = 0x7;
 else if (!FUNC_5 ("SHR", VAR_7, 3)) VAR_5 = 0x8;
 else if (!FUNC_5 ("AND", VAR_7, 3)) VAR_5 = 0x9;
 else if (!FUNC_5 ("BOR", VAR_7, 3)) VAR_5 = 0xA;
 else if (!FUNC_5 ("XOR", VAR_7, 3)) VAR_5 = 0xB;
 else if (!FUNC_5 ("IFE", VAR_7, 3)) VAR_5 = 0xC;
 else if (!FUNC_5 ("IFN", VAR_7, 3)) VAR_5 = 0xD;
 else if (!FUNC_5 ("IFG", VAR_7, 3)) VAR_5 = 0xE;
 else if (!FUNC_5 ("IFB", VAR_7, 3)) VAR_5 = 0xF;


 if (VAR_5 == 0) {
  if (!FUNC_5 ("JSR", VAR_7, 3)) {
   VAR_6 = 0x1;
  } else {
   FUNC_2 (VAR_0, "Unknown instruction\n");
   return -1;
  }
 }


 if (VAR_5 != 0) {
  ut8 VAR_10 = 0, VAR_11 = 0;


  int VAR_12 = 0;
  while (VAR_12 < 256
                        && VAR_8[VAR_12] != ','
   && VAR_8[VAR_12] != '\n'
   && VAR_8[VAR_12] != 0)
   VAR_12++;

  if (VAR_8[VAR_12] == ',') {
   ut16 VAR_13;
   int VAR_14 = 0;
   int VAR_15 = 0;
   char *VAR_16, *VAR_17;

   VAR_8[VAR_12] = 0;
   VAR_16 = VAR_8;
   VAR_17 = VAR_8 + VAR_12 + 1;





   VAR_10 = FUNC_1 (VAR_16, &VAR_14, &VAR_3);



   VAR_11 = FUNC_1(VAR_17, &VAR_15, &VAR_4);



   VAR_13 = ((VAR_11 & 0x3F) << 10) | ((VAR_10 & 0x3F) << 4) | (VAR_5 & 0xF);
   VAR_1[0] = (VAR_13>>8) & 0xff;
   VAR_1[1] = VAR_13 & 0xff;
   if (VAR_14 == 1) {
    VAR_1[2] = (VAR_3>>8) & 0xff;
    VAR_1[3] = VAR_3 & 0xff;
    VAR_9 = 4;
   } else VAR_9 = 2;
   if (VAR_15 == 1) {
    VAR_1[VAR_9] = (VAR_4>>8) & 0xff;
    VAR_1[VAR_9+1] = VAR_4 & 0xff;
    VAR_9 += 2;
   }

  } else {
   FUNC_2 (VAR_0, "Missing comma\n");
   return -1;
  }
 }


 if (VAR_6 == 0x1) {
  int VAR_18 = 0;
  ut16 VAR_19, VAR_20 = 0;
  ut8 VAR_21 = FUNC_1 (VAR_8, &VAR_18, &VAR_20);

  VAR_19 = ((VAR_21 & 0x3F) << 10) | ((VAR_6 & 0x3F) << 4) | (VAR_5 & 0xF);
  VAR_1[0] = (VAR_19>>8) & 0xff;
  VAR_1[1] = VAR_19 & 0xff;
  if (VAR_18 == 1) {
   VAR_1[2] = (VAR_20>>8) & 0xff;
   VAR_1[3] = VAR_20 & 0xff;
   VAR_9 = 4;
  } else VAR_9 = 2;

 }
 return VAR_9;
}
