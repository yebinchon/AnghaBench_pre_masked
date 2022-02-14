
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char const*,int,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,int,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(
  sqlite3 *VAR_4,
  const char *VAR_5,
  int VAR_6
){
  int VAR_7 = VAR_1;






  FUNC_4(VAR_4->mutex);
  if( FUNC_2(VAR_4, VAR_5, VAR_6, VAR_2, 0)==0 ){
    VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_2,
                           0, VAR_3, 0, 0, 0);
  }
  VAR_7 = FUNC_0(VAR_4, VAR_7);
  FUNC_5(VAR_4->mutex);
  return VAR_7;
}
