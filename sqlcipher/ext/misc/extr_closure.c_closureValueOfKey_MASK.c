
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, const char *VAR_1){
  int VAR_2 = (int)FUNC_2(VAR_0);
  int VAR_3 = (int)FUNC_2(VAR_1);
  int VAR_4;
  if( VAR_3<VAR_2+1 ) return 0;
  if( FUNC_1(VAR_1, VAR_0, VAR_2)!=0 ) return 0;
  for(VAR_4=VAR_2; FUNC_0((unsigned char)VAR_1[VAR_4]); VAR_4++){}
  if( VAR_1[VAR_4]!='=' ) return 0;
  VAR_4++;
  while( FUNC_0((unsigned char)VAR_1[VAR_4]) ){ VAR_4++; }
  return VAR_1+VAR_4;
}
