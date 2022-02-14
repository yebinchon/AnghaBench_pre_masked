
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t i64 ;


 int FUNC_0 (unsigned char*,size_t*) ;
 scalar_t__ FUNC_1 (unsigned char*,size_t,char*) ;
 size_t FUNC_2 (size_t,unsigned char) ;
 int FUNC_3 (char*,char*,int) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static i64 FUNC_5(
  unsigned char VAR_0,
  unsigned char *VAR_1,
  int VAR_2,
  char **VAR_3
){
  int VAR_4;
  i64 VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7;
  i64 VAR_8;
  i64 VAR_9;
  i64 VAR_10;
  static char VAR_11[1000];
  VAR_4 = 0;
  if( VAR_0<=5 ){
    VAR_7 = ((VAR_1[0]*256 + VAR_1[1])*256 + VAR_1[2])*256 + VAR_1[3];
    VAR_1 += 4;
    VAR_6 += 4;
    FUNC_3(VAR_11, "lx: %d ", VAR_7);
    VAR_5 = FUNC_4(VAR_11);
  }
  if( VAR_0!=5 ){
    VAR_4 = FUNC_0(VAR_1, &VAR_8);
    VAR_1 += VAR_4;
    VAR_6 += VAR_4;
    FUNC_3(&VAR_11[VAR_5], "n: %lld ", VAR_8);
    VAR_5 += FUNC_4(&VAR_11[VAR_5]);
    VAR_10 = FUNC_2(VAR_8, VAR_0);
  }else{
    VAR_8 = VAR_10 = 0;
  }
  if( VAR_0==5 || VAR_0==13 ){
    VAR_4 = FUNC_0(VAR_1, &VAR_9);
    VAR_1 += VAR_4;
    VAR_6 += VAR_4;
    FUNC_3(&VAR_11[VAR_5], "r: %lld ", VAR_9);
    VAR_5 += FUNC_4(&VAR_11[VAR_5]);
  }
  if( VAR_10<VAR_8 ){
    int VAR_12;
    unsigned char *VAR_13 = &VAR_1[VAR_10];
    VAR_12 = ((VAR_13[0]*256 + VAR_13[1])*256 + VAR_13[2])*256 + VAR_13[3];
    FUNC_3(&VAR_11[VAR_5], "ov: %d ", VAR_12);
    VAR_5 += FUNC_4(&VAR_11[VAR_5]);
    VAR_6 += 4;
  }
  if( VAR_2 && VAR_0!=5 ){
    VAR_5 += FUNC_1(VAR_1, VAR_10, &VAR_11[VAR_5-1]);
  }
  *VAR_3 = VAR_11;
  return VAR_10+VAR_6;
}
