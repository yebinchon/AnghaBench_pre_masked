
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zBuf ;
struct TYPE_8__ {int zVfsName; } ;
typedef TYPE_2__ vfstrace_info ;
struct TYPE_9__ {int zFName; TYPE_6__* pReal; TYPE_2__* pInfo; } ;
typedef TYPE_3__ vfstrace_file ;
typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_10__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int (* xFileControl ) (TYPE_6__*,int,void*) ;} ;
 int VAR_0 ;

 char* FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int,char*,char*,...) ;
 int FUNC_2 (TYPE_6__*,int,void*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_5(sqlite3_file *VAR_1, int VAR_2, void *VAR_3){
  vfstrace_file *VAR_4 = (vfstrace_file *)VAR_1;
  vfstrace_info *VAR_5 = VAR_4->pInfo;
  int VAR_6;
  char VAR_7[100];
  char *VAR_8;
  switch( VAR_2 ){
    case 139: VAR_8 = "LOCKSTATE"; break;
    case 130: VAR_8 = "GET_LOCKPROXYFILE"; break;
    case 128: VAR_8 = "SET_LOCKPROXYFILE"; break;
    case 129: VAR_8 = "LAST_ERRNO"; break;
    case 135: {
      FUNC_1(sizeof(VAR_7), VAR_7, "SIZE_HINT,%lld",
                       *(sqlite3_int64*)VAR_3);
      VAR_8 = VAR_7;
      break;
    }
    case 141: {
      FUNC_1(sizeof(VAR_7), VAR_7, "CHUNK_SIZE,%d", *(int*)VAR_3);
      VAR_8 = VAR_7;
      break;
    }
    case 140: VAR_8 = "FILE_POINTER"; break;
    case 134: VAR_8 = "SYNC_OMITTED"; break;
    case 131: VAR_8 = "WIN32_AV_RETRY"; break;
    case 137: VAR_8 = "PERSIST_WAL"; break;
    case 138: VAR_8 = "OVERWRITE"; break;
    case 132: VAR_8 = "VFSNAME"; break;
    case 133: VAR_8 = "TEMPFILENAME"; break;
    case 0xca093fa0: VAR_8 = "DB_UNCHANGED"; break;
    case 136: {
      const char *const* VAR_9 = (const char*const*)VAR_3;
      FUNC_1(sizeof(VAR_7), VAR_7, "PRAGMA,[%s,%s]",VAR_9[1],VAR_9[2]);
      VAR_8 = VAR_7;
      break;
    }
    default: {
      FUNC_1(sizeof VAR_7, VAR_7, "%d", VAR_2);
      VAR_8 = VAR_7;
      break;
    }
  }
  FUNC_4(VAR_5, "%s.xFileControl(%s,%s)",
                  VAR_5->zVfsName, VAR_4->zFName, VAR_8);
  VAR_6 = VAR_4->pReal->pMethods->xFileControl(VAR_4->pReal, VAR_2, VAR_3);
  FUNC_3(VAR_5, " -> %s\n", VAR_6);
  if( VAR_2==132 && VAR_6==VAR_0 ){
    *(char**)VAR_3 = FUNC_0("vfstrace.%s/%z",
                                    VAR_5->zVfsName, *(char**)VAR_3);
  }
  if( (VAR_2==136 || VAR_2==133)
   && VAR_6==VAR_0 && *(char**)VAR_3 ){
    FUNC_4(VAR_5, "%s.xFileControl(%s,%s) returns %s",
                    VAR_5->zVfsName, VAR_4->zFName, VAR_8, *(char**)VAR_3);
  }
  return VAR_6;
}
