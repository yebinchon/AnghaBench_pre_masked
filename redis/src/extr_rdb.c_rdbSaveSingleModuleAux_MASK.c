
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
typedef int rio ;
struct TYPE_7__ {int id; int (* aux_save ) (TYPE_2__*,int) ;} ;
typedef TYPE_1__ moduleType ;
struct TYPE_8__ {int bytes; int error; scalar_t__ ctx; } ;
typedef TYPE_2__ RedisModuleIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (scalar_t__) ;

ssize_t FUNC_6(rio *VAR_3, int VAR_4, moduleType *VAR_5) {

    RedisModuleIO VAR_6;
    int VAR_7 = FUNC_3(VAR_3, VAR_2);



    VAR_7 = FUNC_2(VAR_3,VAR_5->id);
    if (VAR_7 == -1) return -1;
    VAR_6.bytes += VAR_7;




    VAR_7 = FUNC_2(VAR_3,VAR_1);
    if (VAR_7 == -1) return -1;
    VAR_6.bytes += VAR_7;
    VAR_7 = FUNC_2(VAR_3,VAR_4);
    if (VAR_7 == -1) return -1;
    VAR_6.bytes += VAR_7;


    FUNC_1(VAR_6,VAR_5,VAR_3,((void*)0));
    VAR_5->aux_save(&VAR_6,VAR_4);
    VAR_7 = FUNC_2(VAR_3,VAR_0);
    if (VAR_7 == -1)
        VAR_6.error = 1;
    else
        VAR_6.bytes += VAR_7;

    if (VAR_6.ctx) {
        FUNC_0(VAR_6.ctx);
        FUNC_5(VAR_6.ctx);
    }
    if (VAR_6.error)
        return -1;
    return VAR_6.bytes;
}
