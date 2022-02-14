
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zsl; int dict; } ;
typedef TYPE_1__ zset ;
struct TYPE_8__ {int encoding; } ;
typedef TYPE_2__ robj ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 () ;

robj *FUNC_4(void) {
    zset *VAR_3 = FUNC_2(sizeof(*VAR_3));
    robj *VAR_4;

    VAR_3->dict = FUNC_1(&VAR_2,((void*)0));
    VAR_3->zsl = FUNC_3();
    VAR_4 = FUNC_0(VAR_1,VAR_3);
    VAR_4->encoding = VAR_0;
    return VAR_4;
}
