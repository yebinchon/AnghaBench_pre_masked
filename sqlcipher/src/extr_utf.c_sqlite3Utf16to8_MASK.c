
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
typedef int m ;
struct TYPE_9__ {char* z; int flags; TYPE_1__* db; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,void const*,int,int ,int ) ;

char *FUNC_5(sqlite3 *VAR_4, const void *VAR_5, int VAR_6, u8 VAR_7){
  Mem VAR_8;
  FUNC_1(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.db = VAR_4;
  FUNC_4(&VAR_8, VAR_5, VAR_6, VAR_7, VAR_2);
  FUNC_2(&VAR_8, VAR_3);
  if( VAR_4->mallocFailed ){
    FUNC_3(&VAR_8);
    VAR_8.z = 0;
  }
  FUNC_0( (VAR_8.flags & VAR_1)!=0 || VAR_4->mallocFailed );
  FUNC_0( (VAR_8.flags & VAR_0)!=0 || VAR_4->mallocFailed );
  FUNC_0( VAR_8.z || VAR_4->mallocFailed );
  return VAR_8.z;
}
