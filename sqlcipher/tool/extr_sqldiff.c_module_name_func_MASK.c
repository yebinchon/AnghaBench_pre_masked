
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zToken ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int *,char*,int,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_1,
  int VAR_2, sqlite3_value **VAR_3
){
  const char *VAR_4;
  char VAR_5[32];

  FUNC_0( VAR_2==1 );
  VAR_4 = (const char*)FUNC_4(VAR_3[0]);

  VAR_4 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if( VAR_4==0 || FUNC_3(VAR_5, "create") ) return;
  VAR_4 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if( VAR_4==0 || FUNC_3(VAR_5, "virtual") ) return;
  VAR_4 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if( VAR_4==0 || FUNC_3(VAR_5, "table") ) return;
  VAR_4 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if( VAR_4==0 ) return;
  VAR_4 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
  if( VAR_4==0 || FUNC_3(VAR_5, "using") ) return;
  VAR_4 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));

  FUNC_2(VAR_1, VAR_5, -1, VAR_0);
}
