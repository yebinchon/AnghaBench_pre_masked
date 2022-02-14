
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int sqlite3 ;
struct TYPE_5__ {int (* xShmMap ) (TYPE_2__*,int ,int,int,void volatile**) ;} ;
typedef int SuperlockBusy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int *,char*,int ,void*) ;
 int FUNC_2 (TYPE_2__*,int ,int,int,void volatile**) ;
 int FUNC_3 (TYPE_2__*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_3,
  SuperlockBusy *VAR_4
){
  int VAR_5;
  sqlite3_file *VAR_6 = 0;
  void volatile *VAR_7 = 0;


  VAR_5 = FUNC_1(VAR_3, "main", VAR_0, (void *)&VAR_6);
  if( VAR_5!=VAR_1 ) return VAR_5;




  VAR_5 = FUNC_3(VAR_6, 2, 1, VAR_4);
  if( VAR_5!=VAR_1 ) return VAR_5;
  VAR_5 = VAR_6->pMethods->xShmMap(VAR_6, 0, 32*1024, 1, &VAR_7);
  if( VAR_5!=VAR_1 ) return VAR_5;
  FUNC_0((void *)VAR_7, 0, 32);





  VAR_5 = FUNC_3(VAR_6, 3, VAR_2-3, VAR_4);
  return VAR_5;
}
