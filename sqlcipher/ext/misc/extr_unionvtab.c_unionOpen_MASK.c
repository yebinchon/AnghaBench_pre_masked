
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_2__ {int base; } ;
typedef TYPE_1__ UnionCsr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_1, sqlite3_vtab_cursor **VAR_2){
  UnionCsr *VAR_3;
  int VAR_4 = VAR_0;
  (void)VAR_1;
  VAR_3 = (UnionCsr*)FUNC_0(&VAR_4, sizeof(UnionCsr));
  *VAR_2 = &VAR_3->base;
  return VAR_4;
}
