
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_9__ {int authenticated; int user; } ;
typedef TYPE_2__ client ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

int FUNC_3(client *VAR_2, robj *VAR_3, robj *VAR_4) {
    if (FUNC_0(VAR_3,VAR_4) == VAR_1) {
        VAR_2->authenticated = 1;
        VAR_2->user = FUNC_1(VAR_3->ptr,FUNC_2(VAR_3->ptr));
        return VAR_1;
    } else {
        return VAR_0;
    }
}
