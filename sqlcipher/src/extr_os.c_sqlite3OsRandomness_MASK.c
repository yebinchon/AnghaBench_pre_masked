
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xRandomness ) (TYPE_1__*,int,char*) ;} ;
typedef TYPE_1__ sqlite3_vfs ;


 int FUNC_0 (TYPE_1__*,int,char*) ;

int FUNC_1(sqlite3_vfs *VAR_0, int VAR_1, char *VAR_2){
  return VAR_0->xRandomness(VAR_0, VAR_1, VAR_2);
}
