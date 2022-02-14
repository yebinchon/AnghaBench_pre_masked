
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
struct TYPE_10__ {scalar_t__ nDatabase; scalar_t__ nJournal; int nBlob; TYPE_2__* pFile; } ;
typedef TYPE_3__ fs_real_file ;
struct TYPE_11__ {scalar_t__ eType; TYPE_3__* pReal; } ;
typedef TYPE_4__ fs_file ;
struct TYPE_8__ {int (* xRead ) (TYPE_2__*,void*,int,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,void*,int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_file *VAR_5,
  void *VAR_6,
  int VAR_7,
  sqlite_int64 VAR_8
){
  int VAR_9 = VAR_4;
  fs_file *VAR_10 = (fs_file *)VAR_5;
  fs_real_file *VAR_11 = VAR_10->pReal;
  sqlite3_file *VAR_12 = VAR_11->pFile;

  if( (VAR_10->eType==VAR_1 && (VAR_7+VAR_8)>VAR_11->nDatabase)
   || (VAR_10->eType==VAR_2 && (VAR_7+VAR_8)>VAR_11->nJournal)
  ){
    VAR_9 = VAR_3;
  }else if( VAR_10->eType==VAR_1 ){
    VAR_9 = VAR_12->pMethods->xRead(VAR_12, VAR_6, VAR_7, VAR_8+VAR_0);
  }else{

    int VAR_13 = VAR_7;
    int VAR_14 = 0;
    int VAR_15 = (int)VAR_8;
    while( VAR_13>0 && VAR_9==VAR_4 ){
      int VAR_16 = VAR_11->nBlob - VAR_0*((VAR_15/VAR_0)+1) + VAR_15%VAR_0;
      int VAR_17 = FUNC_0(VAR_13, VAR_0 - (VAR_16%VAR_0));

      VAR_9 = VAR_12->pMethods->xRead(VAR_12, &((char *)VAR_6)[VAR_14], VAR_17, VAR_16);
      VAR_15 += VAR_17;
      VAR_14 += VAR_17;
      VAR_13 -= VAR_17;
    }
  }

  return VAR_9;
}
