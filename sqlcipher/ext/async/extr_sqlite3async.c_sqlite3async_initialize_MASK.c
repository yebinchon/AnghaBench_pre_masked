
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mxPathname; } ;
typedef TYPE_1__ sqlite3_vfs ;
struct TYPE_6__ {void* pAppData; int mxPathname; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,int) ;

int FUNC_4(const char *VAR_3, int VAR_4){
  int VAR_5 = VAR_1;
  if( VAR_2.pAppData==0 ){
    sqlite3_vfs *VAR_6 = FUNC_2(VAR_3);
    if( !VAR_6 || FUNC_0() ){
      VAR_5 = VAR_0;
    }else if( VAR_1!=(VAR_5 = FUNC_3(&VAR_2, VAR_4)) ){
      FUNC_1();
    }else{
      VAR_2.pAppData = (void *)VAR_6;
      VAR_2.mxPathname = ((sqlite3_vfs *)VAR_2.pAppData)->mxPathname;
    }
  }
  return VAR_5;
}
