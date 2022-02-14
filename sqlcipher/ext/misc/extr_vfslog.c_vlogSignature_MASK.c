
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,unsigned int,...) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, int VAR_1, char *VAR_2){
  unsigned int VAR_3 = 0, VAR_4 = 0;
  unsigned int *VAR_5;
  int VAR_6;
  if( VAR_1<=16 ){
    for(VAR_6=0; VAR_6<VAR_1; VAR_6++) FUNC_0(3, VAR_2+VAR_6*2, "%02x", VAR_0[VAR_6]);
  }else{
    VAR_5 = (unsigned int*)VAR_0;
    for(VAR_6=0; VAR_6<VAR_1-7; VAR_6+=8){
      VAR_3 += VAR_5[0] + VAR_4;
      VAR_4 += VAR_5[1] + VAR_3;
      VAR_5 += 2;
    }
    for(VAR_6=0; VAR_6<8; VAR_6++) FUNC_0(3, VAR_2+VAR_6*2, "%02x", VAR_0[VAR_6]);
    FUNC_0(18, VAR_2+VAR_6*2, "-%08x%08x", VAR_3, VAR_4);
  }
}
