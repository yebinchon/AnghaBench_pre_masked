
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (unsigned char const**) ;
 int FUNC_1 (int *,int ) ;
 unsigned char* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const unsigned char *VAR_3 = FUNC_2(VAR_2[0]);
  (void)VAR_1;
  if( VAR_3 && VAR_3[0] ) FUNC_1(VAR_0, FUNC_0(&VAR_3));
}
