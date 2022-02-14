
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(char* VAR_1, char* VAR_2, char* VAR_3) {
 char *VAR_4, *VAR_5;
 int VAR_6;

 if( (VAR_4 = FUNC_1(VAR_2, '<')) && (VAR_5 = FUNC_1(VAR_4, '>')) ) {
  *VAR_5 = 0;
  VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_3 , VAR_4+1);
  *VAR_5 = '>';
  return VAR_6;
 }
 return FUNC_0(VAR_1, VAR_0 , VAR_3 , VAR_2 );
}
