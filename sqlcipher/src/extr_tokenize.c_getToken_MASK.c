
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char const*,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const unsigned char **VAR_6){
  const unsigned char *VAR_7 = *VAR_6;
  int VAR_8;
  do {
    VAR_7 += FUNC_0(VAR_7, &VAR_8);
  }while( VAR_8==VAR_3 );
  if( VAR_8==VAR_0
   || VAR_8==VAR_4
   || VAR_8==VAR_1
   || VAR_8==VAR_5
   || VAR_8==VAR_2
   || FUNC_1(VAR_8)==VAR_0
  ){
    VAR_8 = VAR_0;
  }
  *VAR_6 = VAR_7;
  return VAR_8;
}
