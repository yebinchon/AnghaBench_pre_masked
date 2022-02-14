
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int zHost ;
typedef int sqlite3_mutex ;
typedef int sqlite3_int64 ;
struct TYPE_8__ {int nFilename; char* zFilename; scalar_t__ out; int nRef; struct TYPE_8__* pNext; struct TYPE_8__** ppPrev; } ;
typedef TYPE_1__ VLogLog ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,char*,char*,int,char const*,int ) ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_1__*,int ,int ,char*,int ,int,char*,int ) ;
 int FUNC_15 () ;

__attribute__((used)) static VLogLog *FUNC_16(const char *VAR_2){
  int VAR_3 = (int)FUNC_13(VAR_2);
  int VAR_4 = 0;
  sqlite3_mutex *VAR_5;
  VLogLog *VAR_6, *VAR_7;
  sqlite3_int64 VAR_8 = 0;
  if( VAR_3>4 && FUNC_12(VAR_2+VAR_3-4,"-wal")==0 ){
    return 0;
  }else
  if( VAR_3>8 && FUNC_12(VAR_2+VAR_3-8,"-journal")==0 ){
    VAR_3 -= 8;
    VAR_4 = 1;
  }else if( VAR_3>12
         && FUNC_11("-mj??????9??", VAR_2+VAR_3-12)==0 ){
    return 0;
  }
  VAR_7 = FUNC_6( sizeof(*VAR_6)*2 + VAR_3 + 60 );
  if( VAR_7==0 ) return 0;
  VAR_5 = FUNC_7(VAR_0);
  FUNC_8(VAR_5);
  for(VAR_6=VAR_1; VAR_6; VAR_6=VAR_6->pNext){
    if( VAR_6->nFilename==VAR_3 && !FUNC_3(VAR_6->zFilename, VAR_2, VAR_3) ){
      break;
    }
  }
  if( VAR_6==0 ){
    VAR_6 = VAR_7;
    VAR_7 = 0;
    FUNC_4(VAR_6, 0, sizeof(*VAR_6)*2);
    VAR_6->zFilename = (char*)&VAR_6[2];
    VAR_8 = FUNC_15();
    FUNC_10(VAR_3+60, VAR_6->zFilename, "%.*s-debuglog-%lld",
                     VAR_3, VAR_2, VAR_8);
    VAR_6->out = FUNC_0(VAR_6->zFilename, "a");
    if( VAR_6->out==0 ){
      FUNC_9(VAR_5);
      FUNC_5(VAR_6);
      return 0;
    }
    VAR_6->nFilename = VAR_3;
    VAR_6[1].out = VAR_6[0].out;
    VAR_6->ppPrev = &VAR_1;
    if( VAR_1 ) VAR_1->ppPrev = &VAR_6->pNext;
    VAR_6->pNext = VAR_1;
    VAR_1 = VAR_6;
  }
  FUNC_9(VAR_5);
  if( VAR_7 ){
    FUNC_5(VAR_7);
  }else{







  }
  if( VAR_6 && VAR_4 ) VAR_6++;
  VAR_6->nRef++;
  return VAR_6;
}
