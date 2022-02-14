
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_6__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int ,TYPE_1__*) ;
 void* FUNC_1 (TYPE_1__*,int*) ;
 TYPE_1__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*) ;

void *FUNC_4 (gdImagePtr VAR_0, int *VAR_1)
{
 void *VAR_2;
 gdIOCtx *VAR_3 = FUNC_2(2048, ((void*)0));
 FUNC_0(VAR_0, VAR_3);
 VAR_2 = FUNC_1(VAR_3, VAR_1);
 VAR_3->gd_free(VAR_3);
 return VAR_2;
}
