
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_8__ {scalar_t__ err; int replies; TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;

void FUNC_5(redisAsyncContext *VAR_3) {
    redisContext *VAR_4 = &(VAR_3->c);


    FUNC_1(VAR_3);

    if (VAR_3->err == 0) {

        int VAR_5 = FUNC_3(&VAR_3->replies,((void*)0));
        FUNC_4(VAR_5 == VAR_1);
    } else {


        VAR_4->flags |= VAR_0;
    }



    FUNC_0(VAR_3);



    if (!(VAR_4->flags & VAR_2)) {
      FUNC_2(VAR_3);
    }
}
