
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_6__ {int openFlags; TYPE_3__* pReal; scalar_t__ pRbu; } ;
typedef TYPE_2__ rbu_file ;
struct TYPE_7__ {TYPE_1__* pMethods; } ;
struct TYPE_5__ {int (* xTruncate ) (TYPE_3__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_2, sqlite_int64 VAR_3){
  rbu_file *VAR_4 = (rbu_file*)VAR_2;
  if( (VAR_4->openFlags & VAR_1) && VAR_4->pRbu ){
    int VAR_5 = FUNC_0(VAR_4, VAR_3);
    if( VAR_5!=VAR_0 ) return VAR_5;
  }
  return VAR_4->pReal->pMethods->xTruncate(VAR_4->pReal, VAR_3);
}
