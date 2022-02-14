
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_3__ {scalar_t__ nRef; int sz; scalar_t__ a; scalar_t__ zFilename; } ;
typedef TYPE_1__ VFile ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_vfs *VAR_2,
  const char *VAR_3,
  int VAR_4
){
  VFile *VAR_5 = FUNC_0(VAR_3);
  if( VAR_5==0 ) return VAR_1;
  if( VAR_5->nRef==0 ){
    FUNC_1(VAR_5->zFilename);
    VAR_5->zFilename = 0;
    VAR_5->sz = -1;
    FUNC_1(VAR_5->a);
    VAR_5->a = 0;
    return VAR_1;
  }
  return VAR_0;
}
