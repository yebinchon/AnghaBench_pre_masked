
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,void**) ;

int FUNC_3(redisContext *VAR_3, void **VAR_4) {
    int VAR_5 = 0;
    void *VAR_6 = ((void*)0);


    if (FUNC_2(VAR_3,&VAR_6) == VAR_1)
        return VAR_1;


    if (VAR_6 == ((void*)0) && VAR_3->flags & VAR_0) {

        do {
            if (FUNC_1(VAR_3,&VAR_5) == VAR_1)
                return VAR_1;
        } while (!VAR_5);


        do {
            if (FUNC_0(VAR_3) == VAR_1)
                return VAR_1;
            if (FUNC_2(VAR_3,&VAR_6) == VAR_1)
                return VAR_1;
        } while (VAR_6 == ((void*)0));
    }


    if (VAR_4 != ((void*)0)) *VAR_4 = VAR_6;
    return VAR_2;
}
