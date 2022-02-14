
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deviceCharacteristics; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_0){
  unixFile *VAR_1 = (unixFile*)VAR_0;
  FUNC_0(VAR_1);
  return VAR_1->deviceCharacteristics;
}
