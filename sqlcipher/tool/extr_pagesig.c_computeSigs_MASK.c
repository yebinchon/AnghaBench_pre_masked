
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aBuf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (unsigned char*,int,unsigned int,int *) ;
 int FUNC_4 (char*,unsigned int,unsigned char*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (unsigned char*,unsigned int,unsigned char*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1){
  FILE *VAR_2 = FUNC_1(VAR_1, "rb");
  unsigned VAR_3;
  size_t VAR_4;
  unsigned VAR_5;
  unsigned char VAR_6[50];
  unsigned char VAR_7[65536];

  if( VAR_2==0 ){
    FUNC_2(VAR_0, "cannot open \"%s\"\n", VAR_1);
    return;
  }
  VAR_4 = FUNC_3(VAR_6, 1, sizeof(VAR_6), VAR_2);
  if( VAR_4!=sizeof(VAR_6) ){
    goto endComputeSigs;
  }
  VAR_3 = VAR_6[16]*256 + VAR_6[17];
  if( VAR_3==1 ) VAR_3 = 65536;
  if( (VAR_3 & (VAR_3-1))!=0 ){
    FUNC_2(VAR_0, "invalid page size: %02x%02x\n", VAR_6[16], VAR_6[17]);
    goto endComputeSigs;
  }
  FUNC_5(VAR_2);
  for(VAR_5=1; (VAR_4=FUNC_3(VAR_7, 1, VAR_3, VAR_2))==VAR_3; VAR_5++){
    FUNC_6(VAR_7, VAR_3, VAR_6);
    FUNC_4("%4d: %s\n", VAR_5, VAR_6);
  }

endComputeSigs:
  FUNC_0(VAR_2);
}
