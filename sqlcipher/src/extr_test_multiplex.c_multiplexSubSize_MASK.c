
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_6__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
typedef int multiplexGroup ;
struct TYPE_5__ {int (* xFileSize ) (TYPE_2__*,int *) ;} ;


 TYPE_2__* FUNC_0 (int *,int,int*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static sqlite3_int64 FUNC_2(
  multiplexGroup *VAR_0,
  int VAR_1,
  int *VAR_2
){
  sqlite3_file *VAR_3;
  sqlite3_int64 VAR_4 = 0;

  if( *VAR_2 ) return 0;
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), 0);
  if( VAR_3==0 ) return 0;
  *VAR_2 = VAR_3->pMethods->xFileSize(VAR_3, &VAR_4);
  return VAR_4;
}
