
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xDelete ) (TYPE_1__*,char const*,int ) ;} ;
typedef TYPE_1__ sqlite3_vfs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,char const*,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_vfs *VAR_6,
  const char *VAR_7,
  int *VAR_8
){
  int VAR_9 = VAR_2;
  FUNC_1( VAR_6==0 );
  VAR_9 = FUNC_0(VAR_7, VAR_1);
  if( VAR_9 ){
    if( VAR_5==VAR_0 ){
      if( VAR_8 ) *VAR_8 = 0;
      VAR_9 = VAR_4;
    }
  }else{
    if( VAR_8 ) *VAR_8 = 1;
    VAR_9 = FUNC_3(VAR_7);
  }

  return VAR_9;
}
