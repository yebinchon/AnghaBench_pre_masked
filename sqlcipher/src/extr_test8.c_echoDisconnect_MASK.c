
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_2__ {int interp; } ;
typedef TYPE_1__ echo_vtab ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_0){
  FUNC_0(((echo_vtab *)VAR_0)->interp, "xDisconnect");
  return FUNC_1(VAR_0);
}
