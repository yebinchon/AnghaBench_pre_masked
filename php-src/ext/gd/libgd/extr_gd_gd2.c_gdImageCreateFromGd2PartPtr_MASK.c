
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_5__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (TYPE_1__*,int,int,int,int) ;
 TYPE_1__* FUNC_1 (int,void*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

gdImagePtr FUNC_3 (int VAR_0, void *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 gdImagePtr VAR_6;
 gdIOCtx *VAR_7 = FUNC_1(VAR_0, VAR_1, 0);
 VAR_6 = FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7->gd_free(VAR_7);

 return VAR_6;
}
