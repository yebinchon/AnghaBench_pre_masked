
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int passwords; } ;
typedef TYPE_1__ user ;
typedef int sds ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_2__ robj ;
typedef int listNode ;
typedef int listIter ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(robj *VAR_7, robj *VAR_8) {
    user *VAR_9 = FUNC_0(VAR_7->ptr,FUNC_6(VAR_7->ptr));
    if (VAR_9 == ((void*)0)) {
        VAR_6 = VAR_3;
        return VAR_0;
    }


    if (VAR_9->flags & VAR_4) {
        VAR_6 = VAR_2;
        return VAR_0;
    }



    if (VAR_9->flags & VAR_5) return VAR_1;


    listIter VAR_10;
    listNode *VAR_11;
    FUNC_4(VAR_9->passwords,&VAR_10);
    sds VAR_12 = FUNC_1(VAR_8->ptr,FUNC_6(VAR_8->ptr));
    while((VAR_11 = FUNC_2(&VAR_10))) {
        sds VAR_13 = FUNC_3(VAR_11);
        if (!FUNC_7(VAR_12, VAR_13)) {
            FUNC_5(VAR_12);
            return VAR_1;
        }
    }
    FUNC_5(VAR_12);


    VAR_6 = VAR_2;
    return VAR_0;
}
