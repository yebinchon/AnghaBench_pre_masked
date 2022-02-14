
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* xCmp ) (void*,int,void*,int) ;} ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,void const*,int,void const*,int) ;
 scalar_t__ FUNC_1 (void*,int,void*,int) ;

int FUNC_2(
  lsm_db *VAR_1,
  const void *VAR_2, int VAR_3,
  const void *VAR_4, int VAR_5
){
  int VAR_6 = VAR_0;
  if( VAR_1->xCmp((void *)VAR_2, VAR_3, (void *)VAR_4, VAR_5)<0 ){
    VAR_6 = FUNC_0(VAR_1, 1, VAR_2, VAR_3, VAR_4, VAR_5);
  }
  return VAR_6;
}
