
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(void *VAR_0, size_t VAR_1)
{
 unsigned char* VAR_2 = (unsigned char*)VAR_0;
 size_t VAR_3, VAR_4, VAR_5;
 char VAR_6[80] = "";

 for (VAR_3=0; VAR_3<VAR_1; VAR_3+=16) {
  if (VAR_3!=0)
   FUNC_2("%s\n", VAR_6);
  VAR_6[0] = 0;
  FUNC_0(&VAR_6[FUNC_1(VAR_6)], "  %08x  ", (unsigned int)VAR_3);
  for(VAR_4=0,VAR_5=0; VAR_5<16; VAR_4++,VAR_5++) {
   if (VAR_3+VAR_4 < VAR_1) {
    FUNC_0(&VAR_6[FUNC_1(VAR_6)], "%02x", VAR_2[VAR_3+VAR_4]);
   } else {
    FUNC_0(&VAR_6[FUNC_1(VAR_6)], "  ");
   }
   FUNC_0(&VAR_6[FUNC_1(VAR_6)], " ");
  }
  FUNC_0(&VAR_6[FUNC_1(VAR_6)], " ");
  for(VAR_4=0,VAR_5=0; VAR_5<16; VAR_4++,VAR_5++) {
   if (VAR_3+VAR_4 < VAR_1) {
    if ((VAR_2[VAR_3+VAR_4] < 32) || (VAR_2[VAR_3+VAR_4] > 126)) {
     FUNC_0(&VAR_6[FUNC_1(VAR_6)], ".");
    } else {
     FUNC_0(&VAR_6[FUNC_1(VAR_6)], "%c", VAR_2[VAR_3+VAR_4]);
    }
   }
  }
 }
 FUNC_2("%s\n", VAR_6);
}
