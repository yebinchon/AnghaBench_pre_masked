
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_5__ {int (* gd_free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;
typedef int FILE ;


 int FUNC_0 (int ,int,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 (gdImagePtr VAR_0, int VAR_1, FILE * VAR_2)
{
 gdIOCtx *VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_3);
 VAR_3->gd_free(VAR_3);
}
