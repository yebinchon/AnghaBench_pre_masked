
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* xAccess ) (TYPE_2__*,char const*,int,int*) ;} ;
typedef TYPE_2__ sqlite3_vfs ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_11__ {TYPE_2__* pRealVfs; } ;
typedef TYPE_3__ rbu_vfs ;
struct TYPE_12__ {int base; TYPE_1__* pRbu; } ;
typedef TYPE_4__ rbu_file ;
struct TYPE_9__ {scalar_t__ eStage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,char const*,int) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,char const*,int,int*) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vfs *VAR_4,
  const char *VAR_5,
  int VAR_6,
  int *VAR_7
){
  rbu_vfs *VAR_8 = (rbu_vfs*)VAR_4;
  sqlite3_vfs *VAR_9 = VAR_8->pRealVfs;
  int VAR_10;

  VAR_10 = VAR_9->xAccess(VAR_9, VAR_5, VAR_6, VAR_7);
  if( VAR_10==VAR_3 && VAR_6==VAR_1 ){
    rbu_file *VAR_11 = FUNC_0(VAR_8, VAR_5, 1);
    if( VAR_11 && VAR_11->pRbu && VAR_11->pRbu->eStage==VAR_0 ){
      if( *VAR_7 ){
        VAR_10 = VAR_2;
      }else{
        sqlite3_int64 VAR_12 = 0;
        VAR_10 = FUNC_1(&VAR_11->base, &VAR_12);
        *VAR_7 = (VAR_12>0);
      }
    }
  }

  return VAR_10;
}
