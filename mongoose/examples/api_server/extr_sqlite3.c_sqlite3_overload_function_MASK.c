
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char const*,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,int,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(
  sqlite3 *VAR_3,
  const char *VAR_4,
  int VAR_5
){
  int VAR_6 = FUNC_3(VAR_4);
  int VAR_7 = VAR_0;
  FUNC_4(VAR_3->mutex);
  if( FUNC_2(VAR_3, VAR_4, VAR_6, VAR_5, VAR_1, 0)==0 ){
    VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1,
                           0, VAR_2, 0, 0, 0);
  }
  VAR_7 = FUNC_0(VAR_3, VAR_7);
  FUNC_5(VAR_3->mutex);
  return VAR_7;
}
