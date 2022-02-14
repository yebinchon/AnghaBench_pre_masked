
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_2__ {int aData; scalar_t__ bFreeOnClose; } ;
typedef TYPE_1__ MemFile ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_file *VAR_1){
  MemFile *VAR_2 = (MemFile *)VAR_1;
  if( VAR_2->bFreeOnClose ) FUNC_0(VAR_2->aData);
  return VAR_0;
}
