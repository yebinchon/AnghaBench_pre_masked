
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_4__ {int mutex; int lastRowid; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(sqlite3 *VAR_1, sqlite3_int64 VAR_2){






  FUNC_1(VAR_1->mutex);
  VAR_1->lastRowid = VAR_2;
  FUNC_2(VAR_1->mutex);
}
