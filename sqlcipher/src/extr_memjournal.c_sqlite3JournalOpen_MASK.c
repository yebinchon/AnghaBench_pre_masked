
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_io_methods ;
typedef int sqlite3_file ;
struct TYPE_3__ {int nChunkSize; int nSpill; int flags; char const* zJournal; int * pVfs; int const* pMethod; } ;
typedef TYPE_1__ MemJournal ;
typedef int FileChunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,char const*,int *,int,int ) ;

int FUNC_4(
  sqlite3_vfs *VAR_3,
  const char *VAR_4,
  sqlite3_file *VAR_5,
  int VAR_6,
  int VAR_7
){
  MemJournal *VAR_8 = (MemJournal*)VAR_5;





  FUNC_2(VAR_8, 0, sizeof(MemJournal));
  if( VAR_7==0 ){
    return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, 0);
  }

  if( VAR_7>0 ){
    VAR_8->nChunkSize = VAR_7;
  }else{
    VAR_8->nChunkSize = 8 + VAR_0 - sizeof(FileChunk);
    FUNC_0( VAR_0==FUNC_1(VAR_8->nChunkSize) );
  }

  VAR_8->pMethod = (const sqlite3_io_methods*)&VAR_1;
  VAR_8->nSpill = VAR_7;
  VAR_8->flags = VAR_6;
  VAR_8->zJournal = VAR_4;
  VAR_8->pVfs = VAR_3;
  return VAR_2;
}
