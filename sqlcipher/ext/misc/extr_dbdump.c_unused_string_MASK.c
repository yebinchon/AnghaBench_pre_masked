
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2(
  const char *VAR_0,
  const char *VAR_1, const char *VAR_2,
  char *VAR_3
){
  unsigned VAR_4 = 0;
  if( FUNC_1(VAR_0, VAR_1)==0 ) return VAR_1;
  if( FUNC_1(VAR_0, VAR_2)==0 ) return VAR_2;
  do{
    FUNC_0(20,VAR_3,"(%s%u)", VAR_1, VAR_4++);
  }while( FUNC_1(VAR_0,VAR_3)!=0 );
  return VAR_3;
}
