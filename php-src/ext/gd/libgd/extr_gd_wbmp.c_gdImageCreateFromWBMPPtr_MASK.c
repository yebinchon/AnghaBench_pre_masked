
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_5__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,void*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

gdImagePtr FUNC_3 (int VAR_0, void *VAR_1)
{
 gdImagePtr VAR_2;
 gdIOCtx *VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 VAR_2 = FUNC_0(VAR_3);
 VAR_3->gd_free(VAR_3);
 return VAR_2;
}
