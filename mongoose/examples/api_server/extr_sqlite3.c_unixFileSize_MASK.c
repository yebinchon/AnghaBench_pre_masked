
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lastErrno; int h; } ;
typedef TYPE_1__ unixFile ;
struct stat {int st_size; } ;
typedef int sqlite3_file ;
typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_3, i64 *VAR_4){
  int VAR_5;
  struct stat VAR_6;
  FUNC_1( VAR_3 );
  VAR_5 = FUNC_2(((unixFile*)VAR_3)->h, &VAR_6);
  FUNC_0( VAR_5=1 );
  if( VAR_5!=0 ){
    ((unixFile*)VAR_3)->lastErrno = VAR_2;
    return VAR_0;
  }
  *VAR_4 = VAR_6.st_size;







  if( *VAR_4==1 ) *VAR_4 = 0;


  return VAR_1;
}
