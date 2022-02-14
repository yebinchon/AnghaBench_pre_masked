
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int syncFlags; int fd; int noSync; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(Pager *VAR_4, const char *VAR_5){
  int VAR_6 = VAR_3;
  void *VAR_7 = (void*)VAR_5;
  VAR_6 = FUNC_1(VAR_4->fd, VAR_1, VAR_7);
  if( VAR_6==VAR_2 ) VAR_6 = VAR_3;
  if( VAR_6==VAR_3 && !VAR_4->noSync ){
    FUNC_0( !VAR_0 );
    VAR_6 = FUNC_2(VAR_4->fd, VAR_4->syncFlags);
  }
  return VAR_6;
}
