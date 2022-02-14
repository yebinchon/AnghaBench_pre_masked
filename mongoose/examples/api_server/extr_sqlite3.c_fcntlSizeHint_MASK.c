
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int szChunk; scalar_t__ mmapSizeMax; int mmapSize; int zPath; void* lastErrno; int h; } ;
typedef TYPE_1__ unixFile ;
struct stat {int st_size; int st_blksize; } ;
typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(unixFile *VAR_6, i64 VAR_7){
  if( VAR_6->szChunk>0 ){
    i64 VAR_8;
    struct stat VAR_9;

    if( FUNC_1(VAR_6->h, &VAR_9) ) return VAR_1;

    VAR_8 = ((VAR_7+VAR_6->szChunk-1) / VAR_6->szChunk) * VAR_6->szChunk;
    if( VAR_8>(i64)VAR_9.st_size ){
      int VAR_10 = VAR_9.st_blksize;
      i64 VAR_11;

      if( FUNC_2(VAR_6->h, VAR_8) ){
        VAR_6->lastErrno = VAR_5;
        return FUNC_4(VAR_2, "ftruncate", VAR_6->zPath);
      }
      VAR_11 = ((VAR_9.st_size + 2*VAR_10 - 1)/VAR_10)*VAR_10-1;
      while( VAR_11<VAR_8 ){
        int VAR_12 = FUNC_3(VAR_6, VAR_11, "", 1);
        if( VAR_12!=1 ) return VAR_3;
        VAR_11 += VAR_10;
      }

    }
  }

  if( VAR_6->mmapSizeMax>0 && VAR_7>VAR_6->mmapSize ){
    int VAR_13;
    if( VAR_6->szChunk<=0 ){
      if( FUNC_2(VAR_6->h, VAR_7) ){
        VAR_6->lastErrno = VAR_5;
        return FUNC_4(VAR_2, "ftruncate", VAR_6->zPath);
      }
    }

    VAR_13 = FUNC_5(VAR_6, VAR_7);
    return VAR_13;
  }

  return VAR_4;
}
