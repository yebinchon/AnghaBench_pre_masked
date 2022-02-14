
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errMask; int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(sqlite3 *VAR_2, int VAR_3){



  FUNC_1(VAR_2->mutex);
  VAR_2->errMask = VAR_3 ? 0xffffffff : 0xff;
  FUNC_2(VAR_2->mutex);
  return VAR_1;
}
