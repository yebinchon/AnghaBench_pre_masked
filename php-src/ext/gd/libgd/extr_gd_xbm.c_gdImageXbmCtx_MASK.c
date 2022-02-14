
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;
typedef int gdIOCtx ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;

void FUNC_12(gdImagePtr VAR_0, char* VAR_1, int VAR_2, gdIOCtx * VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 char *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;

 VAR_11 = VAR_1;
 if ((VAR_12 = FUNC_11(VAR_11, '/')) != ((void*)0)) VAR_11 = VAR_12+1;
 if ((VAR_12 = FUNC_11(VAR_11, '\\')) != ((void*)0)) VAR_11 = VAR_12+1;
 VAR_11 = FUNC_1(VAR_11);
 if ((VAR_12 = FUNC_11(VAR_11, '.')) != ((void*)0) && !FUNC_9(VAR_12, ".XBM")) *VAR_12 = '\0';
 if ((VAR_14 = FUNC_10(VAR_11)) == 0) {
  FUNC_0(VAR_11);
  VAR_11 = FUNC_1("image");
 } else {
  for (VAR_13=0; VAR_13<VAR_14; VAR_13++) {

   if (!FUNC_8(VAR_11[VAR_13]) && !FUNC_7(VAR_11[VAR_13]) && !FUNC_6(VAR_11[VAR_13])) {
    VAR_11[VAR_13] = '_';
   }
  }
 }

 FUNC_2(VAR_3, "#define %s_width %d\n", VAR_11, FUNC_4(VAR_0));
 FUNC_2(VAR_3, "#define %s_height %d\n", VAR_11, FUNC_5(VAR_0));
 FUNC_2(VAR_3, "static unsigned char %s_bits[] = {\n  ", VAR_11);

 FUNC_0(VAR_11);

 VAR_7 = 1;
 VAR_10 = 0;
 VAR_6 = 0;
 VAR_8 = FUNC_4(VAR_0);
 VAR_9 = FUNC_5(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
   if (FUNC_3(VAR_0, VAR_4, VAR_5) == VAR_2) {
    VAR_6 |= VAR_7;
   }
   if ((VAR_7 == 128) || (VAR_4 == VAR_8 - 1)) {
    VAR_7 = 1;
    if (VAR_10) {
     FUNC_2(VAR_3, ", ");
     if (!(VAR_10%12)) {
      FUNC_2(VAR_3, "\n  ");
      VAR_10 = 12;
     }
    }
    VAR_10++;
    FUNC_2(VAR_3, "0x%02X", VAR_6);
    VAR_6 = 0;
   } else {
    VAR_7 <<= 1;
   }
  }
 }
 FUNC_2(VAR_3, "};\n");
}
