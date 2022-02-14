
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char const*,int,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int ,char*,int ,int ,int ,int ) ;
 int VAR_5 ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(
  sqlite3 *VAR_6,
  const char *VAR_7,
  int VAR_8
){
  int VAR_9;
  char *VAR_10;






  FUNC_4(VAR_6->mutex);
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_3, 0)!=0;
  FUNC_5(VAR_6->mutex);
  if( VAR_9 ) return VAR_2;
  VAR_10 = FUNC_3(VAR_7);
  if( VAR_10==0 ) return VAR_1;
  return FUNC_2(VAR_6, VAR_7, VAR_8, VAR_3,
                           VAR_10, VAR_4, 0, 0, VAR_5);
}
