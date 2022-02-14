
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_cursor ;
struct TYPE_5__ {TYPE_1__* pDb; } ;
struct TYPE_4__ {int (* xCmp ) (void*,int,void*,int) ;} ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,void**,int*) ;
 int FUNC_1 (int (*) (void*,int,void*,int),int ,void*,int,int ,void*,int) ;

int FUNC_2(lsm_cursor *VAR_1, const void *VAR_2, int VAR_3, int *VAR_4){
  MultiCursor *VAR_5 = (MultiCursor *)VAR_1;
  void *VAR_6; int VAR_7;
  int VAR_8;
  VAR_8 = FUNC_0(VAR_5, &VAR_6, &VAR_7);
  if( VAR_8==VAR_0 ){
    int (*VAR_9)(void *, int, void *, int) = VAR_5->pDb->xCmp;
    *VAR_4 = FUNC_1(VAR_9, 0, VAR_6, VAR_7, 0, (void *)VAR_2, VAR_3);
  }
  return VAR_8;
}
