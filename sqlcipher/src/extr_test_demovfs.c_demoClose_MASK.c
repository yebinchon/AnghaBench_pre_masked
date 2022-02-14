
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_3__ {int fd; int aBuffer; } ;
typedef TYPE_1__ DemoFile ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_0){
  int VAR_1;
  DemoFile *VAR_2 = (DemoFile*)VAR_0;
  VAR_1 = FUNC_1(VAR_2);
  FUNC_2(VAR_2->aBuffer);
  FUNC_0(VAR_2->fd);
  return VAR_1;
}
