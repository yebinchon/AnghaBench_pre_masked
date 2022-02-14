
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_5__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;
typedef int FILE ;


 int FUNC_0 (int ,TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (gdImagePtr VAR_0, FILE * VAR_1, int VAR_2, int VAR_3)
{
 gdIOCtx *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3);

 VAR_4->gd_free(VAR_4);
}
