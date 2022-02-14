
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_6__ {TYPE_2__* pData; } ;
struct TYPE_4__ {int eLock; } ;
struct TYPE_5__ {TYPE_1__ lock; } ;
typedef TYPE_3__ AsyncFile ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_3, int VAR_4, void *VAR_5){
  switch( VAR_4 ){
    case 128: {
      FUNC_0(VAR_0);
      *(int*)VAR_5 = ((AsyncFile*)VAR_3)->pData->lock.eLock;
      FUNC_1(VAR_0);
      return VAR_2;
    }
  }
  return VAR_1;
}
