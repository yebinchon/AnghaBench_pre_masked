
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_10__ {scalar_t__ nBlob; scalar_t__ nJournal; int nDatabase; TYPE_2__* pFile; } ;
typedef TYPE_3__ fs_real_file ;
struct TYPE_11__ {scalar_t__ eType; TYPE_3__* pReal; } ;
typedef TYPE_4__ fs_file ;
struct TYPE_8__ {int (* xWrite ) (TYPE_2__*,void const*,int,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,void const*,int,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_file *VAR_4,
  const void *VAR_5,
  int VAR_6,
  sqlite_int64 VAR_7
){
  int VAR_8 = VAR_3;
  fs_file *VAR_9 = (fs_file *)VAR_4;
  fs_real_file *VAR_10 = VAR_9->pReal;
  sqlite3_file *VAR_11 = VAR_10->pFile;

  if( VAR_9->eType==VAR_1 ){
    if( (VAR_6+VAR_7+VAR_0)>(VAR_10->nBlob-VAR_10->nJournal) ){
      VAR_8 = VAR_2;
    }else{
      VAR_8 = VAR_11->pMethods->xWrite(VAR_11, VAR_5, VAR_6, VAR_7+VAR_0);
      if( VAR_8==VAR_3 ){
        VAR_10->nDatabase = (int)FUNC_0(VAR_10->nDatabase, VAR_6+VAR_7);
      }
    }
  }else{

    int VAR_12 = VAR_6;
    int VAR_13 = 0;
    int VAR_14 = (int)VAR_7;
    while( VAR_12>0 && VAR_8==VAR_3 ){
      int VAR_15 = VAR_10->nBlob - VAR_0*((VAR_14/VAR_0)+1) + VAR_14%VAR_0;
      int VAR_16 = FUNC_1(VAR_12, VAR_0 - (VAR_15%VAR_0));

      if( VAR_15<(VAR_10->nDatabase+VAR_0) ){
        VAR_8 = VAR_2;
      }else{
        VAR_8 = VAR_11->pMethods->xWrite(VAR_11, &((char *)VAR_5)[VAR_13], VAR_16,VAR_15);
        VAR_14 += VAR_16;
        VAR_13 += VAR_16;
        VAR_12 -= VAR_16;
      }
    }
    if( VAR_8==VAR_3 ){
      VAR_10->nJournal = (int)FUNC_0(VAR_10->nJournal, VAR_6+VAR_7);
    }
  }

  return VAR_8;
}
