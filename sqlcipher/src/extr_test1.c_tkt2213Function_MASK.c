
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (char*,unsigned char const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  unsigned char const *VAR_5;
  unsigned char const *VAR_6;
  unsigned char const *VAR_7;

  VAR_4 = FUNC_4(VAR_3[0]);
  VAR_5 = FUNC_5(VAR_3[0]);
  VAR_6 = FUNC_5(VAR_3[0]);
  VAR_7 = FUNC_5(VAR_3[0]);

  if( VAR_5!=VAR_6 || VAR_6!=VAR_7 ){
    FUNC_2(VAR_1, "tkt2213 is not fixed", -1);
  }else{
    char *VAR_8 = (char *)FUNC_1(VAR_4);
    FUNC_0(VAR_8, VAR_5, VAR_4);
    FUNC_3(VAR_1, VAR_8, VAR_4, VAR_0);
  }
}
