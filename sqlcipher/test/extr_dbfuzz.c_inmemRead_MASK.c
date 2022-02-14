
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_3__ {TYPE_2__* pVFile; } ;
typedef TYPE_1__ VHandle ;
struct TYPE_4__ {scalar_t__ sz; scalar_t__ a; } ;
typedef TYPE_2__ VFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,scalar_t__,int) ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_file *VAR_2,
  void *VAR_3,
  int VAR_4,
  sqlite3_int64 VAR_5
){
  VHandle *VAR_6 = (VHandle*)VAR_2;
  VFile *VAR_7 = VAR_6->pVFile;
  if( VAR_5<0 || VAR_5>=VAR_7->sz ){
    FUNC_1(VAR_3, 0, VAR_4);
    return VAR_0;
  }
  if( VAR_5+VAR_4>VAR_7->sz ){
    FUNC_1(VAR_3, 0, VAR_4);
    VAR_4 = (int)(VAR_7->sz - VAR_5);
    FUNC_0(VAR_3, VAR_7->a, VAR_4);
    return VAR_0;
  }
  FUNC_0(VAR_3, VAR_7->a + VAR_5, VAR_4);
  return VAR_1;
}
