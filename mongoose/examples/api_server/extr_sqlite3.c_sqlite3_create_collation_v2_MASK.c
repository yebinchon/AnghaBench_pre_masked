
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int mutex; int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,int ,void*,int (*) (void*,int,void const*,int,void const*),void (*) (void*)) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(
  sqlite3* VAR_0,
  const char *VAR_1,
  int VAR_2,
  void* VAR_3,
  int(*VAR_4)(void*,int,const void*,int,const void*),
  void(*VAR_5)(void*)
){
  int VAR_6;
  FUNC_3(VAR_0->mutex);
  FUNC_0( !VAR_0->mallocFailed );
  VAR_6 = FUNC_1(VAR_0, VAR_1, (u8)VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_6 = FUNC_2(VAR_0, VAR_6);
  FUNC_4(VAR_0->mutex);
  return VAR_6;
}
