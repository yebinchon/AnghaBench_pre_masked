
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int InteriorReader ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(InteriorReader *VAR_0,
                                 const char *VAR_1, int VAR_2, int VAR_3){
  const char *VAR_4 = FUNC_0(VAR_0);
  int VAR_5 = FUNC_1(VAR_0);
  int VAR_6, VAR_7 = VAR_5<VAR_2 ? VAR_5 : VAR_2;

  if( VAR_7==0 ){
    if( VAR_5>0 ) return -1;
    if( VAR_2>0 ) return 1;
    return 0;
  }

  VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_7);
  if( VAR_6!=0 ) return VAR_6;
  if( VAR_3 && VAR_7==VAR_2 ) return 0;
  return VAR_5 - VAR_2;
}
