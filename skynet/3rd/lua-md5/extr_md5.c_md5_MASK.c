
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD32 ;


 int FUNC_0 (scalar_t__*,char const*,int,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,long) ;
 int FUNC_4 (scalar_t__*,char*) ;

void FUNC_5 (const char *VAR_0, long VAR_1, char *VAR_2) {
  WORD32 VAR_3[4];
  int VAR_4 = 0;
  long VAR_5 = 0;
  FUNC_2(VAR_3);
  while (VAR_4 != 2) {
    WORD32 VAR_6[4];
    WORD32 VAR_7[16];
    int VAR_8 = (VAR_1-VAR_5 >= 64) ? 64 : VAR_1-VAR_5;

    VAR_6[0]=VAR_3[0]; VAR_6[1]=VAR_3[1]; VAR_6[2]=VAR_3[2]; VAR_6[3]=VAR_3[3];
    VAR_4 = FUNC_0(VAR_7, VAR_0+VAR_5, VAR_8, VAR_4);
    if (VAR_4 == 2) FUNC_3(VAR_7, VAR_1);
    FUNC_1(VAR_7, VAR_3);
    VAR_3[0]+=VAR_6[0]; VAR_3[1]+=VAR_6[1]; VAR_3[2]+=VAR_6[2]; VAR_3[3]+=VAR_6[3];
    VAR_5 += VAR_8;
  }
  FUNC_4(VAR_3, VAR_2);
}
