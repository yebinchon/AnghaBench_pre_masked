
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ DemoFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_2, int VAR_3){
  DemoFile *VAR_4 = (DemoFile*)VAR_2;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_4);
  if( VAR_5!=VAR_1 ){
    return VAR_5;
  }

  VAR_5 = FUNC_1(VAR_4->fd);
  return (VAR_5==0 ? VAR_1 : VAR_0);
}
