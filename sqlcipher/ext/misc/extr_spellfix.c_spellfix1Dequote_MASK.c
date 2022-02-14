
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0){
  char *VAR_1;
  int VAR_2, VAR_3;
  char VAR_4;
  while( FUNC_1((unsigned char)VAR_0[0]) ) VAR_0++;
  VAR_1 = FUNC_2("%s", VAR_0);
  if( VAR_1==0 ) return 0;
  VAR_2 = (int)FUNC_3(VAR_1);



  VAR_1[VAR_2] = 0;
  VAR_4 = VAR_1[0];
  if( VAR_4=='\'' || VAR_4=='"' ){
    for(VAR_2=1, VAR_3=0; FUNC_0(VAR_1[VAR_2]); VAR_2++){
      VAR_1[VAR_3++] = VAR_1[VAR_2];
      if( VAR_1[VAR_2]==VAR_4 ){
        if( VAR_1[VAR_2+1]==VAR_4 ){
          VAR_2++;
        }else{
          VAR_1[VAR_3-1] = 0;
          break;
        }
      }
    }
  }
  return VAR_1;
}
