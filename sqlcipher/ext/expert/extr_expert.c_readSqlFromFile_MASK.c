
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3expert ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char*,long,int,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char**) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (long) ;
 char* FUNC_9 (char*,char const*) ;

__attribute__((used)) static int FUNC_10(sqlite3expert *VAR_2, const char *VAR_3, char **VAR_4){
  FILE *VAR_5 = FUNC_1(VAR_3, "rb");
  long VAR_6;
  size_t VAR_7;
  char *VAR_8;
  int VAR_9;
  if( VAR_5==0 ){
    *VAR_4 = FUNC_9("failed to open file %s\n", VAR_3);
    return VAR_1;
  }
  FUNC_3(VAR_5, 0, VAR_0);
  VAR_6 = FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  VAR_8 = FUNC_8( VAR_6+1 );
  VAR_7 = FUNC_2(VAR_8, VAR_6, 1, VAR_5);
  FUNC_0(VAR_5);
  if( VAR_7!=1 ){
    FUNC_7(VAR_8);
    *VAR_4 = FUNC_9("failed to read file %s\n", VAR_3);
    return VAR_1;
  }
  VAR_8[VAR_6] = 0;
  VAR_9 = FUNC_6(VAR_2, VAR_8, VAR_4);
  FUNC_7(VAR_8);
  return VAR_9;
}
