
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_9__ {TYPE_1__* pMethods; } ;
struct TYPE_8__ {scalar_t__ rcErr; scalar_t__ szPage; TYPE_3__* pSrc; } ;
struct TYPE_7__ {int (* xRead ) (TYPE_3__*,int *,scalar_t__,int) ;} ;
typedef TYPE_2__ ScrubState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int *,scalar_t__,int) ;

__attribute__((used)) static u8 *FUNC_4(ScrubState *VAR_2, int VAR_3, u8 *VAR_4){
  int VAR_5;
  sqlite3_int64 VAR_6;
  u8 *VAR_7 = VAR_4;
  if( VAR_2->rcErr ) return 0;
  if( VAR_7==0 ){
    VAR_7 = FUNC_0(VAR_2);
    if( VAR_7==0 ) return 0;
  }
  VAR_6 = (VAR_3-1)*(sqlite3_int64)VAR_2->szPage;
  VAR_5 = VAR_2->pSrc->pMethods->xRead(VAR_2->pSrc, VAR_7, VAR_2->szPage, VAR_6);
  if( VAR_5!=VAR_1 ){
    if( VAR_4==0 ) FUNC_2(VAR_7);
    VAR_7 = 0;
    FUNC_1(VAR_2, "read failed for page %d", VAR_3);
    VAR_2->rcErr = VAR_0;
  }
  return VAR_7;
}
