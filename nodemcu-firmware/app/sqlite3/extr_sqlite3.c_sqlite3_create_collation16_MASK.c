
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int mutex; int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,void*,int (*) (void*,int,void const*,int,void const*),int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (TYPE_1__*,void const*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(
  sqlite3* VAR_3,
  const void *VAR_4,
  int VAR_5,
  void* VAR_6,
  int(*VAR_7)(void*,int,const void*,int,const void*)
){
  int VAR_8 = VAR_1;
  char *VAR_9;




  FUNC_6(VAR_3->mutex);
  FUNC_0( !VAR_3->mallocFailed );
  VAR_9 = FUNC_5(VAR_3, VAR_4, -1, VAR_2);
  if( VAR_9 ){
    VAR_8 = FUNC_1(VAR_3, VAR_9, (u8)VAR_5, VAR_6, VAR_7, 0);
    FUNC_3(VAR_3, VAR_9);
  }
  VAR_8 = FUNC_2(VAR_3, VAR_8);
  FUNC_7(VAR_3->mutex);
  return VAR_8;
}
