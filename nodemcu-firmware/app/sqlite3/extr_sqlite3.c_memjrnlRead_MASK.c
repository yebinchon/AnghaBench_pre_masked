
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ sqlite_int64 ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_9__ {scalar_t__ zChunk; struct TYPE_9__* pNext; } ;
struct TYPE_7__ {scalar_t__ iOffset; TYPE_4__* pChunk; } ;
struct TYPE_6__ {scalar_t__ iOffset; } ;
struct TYPE_8__ {scalar_t__ nChunkSize; TYPE_2__ readpoint; TYPE_4__* pFirst; TYPE_1__ endpoint; } ;
typedef TYPE_3__ MemJournal ;
typedef TYPE_4__ FileChunk ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_file *VAR_2,
  void *VAR_3,
  int VAR_4,
  sqlite_int64 VAR_5
){
  MemJournal *VAR_6 = (MemJournal *)VAR_2;
  u8 *VAR_7 = VAR_3;
  int VAR_8 = VAR_4;
  int VAR_9;
  FileChunk *VAR_10;







  FUNC_2( (VAR_4+VAR_5)<=VAR_6->endpoint.iOffset );
  FUNC_2( VAR_6->readpoint.iOffset==0 || VAR_6->readpoint.pChunk!=0 );
  if( VAR_6->readpoint.iOffset!=VAR_5 || VAR_5==0 ){
    sqlite3_int64 VAR_11 = 0;
    for(VAR_10=VAR_6->pFirst;
        FUNC_0(VAR_10) && (VAR_11+VAR_6->nChunkSize)<=VAR_5;
        VAR_10=VAR_10->pNext
    ){
      VAR_11 += VAR_6->nChunkSize;
    }
  }else{
    VAR_10 = VAR_6->readpoint.pChunk;
    FUNC_2( VAR_10!=0 );
  }

  VAR_9 = (int)(VAR_5%VAR_6->nChunkSize);
  do {
    int VAR_12 = VAR_6->nChunkSize - VAR_9;
    int VAR_13 = FUNC_1(VAR_8, (VAR_6->nChunkSize - VAR_9));
    FUNC_3(VAR_7, (u8*)VAR_10->zChunk + VAR_9, VAR_13);
    VAR_7 += VAR_13;
    VAR_8 -= VAR_12;
    VAR_9 = 0;
  } while( VAR_8>=0 && (VAR_10=VAR_10->pNext)!=0 && VAR_8>0 );
  VAR_6->readpoint.iOffset = VAR_10 ? VAR_5+VAR_4 : 0;
  VAR_6->readpoint.pChunk = VAR_10;

  return VAR_1;
}
