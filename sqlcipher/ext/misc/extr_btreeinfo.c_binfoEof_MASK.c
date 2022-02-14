
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ rc; } ;
typedef TYPE_1__ BinfoCursor ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_1){
  BinfoCursor *VAR_2 = (BinfoCursor *)VAR_1;
  return VAR_2->rc!=VAR_0;
}
