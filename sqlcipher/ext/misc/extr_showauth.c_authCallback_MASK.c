
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zOpSpace ;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_1 (int,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(
  void *VAR_1,
  int VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  const char *VAR_5,
  const char *VAR_6
){
  const char *VAR_7;
  char VAR_8[50];
  switch( VAR_2 ){
    case 157: VAR_7 = "CREATE_INDEX"; break;
    case 156: VAR_7 = "CREATE_TABLE"; break;
    case 155: VAR_7 = "CREATE_TEMP_INDEX"; break;
    case 154: VAR_7 = "CREATE_TEMP_TABLE"; break;
    case 153: VAR_7 = "CREATE_TEMP_TRIGGER"; break;
    case 152: VAR_7 = "CREATE_TEMP_VIEW"; break;
    case 151: VAR_7 = "CREATE_TRIGGER"; break;
    case 150: VAR_7 = "CREATE_VIEW"; break;
    case 148: VAR_7 = "DELETE"; break;
    case 146: VAR_7 = "DROP_INDEX"; break;
    case 145: VAR_7 = "DROP_TABLE"; break;
    case 144: VAR_7 = "DROP_TEMP_INDEX"; break;
    case 143: VAR_7 = "DROP_TEMP_TABLE"; break;
    case 142: VAR_7 = "DROP_TEMP_TRIGGER"; break;
    case 141: VAR_7 = "DROP_TEMP_VIEW"; break;
    case 140: VAR_7 = "DROP_TRIGGER"; break;
    case 139: VAR_7 = "DROP_VIEW"; break;
    case 136: VAR_7 = "INSERT"; break;
    case 135: VAR_7 = "PRAGMA"; break;
    case 134: VAR_7 = "READ"; break;
    case 130: VAR_7 = "SELECT"; break;
    case 129: VAR_7 = "TRANSACTION"; break;
    case 128: VAR_7 = "UPDATE"; break;
    case 159: VAR_7 = "ATTACH"; break;
    case 147: VAR_7 = "DETACH"; break;
    case 161: VAR_7 = "ALTER_TABLE"; break;
    case 132: VAR_7 = "REINDEX"; break;
    case 160: VAR_7 = "ANALYZE"; break;
    case 149: VAR_7 = "CREATE_VTABLE"; break;
    case 138: VAR_7 = "DROP_VTABLE"; break;
    case 137: VAR_7 = "FUNCTION"; break;
    case 131: VAR_7 = "SAVEPOINT"; break;
    case 158: VAR_7 = "COPY"; break;
    case 133: VAR_7 = "RECURSIVE"; break;


    default: {
      FUNC_1(sizeof(VAR_8), VAR_8, "%d", VAR_2);
      VAR_7 = VAR_8;
      break;
    }
  }
  if( VAR_3==0 ) VAR_3 = "NULL";
  if( VAR_4==0 ) VAR_4 = "NULL";
  if( VAR_5==0 ) VAR_5 = "NULL";
  if( VAR_6==0 ) VAR_6 = "NULL";
  FUNC_0("AUTH: %s,%s,%s,%s,%s\n", VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
  return VAR_0;
}
