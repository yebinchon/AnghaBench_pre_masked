
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_changeset_iter ;







 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int **) ;
 int FUNC_3 (int *,int,int **) ;
 int FUNC_4 (int *,char const**,int*,int*,int*) ;
 int FUNC_5 (int *,unsigned char**,int ) ;

__attribute__((used)) static int FUNC_6(
  void *VAR_2,
  int VAR_3,
  sqlite3_changeset_iter *VAR_4
){
  int VAR_5, VAR_6, VAR_7, VAR_8;
  const char *VAR_9;
  unsigned char *VAR_10;
  const char *VAR_11 = "";
  const char *VAR_12 = "";
  const char *VAR_13 = " ";

  VAR_1++;
  FUNC_4(VAR_4, &VAR_9, &VAR_7, &VAR_5, &VAR_6);
  FUNC_5(VAR_4, &VAR_10, 0);
  switch( VAR_3 ){
    case 133: VAR_11 = "DATA"; break;
    case 131: VAR_11 = "NOTFOUND"; break;
    case 135: VAR_11 = "PRIMARY KEY"; break;
    case 132: VAR_11 = "FOREIGN KEY"; break;
    case 134: VAR_11 = "CONSTRAINT"; break;
  }
  switch( VAR_5 ){
    case 128: VAR_12 = "UPDATE of"; break;
    case 129: VAR_12 = "INSERT into"; break;
    case 130: VAR_12 = "DELETE from"; break;
  }
  FUNC_0("%s conflict on %s table %s with primary key", VAR_11, VAR_12, VAR_9);
  for(VAR_8=0; VAR_8<VAR_7; VAR_8++){
    sqlite3_value *VAR_14;
    if( VAR_10[VAR_8]==0 ) continue;
    FUNC_0("%s", VAR_13);
    if( VAR_5==129 ){
      FUNC_2(VAR_4, VAR_8, &VAR_14);
    }else{
      FUNC_3(VAR_4, VAR_8, &VAR_14);
    }
    FUNC_1(VAR_14);
    VAR_13 = ",";
  }
  FUNC_0("\n");
  return VAR_0;
}
