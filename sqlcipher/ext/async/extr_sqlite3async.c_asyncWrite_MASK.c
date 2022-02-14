
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int sqlite3_file ;
struct TYPE_2__ {int * pData; } ;
typedef int AsyncFileData ;
typedef TYPE_1__ AsyncFile ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int,void const*) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_file *VAR_1,
  const void *VAR_2,
  int VAR_3,
  sqlite3_int64 VAR_4
){
  AsyncFileData *VAR_5 = ((AsyncFile *)VAR_1)->pData;
  return FUNC_0(VAR_5, VAR_0, VAR_4, VAR_3, VAR_2);
}
