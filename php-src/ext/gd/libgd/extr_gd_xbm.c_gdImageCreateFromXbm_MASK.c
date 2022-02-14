
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_7__ {int sx; int sy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 TYPE_1__* FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;

gdImagePtr FUNC_12(FILE * VAR_2)
{
 char VAR_3[VAR_1];
 char VAR_4[VAR_1];
 char *VAR_5;
 int VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 gdImagePtr VAR_11;
 int VAR_12 = 0, VAR_13;
 int VAR_14, VAR_15 = 0, VAR_16 = 0;
 int VAR_17;
 char VAR_18[8];
 unsigned int VAR_19;

 FUNC_7(VAR_2);
 while (FUNC_0(VAR_3, VAR_1, VAR_2)) {
  VAR_3[VAR_1-1] = '\0';
  if (FUNC_10(VAR_3) == VAR_1-1) {
   return 0;
  }
  if (FUNC_8(VAR_3, "#define %s %d", VAR_4, &VAR_6) == 2) {
   if (!(VAR_5 = FUNC_11(VAR_4, '_'))) {
    VAR_5 = VAR_4;
   } else {
    VAR_5++;
   }

   if (!FUNC_9("width", VAR_5)) {
    VAR_7 = (unsigned int) VAR_6;
   }
   if (!FUNC_9("height", VAR_5)) {
    VAR_8 = (unsigned int) VAR_6;
   }
  } else {
   if ( FUNC_8(VAR_3, "static unsigned char %s = {", VAR_4) == 1
     || FUNC_8(VAR_3, "static char %s = {", VAR_4) == 1)
   {
    VAR_10 = 128;
   } else if (FUNC_8(VAR_3, "static unsigned short %s = {", VAR_4) == 1
     || FUNC_8(VAR_3, "static short %s = {", VAR_4) == 1)
   {
    VAR_10 = 32768;
   }
   if (VAR_10) {
    VAR_12 = (VAR_7 + 7) / 8 * VAR_8;
    if (!VAR_12) {
     return 0;
    }
    if (!(VAR_5 = FUNC_11(VAR_4, '_'))) {
     VAR_5 = VAR_4;
    } else {
     VAR_5++;
    }
    if (!FUNC_9("bits[]", VAR_5)) {
     break;
    }
   }
   }
 }
 if (!VAR_12 || !VAR_10) {
  return 0;
 }

 if(!(VAR_11 = FUNC_2(VAR_7, VAR_8))) {
  return 0;
 }
 FUNC_1(VAR_11, 255, 255, 255);
 FUNC_1(VAR_11, 0, 0, 0);
 VAR_18[2] = '\0';
 VAR_18[4] = '\0';
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  while (1) {
   if ((VAR_17=FUNC_6(VAR_2)) == VAR_0) {
    VAR_9 = 1;
    break;
   }
   if (VAR_17 == 'x') {
    break;
   }
  }
  if (VAR_9) {
   break;
  }

  if ((VAR_17=FUNC_6(VAR_2)) == VAR_0) {
   break;
  }
  VAR_18[0] = VAR_17;
  if ((VAR_17=FUNC_6(VAR_2)) == VAR_0) {
   break;
  }
  VAR_18[1] = VAR_17;
  if (VAR_10 == 32768) {
   if ((VAR_17=FUNC_6(VAR_2)) == VAR_0) {
    break;
   }
   VAR_18[2] = VAR_17;
   if ((VAR_17=FUNC_6(VAR_2)) == VAR_0) {
    break;
   }
   VAR_18[3] = VAR_17;
  }
  if (FUNC_8(VAR_18, "%x", &VAR_19) != 1) {
   FUNC_5("invalid XBM");
   FUNC_3(VAR_11);
   return 0;
  }
  for (VAR_14 = 1; VAR_14 <= VAR_10; VAR_14 = VAR_14 << 1) {
   FUNC_4(VAR_11, VAR_15++, VAR_16, (VAR_19 & VAR_14) ? 1 : 0);
   if (VAR_15 == VAR_11->sx) {
    VAR_15 = 0;
    VAR_16++;
    if (VAR_16 == VAR_11->sy) {
     return VAR_11;
    }
    break;
   }
  }
 }

 FUNC_5("EOF before image was complete");
 FUNC_3(VAR_11);
 return 0;
}
