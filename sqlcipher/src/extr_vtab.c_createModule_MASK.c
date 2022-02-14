
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_module ;
struct TYPE_5__ {int mutex; int aModule; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int const*,void*,void (*) (void*)) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
  sqlite3 *VAR_2,
  const char *VAR_3,
  const sqlite3_module *VAR_4,
  void *VAR_5,
  void (*VAR_6)(void *)
){
  int VAR_7 = VAR_1;

  FUNC_3(VAR_2->mutex);
  if( FUNC_1(&VAR_2->aModule, VAR_3) ){
    VAR_7 = VAR_0;
  }else{
    (void)FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  }
  VAR_7 = FUNC_0(VAR_2, VAR_7);
  if( VAR_7!=VAR_1 && VAR_6 ) VAR_6(VAR_5);
  FUNC_4(VAR_2->mutex);
  return VAR_7;
}
