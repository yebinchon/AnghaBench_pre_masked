
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBuf ;
typedef int vfstrace_info ;
 int FUNC_0 (int,char*,char*,int) ;
 int FUNC_1 (int *,char const*,char*) ;

__attribute__((used)) static void FUNC_2(
  vfstrace_info *VAR_0,
  const char *VAR_1,
  int VAR_2
){
  char VAR_3[50];
  char *VAR_4;
  switch( VAR_2 ){
    case 133: VAR_4 = "SQLITE_OK"; break;
    case 166: VAR_4 = "SQLITE_ERROR"; break;
    case 132: VAR_4 = "SQLITE_PERM"; break;
    case 174: VAR_4 = "SQLITE_ABORT"; break;
    case 173: VAR_4 = "SQLITE_BUSY"; break;
    case 134: VAR_4 = "SQLITE_NOMEM"; break;
    case 130: VAR_4 = "SQLITE_READONLY"; break;
    case 164: VAR_4 = "SQLITE_INTERRUPT"; break;
    case 163: VAR_4 = "SQLITE_IOERR"; break;
    case 168: VAR_4 = "SQLITE_CORRUPT"; break;
    case 165: VAR_4 = "SQLITE_FULL"; break;
    case 171: VAR_4 = "SQLITE_CANTOPEN"; break;
    case 131: VAR_4 = "SQLITE_PROTOCOL"; break;
    case 167: VAR_4 = "SQLITE_EMPTY"; break;
    case 128: VAR_4 = "SQLITE_SCHEMA"; break;
    case 169: VAR_4 = "SQLITE_CONSTRAINT"; break;
    case 137: VAR_4 = "SQLITE_MISMATCH"; break;
    case 136: VAR_4 = "SQLITE_MISUSE"; break;
    case 135: VAR_4 = "SQLITE_NOLFS"; break;
    case 148: VAR_4 = "SQLITE_IOERR_READ"; break;
    case 142: VAR_4 = "SQLITE_IOERR_SHORT_READ"; break;
    case 139: VAR_4 = "SQLITE_IOERR_WRITE"; break;
    case 153: VAR_4 = "SQLITE_IOERR_FSYNC"; break;
    case 155: VAR_4 = "SQLITE_IOERR_DIR_FSYNC"; break;
    case 141: VAR_4 = "SQLITE_IOERR_TRUNCATE"; break;
    case 154: VAR_4 = "SQLITE_IOERR_FSTAT"; break;
    case 140: VAR_4 = "SQLITE_IOERR_UNLOCK"; break;
    case 149: VAR_4 = "SQLITE_IOERR_RDLOCK"; break;
    case 157: VAR_4 = "SQLITE_IOERR_DELETE"; break;
    case 161: VAR_4 = "SQLITE_IOERR_BLOCKED"; break;
    case 150: VAR_4 = "SQLITE_IOERR_NOMEM"; break;
    case 162: VAR_4 = "SQLITE_IOERR_ACCESS"; break;
    case 160:
                               VAR_4 = "SQLITE_IOERR_CHECKRESERVEDLOCK"; break;
    case 151: VAR_4 = "SQLITE_IOERR_LOCK"; break;
    case 159: VAR_4 = "SQLITE_IOERR_CLOSE"; break;
    case 156: VAR_4 = "SQLITE_IOERR_DIR_CLOSE"; break;
    case 144: VAR_4 = "SQLITE_IOERR_SHMOPEN"; break;
    case 143: VAR_4 = "SQLITE_IOERR_SHMSIZE"; break;
    case 146: VAR_4 = "SQLITE_IOERR_SHMLOCK"; break;
    case 145: VAR_4 = "SQLITE_IOERR_SHMMAP"; break;
    case 147: VAR_4 = "SQLITE_IOERR_SEEK"; break;
    case 152: VAR_4 = "SQLITE_IOERR_GETTEMPPATH"; break;
    case 158: VAR_4 = "SQLITE_IOERR_CONVPATH"; break;
    case 129: VAR_4 = "SQLITE_READONLY_DBMOVED"; break;
    case 138: VAR_4 = "SQLITE_LOCKED_SHAREDCACHE"; break;
    case 172: VAR_4 = "SQLITE_BUSY_RECOVERY"; break;
    case 170: VAR_4 = "SQLITE_CANTOPEN_NOTEMPDIR"; break;
    default: {
       FUNC_0(sizeof(VAR_3), VAR_3, "%d", VAR_2);
       VAR_4 = VAR_3;
       break;
    }
  }
  FUNC_1(VAR_0, VAR_1, VAR_4);
}
