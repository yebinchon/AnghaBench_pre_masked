
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_4__ {TYPE_1__* pOrigVfs; } ;
struct TYPE_3__ {int (* xGetLastError ) (TYPE_1__*,int,char*) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,char*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vfs *VAR_1, int VAR_2, char *VAR_3){
  if( VAR_0.pOrigVfs->xGetLastError ){
    return VAR_0.pOrigVfs->xGetLastError(VAR_0.pOrigVfs, VAR_2, VAR_3);
  }else{
    return 0;
  }
}
