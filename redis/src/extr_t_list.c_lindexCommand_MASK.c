
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_19__ {int longval; int sz; scalar_t__ value; } ;
typedef TYPE_2__ quicklistEntry ;
struct TYPE_20__ {size_t resp; int * argv; } ;
typedef TYPE_3__ client ;
struct TYPE_21__ {int * null; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (char*,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,long*,int *) ;
 TYPE_1__* FUNC_7 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,long,TYPE_2__*) ;
 int FUNC_9 (char*) ;
 TYPE_4__ VAR_3 ;

void FUNC_10(client *VAR_4) {
    robj *VAR_5 = FUNC_7(VAR_4,VAR_4->argv[1],VAR_3.null[VAR_4->resp]);
    if (VAR_5 == ((void*)0) || FUNC_2(VAR_4,VAR_5,VAR_2)) return;
    long VAR_6;
    robj *VAR_7 = ((void*)0);

    if ((FUNC_6(VAR_4, VAR_4->argv[2], &VAR_6, ((void*)0)) != VAR_0))
        return;

    if (VAR_5->encoding == VAR_1) {
        quicklistEntry VAR_8;
        if (FUNC_8(VAR_5->ptr, VAR_6, &VAR_8)) {
            if (VAR_8.value) {
                VAR_7 = FUNC_3((char*)VAR_8.value,VAR_8.sz);
            } else {
                VAR_7 = FUNC_4(VAR_8.longval);
            }
            FUNC_0(VAR_4,VAR_7);
            FUNC_5(VAR_7);
        } else {
            FUNC_1(VAR_4);
        }
    } else {
        FUNC_9("Unknown list encoding");
    }
}
