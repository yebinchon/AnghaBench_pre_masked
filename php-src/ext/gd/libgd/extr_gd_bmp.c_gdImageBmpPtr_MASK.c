
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_6__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 void* FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*) ;

void * FUNC_4(gdImagePtr VAR_0, int *VAR_1, int VAR_2)
{
 void *VAR_3;
 gdIOCtx *VAR_4 = FUNC_2(2048, ((void*)0));
 if (VAR_4 == ((void*)0)) return ((void*)0);
 FUNC_1(VAR_0, VAR_4, VAR_2);
 VAR_3 = FUNC_0(VAR_4, VAR_1);
 VAR_4->gd_free(VAR_4);
 return VAR_3;
}
