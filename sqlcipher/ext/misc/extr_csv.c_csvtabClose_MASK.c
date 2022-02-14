
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_3__ {int rdr; } ;
typedef TYPE_1__ CsvCursor ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_1){
  CsvCursor *VAR_2 = (CsvCursor*)VAR_1;
  FUNC_1(VAR_2);
  FUNC_0(&VAR_2->rdr);
  FUNC_2(VAR_1);
  return VAR_0;
}
