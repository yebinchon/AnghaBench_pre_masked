
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int quotaGroup ;
typedef int quotaFile ;
struct TYPE_13__ {int szOsFile; int mxPathname; } ;
struct TYPE_14__ {TYPE_7__ sThisVfs; TYPE_5__* pOrigVfs; } ;
struct TYPE_12__ {int (* xFullPathname ) (TYPE_5__*,char const*,int,char*) ;} ;
struct TYPE_10__ {int (* xClose ) (TYPE_2__*) ;int (* xFileSize ) (TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_7__*,char*,TYPE_2__*,int,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_5__*,char const*,int,char*) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*) ;

int FUNC_12(const char *VAR_6){
  char *VAR_7 = 0;
  sqlite3_file *VAR_8;
  int VAR_9;
  int VAR_10 = 0;
  sqlite3_int64 VAR_11;
  int VAR_12 = VAR_5.sThisVfs.szOsFile + VAR_5.sThisVfs.mxPathname+2;


  VAR_8 = (sqlite3_file *)FUNC_7(VAR_12);
  if( VAR_8==0 ){
    VAR_9 = VAR_1;
  }else{
    VAR_7 = &((char *)VAR_8)[VAR_5.sThisVfs.szOsFile];
    VAR_9 = VAR_5.pOrigVfs->xFullPathname(VAR_5.pOrigVfs, VAR_6,
        VAR_5.sThisVfs.mxPathname+1, VAR_7);
  }

  if( VAR_9==VAR_2 ){
    VAR_7[FUNC_8(VAR_7)+1] = '\0';
    VAR_9 = FUNC_4(&VAR_5.sThisVfs, VAR_7, VAR_8,
                   VAR_4 | VAR_3, &VAR_10);
    if( VAR_9==VAR_2 ){
      VAR_8->pMethods->xFileSize(VAR_8, &VAR_11);
      VAR_8->pMethods->xClose(VAR_8);
    }else if( VAR_9==VAR_0 ){
      quotaGroup *VAR_13;
      quotaFile *VAR_14;
      FUNC_0();
      VAR_13 = FUNC_2(VAR_7);
      if( VAR_13 ){
        VAR_14 = FUNC_1(VAR_13, VAR_7, 0);
        if( VAR_14 ) FUNC_5(VAR_14);
      }
      FUNC_3();
    }
  }

  FUNC_6(VAR_8);
  return VAR_9;
}
