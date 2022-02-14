
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBuf ;
typedef int SHA3Context ;
typedef int FILE ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char*,int,int,int *) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, int VAR_1, char *VAR_2){
  FILE *VAR_3;
  SHA3Context VAR_4;
  char VAR_5[10240];

  VAR_3 = FUNC_5(VAR_0,"rb");
  if( VAR_3==0 ){
    return 1;
  }
  FUNC_2(&VAR_4, VAR_1);
  for(;;){
    int VAR_6 = (int)FUNC_6(VAR_5, 1, sizeof(VAR_5), VAR_3);
    if( VAR_6<=0 ) break;
    FUNC_3(&VAR_4, (unsigned char*)VAR_5, (unsigned)VAR_6);
  }
  FUNC_4(VAR_3);
  FUNC_0(FUNC_1(&VAR_4), VAR_2, VAR_1/8);
  return 0;
}
