
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdSourcePtr ;
typedef int gdImagePtr ;
struct TYPE_5__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;

gdImagePtr FUNC_3(gdSourcePtr VAR_0)
{
 gdIOCtx *VAR_1 = FUNC_1(VAR_0, ((void*)0));
 gdImagePtr VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 VAR_1->gd_free(VAR_1);

 return VAR_2;
}
