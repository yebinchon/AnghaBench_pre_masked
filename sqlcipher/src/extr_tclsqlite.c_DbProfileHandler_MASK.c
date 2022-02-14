
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zTm ;
typedef int sqlite_uint64 ;
typedef int Tcl_DString ;
struct TYPE_2__ {int interp; int zProfile; } ;
typedef TYPE_1__ SqliteDb ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,char*,int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, const char *VAR_1, sqlite_uint64 VAR_2){
  SqliteDb *VAR_3 = (SqliteDb*)VAR_0;
  Tcl_DString VAR_4;
  char VAR_5[100];

  FUNC_7(sizeof(VAR_5)-1, VAR_5, "%lld", VAR_2);
  FUNC_3(&VAR_4);
  FUNC_0(&VAR_4, VAR_3->zProfile, -1);
  FUNC_1(&VAR_4, VAR_1);
  FUNC_1(&VAR_4, VAR_5);
  FUNC_5(VAR_3->interp, FUNC_4(&VAR_4));
  FUNC_2(&VAR_4);
  FUNC_6(VAR_3->interp);
}
