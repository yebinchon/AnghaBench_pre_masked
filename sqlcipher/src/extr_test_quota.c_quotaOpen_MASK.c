
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


struct TYPE_23__ {int (* xOpen ) (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;} ;
typedef TYPE_3__ sqlite3_vfs ;
struct TYPE_24__ {TYPE_1__* pMethods; } ;
typedef TYPE_4__ sqlite3_file ;
typedef int quotaGroup ;
struct TYPE_25__ {int deleteOnClose; int nRef; } ;
typedef TYPE_5__ quotaFile ;
struct TYPE_22__ {int * pMethods; } ;
struct TYPE_26__ {TYPE_2__ base; TYPE_5__* pFile; } ;
typedef TYPE_6__ quotaConn ;
struct TYPE_21__ {int iVersion; int (* xClose ) (TYPE_4__*) ;} ;
struct TYPE_20__ {int sIoMethodsV2; int sIoMethodsV1; TYPE_3__* pOrigVfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_19__ VAR_5 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (int *,char const*,int) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 () ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;
 int FUNC_6 (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;
 int FUNC_7 (TYPE_3__*,char const*,TYPE_4__*,int,int*) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9(
  sqlite3_vfs *VAR_6,
  const char *VAR_7,
  sqlite3_file *VAR_8,
  int VAR_9,
  int *VAR_10
){
  int VAR_11;
  quotaConn *VAR_12;
  quotaFile *VAR_13;
  quotaGroup *VAR_14;
  sqlite3_file *VAR_15;
  sqlite3_vfs *VAR_16 = VAR_5.pOrigVfs;




  if( (VAR_9 & (VAR_3|VAR_4))==0 ){
    return VAR_16->xOpen(VAR_16, VAR_7, VAR_8, VAR_9, VAR_10);
  }




  FUNC_0();
  VAR_14 = FUNC_2(VAR_7);
  if( VAR_14==0 ){
    VAR_11 = VAR_16->xOpen(VAR_16, VAR_7, VAR_8, VAR_9, VAR_10);
  }else{


    VAR_12 = (quotaConn*)VAR_8;
    VAR_15 = FUNC_4(VAR_8);
    VAR_11 = VAR_16->xOpen(VAR_16, VAR_7, VAR_15, VAR_9, VAR_10);
    if( VAR_11==VAR_1 ){
      VAR_13 = FUNC_1(VAR_14, VAR_7, 1);
      if( VAR_13==0 ){
        FUNC_3();
        VAR_15->pMethods->xClose(VAR_15);
        return VAR_0;
      }
      VAR_13->deleteOnClose = (VAR_9 & VAR_2)!=0;
      VAR_13->nRef++;
      VAR_12->pFile = VAR_13;
      if( VAR_15->pMethods->iVersion==1 ){
        VAR_12->base.pMethods = &VAR_5.sIoMethodsV1;
      }else{
        VAR_12->base.pMethods = &VAR_5.sIoMethodsV2;
      }
    }
  }
  FUNC_3();
  return VAR_11;
}
