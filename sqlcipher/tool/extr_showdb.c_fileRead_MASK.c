
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_6__ {scalar_t__ bRaw; int dbfd; TYPE_2__* pFd; } ;
struct TYPE_5__ {TYPE_1__* pMethods; } ;
struct TYPE_4__ {int (* xRead ) (TYPE_2__*,void*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int ,long,int ) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,unsigned char*,int) ;
 unsigned char* FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*,void*,int,scalar_t__) ;

__attribute__((used)) static unsigned char *FUNC_8(sqlite3_int64 VAR_5, int VAR_6){
  unsigned char *VAR_7;
  int VAR_8;
  VAR_7 = FUNC_6(VAR_6+32);
  if( VAR_7==0 ) FUNC_4();
  FUNC_3(VAR_7, 0, VAR_6+32);
  if( VAR_3.bRaw==0 ){
    int VAR_9 = VAR_3.pFd->pMethods->xRead(VAR_3.pFd, (void*)VAR_7, VAR_6, VAR_5);
    if( VAR_9!=VAR_2 && VAR_9!=VAR_1 ){
      FUNC_1(VAR_4, "error in xRead() - %d\n", VAR_9);
      FUNC_0(1);
    }
  }else{
    FUNC_2(VAR_3.dbfd, (long)VAR_5, VAR_0);
    VAR_8 = FUNC_5(VAR_3.dbfd, VAR_7, VAR_6);
    if( VAR_8>0 && VAR_8<VAR_6 ) FUNC_3(VAR_7+VAR_8, 0, VAR_6-VAR_8);
  }
  return VAR_7;
}
