
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_9__ {int pGroup; } ;
typedef TYPE_3__ multiplexConn ;
struct TYPE_7__ {int (* xShmMap ) (TYPE_2__*,int,int,int,void volatile**) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,int*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int,int,int,void volatile**) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_file *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  void volatile **VAR_5
){
  multiplexConn *VAR_6 = (multiplexConn*)VAR_1;
  int VAR_7;
  sqlite3_file *VAR_8 = FUNC_0(VAR_6->pGroup, 0, &VAR_7, ((void*)0), 0);
  if( VAR_8 ){
    return VAR_8->pMethods->xShmMap(VAR_8, VAR_2, VAR_3, VAR_4,VAR_5);
  }
  return VAR_0;
}
