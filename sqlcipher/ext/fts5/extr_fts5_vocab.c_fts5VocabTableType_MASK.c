
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int*,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, char **VAR_6, int *VAR_7){
  int VAR_8 = VAR_4;
  char *VAR_9 = FUNC_1(&VAR_8, VAR_5, -1);
  if( VAR_8==VAR_4 ){
    FUNC_0(VAR_9);
    if( FUNC_4(VAR_9, "col")==0 ){
      *VAR_7 = VAR_0;
    }else

    if( FUNC_4(VAR_9, "row")==0 ){
      *VAR_7 = VAR_2;
    }else
    if( FUNC_4(VAR_9, "instance")==0 ){
      *VAR_7 = VAR_1;
    }else
    {
      *VAR_6 = FUNC_3("fts5vocab: unknown table type: %Q", VAR_9);
      VAR_8 = VAR_3;
    }
    FUNC_2(VAR_9);
  }

  return VAR_8;
}
