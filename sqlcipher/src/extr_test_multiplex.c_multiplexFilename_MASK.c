
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(
  const char *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  char *VAR_9
){
  int VAR_10 = VAR_6;
  FUNC_1(VAR_9, VAR_5, VAR_10+1);
  if( VAR_8!=0 && VAR_8<=VAR_0 ){
    FUNC_2(4,&VAR_9[VAR_10],"%03d",VAR_8);
    VAR_10 += 3;
  }

  FUNC_0( VAR_9[VAR_10]=='\0' );
  VAR_9[VAR_10+1] = '\0';
}
