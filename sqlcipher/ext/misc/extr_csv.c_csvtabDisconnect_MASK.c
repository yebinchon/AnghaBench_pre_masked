
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_3__ {struct TYPE_3__* zData; struct TYPE_3__* zFilename; } ;
typedef TYPE_1__ CsvTable ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab *VAR_1){
  CsvTable *VAR_2 = (CsvTable*)VAR_1;
  FUNC_0(VAR_2->zFilename);
  FUNC_0(VAR_2->zData);
  FUNC_0(VAR_2);
  return VAR_0;
}
