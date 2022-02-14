
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (unsigned char*,size_t,int,int *) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (scalar_t__) ;

__attribute__((used)) static unsigned char *FUNC_6(const char *VAR_0, sqlite3_int64 *VAR_1){
  FILE *VAR_2;
  sqlite3_int64 VAR_3;
  size_t VAR_4;
  unsigned char *VAR_5;

  VAR_3 = FUNC_1(VAR_0);
  if( VAR_3<0 ) return 0;
  VAR_2 = FUNC_2(VAR_0, "rb");
  if( VAR_2==0 ) return 0;
  VAR_5 = FUNC_5( VAR_3 );
  if( VAR_5==0 ) return 0;
  VAR_4 = FUNC_3(VAR_5, (size_t)VAR_3, 1, VAR_2);
  FUNC_0(VAR_2);
  if( VAR_4!=1 ){
    FUNC_4(VAR_5);
    return 0;
  }
  if( VAR_1 ) *VAR_1 = VAR_3;
  return VAR_5;
}
