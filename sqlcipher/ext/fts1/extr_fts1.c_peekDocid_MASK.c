
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {int iLastPos; int p; } ;
typedef TYPE_1__ DocListReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static sqlite_int64 FUNC_3(DocListReader *VAR_0){
  sqlite_int64 VAR_1;
  FUNC_0( !FUNC_1(VAR_0) );
  FUNC_0( VAR_0->iLastPos==-1 );
  FUNC_2(VAR_0->p, &VAR_1);
  return VAR_1;
}
