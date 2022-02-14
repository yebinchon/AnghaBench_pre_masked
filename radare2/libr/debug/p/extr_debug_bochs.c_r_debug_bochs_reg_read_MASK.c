
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
typedef int ut64 ;
struct TYPE_3__ {scalar_t__* data; } ;
typedef int RDebug ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,...) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 char* FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(RDebug *VAR_5, int VAR_6, ut8 *VAR_7, int VAR_8) {
 char VAR_9[19];
 char VAR_10[4];
 char VAR_11[19];
 char VAR_12[19];
 int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 ut64 VAR_16 = 0, VAR_17 = 0;
 if (!FUNC_2 (VAR_5)) {
  return 0;
 }


 if (VAR_1 == 1) {
  FUNC_0 (VAR_2, "regs", 1);




  VAR_14 = 0x78;
  VAR_15 = FUNC_5 (VAR_2->data);
  while (VAR_2->data[VAR_13] != 0 && VAR_13 < VAR_15 -4 ) {
   if ( (VAR_2->data[VAR_13] == (ut8)'r' && VAR_2->data[VAR_13 + 3] == (ut8)':')) {
    FUNC_7 (VAR_10, &VAR_2->data[VAR_13], 3);
    VAR_10[3] = 0;
    FUNC_7 (&VAR_9[2], &VAR_2->data[VAR_13 + 5], 8);
    FUNC_7 (&VAR_9[10], &VAR_2->data[VAR_13 + 14], 8);
    VAR_9[0]='0';
    VAR_9[1]='x';
    VAR_9[18] = 0;
    VAR_13 += 22;
    VAR_16 = FUNC_4 (((void*)0), VAR_9);

    FUNC_3 (&VAR_7[VAR_14], &VAR_16, 8);

    if (!FUNC_6 (VAR_10, "rip", 3)) {

     VAR_17 = VAR_16;
    }
    VAR_14+= 8;

   } else {
    VAR_13++;
   }
  }

  FUNC_0 (VAR_2, "info cpu", 1);
  if (FUNC_8 (VAR_2->data,"PC_32")) {
   VAR_0 = 1;

  } else if (FUNC_8 (VAR_2->data,"PC_80")) {
   VAR_0 = 0;

  } else if (FUNC_8 (VAR_2->data,"PC_64")) {
   VAR_0 = 0;

  } else {
   FUNC_1 ("[unknown mode]\n%s\n", VAR_2->data);
  }
  FUNC_0 (VAR_2, "sreg", 1);

  VAR_14 = 0x38;
  char * VAR_18 [] = { "es:0x", "cs:0x","ss:0x","ds:0x","fs:0x","gs:0x",0};
  const char *VAR_19;
  int VAR_20;
  for (VAR_20 = 0; VAR_18[VAR_20] != 0; VAR_20++) {
   if ((VAR_19 = FUNC_8 (VAR_2->data,VAR_18[VAR_20]))) {
    FUNC_7 (&VAR_9[0], VAR_19+3, 7);
    VAR_9[6] = 0;
    VAR_16 = FUNC_4 (((void*)0), VAR_9);
    FUNC_7 (VAR_10, VAR_18[VAR_20], 2);
    VAR_10[2] = 0;
    if ((VAR_19 = FUNC_8 (VAR_19, "base="))) {
     FUNC_7 (VAR_11, VAR_19 + 5, 10);
     VAR_11[10] = 0;
     if ((VAR_19 = FUNC_8 (VAR_19, "limit="))) {
      FUNC_7 (VAR_12, VAR_19 + 6, 10);
      VAR_12[10] = 0;
     }
    }

    FUNC_3 (&VAR_7[VAR_14], &VAR_16, 2);
    VAR_14 += 2;
    if (VAR_0) {
     if (!FUNC_6 (VAR_10,"cs",2)) {
      VAR_17 += (VAR_16*0x10);

     }
    }
   }
  }

  if (VAR_3 != 0) {
   FUNC_3 (&VAR_7[0], &VAR_3, 8);
  } else {
   FUNC_3 (&VAR_7[0], &VAR_17, 8);
  }

  FUNC_3 (VAR_4,VAR_7,VAR_8);
  VAR_1 = 0;

 } else {
  FUNC_3 (VAR_7, VAR_4, VAR_8);

 }
 return VAR_8;
}
