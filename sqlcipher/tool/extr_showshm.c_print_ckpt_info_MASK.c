
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int,int ,char*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_1){
  const int VAR_2 = 96;
  int VAR_3;
  FUNC_0(VAR_1, 0+VAR_2, 4, VAR_0, "nBackfill");
  for(VAR_3=0; VAR_3<5; VAR_3++){
    char VAR_4[100];
    FUNC_1(VAR_4, "aReadMark[%d]", VAR_3);
    FUNC_0(VAR_1, 4*VAR_3+4+VAR_2, 4, VAR_0, VAR_4);
  }
  FUNC_0(VAR_1,24+VAR_2, 8, 0, "aLock");
  FUNC_0(VAR_1,32+VAR_2, 4, VAR_0, "nBackfillAttempted");
  FUNC_0(VAR_1,36+VAR_2, 4, VAR_0, "notUsed0");
}
