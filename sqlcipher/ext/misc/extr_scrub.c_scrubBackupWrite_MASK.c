
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_int64 ;
struct TYPE_8__ {TYPE_1__* pMethods; } ;
struct TYPE_7__ {int iLastPage; scalar_t__ rcErr; scalar_t__ szPage; TYPE_3__* pDest; } ;
struct TYPE_6__ {int (* xWrite ) (TYPE_3__*,int const*,scalar_t__,int) ;} ;
typedef TYPE_2__ ScrubState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,int const*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(ScrubState *VAR_2, int VAR_3, const u8 *VAR_4){
  int VAR_5;
  sqlite3_int64 VAR_6;
  if( VAR_2->rcErr ) return;
  VAR_6 = (VAR_3-1)*(sqlite3_int64)VAR_2->szPage;
  VAR_5 = VAR_2->pDest->pMethods->xWrite(VAR_2->pDest, VAR_4, VAR_2->szPage, VAR_6);
  if( VAR_5!=VAR_1 ){
    FUNC_0(VAR_2, "write failed for page %d", VAR_3);
    VAR_2->rcErr = VAR_0;
  }
  if( (u32)VAR_3>VAR_2->iLastPage ) VAR_2->iLastPage = VAR_3;
}
