
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int len; char* start; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (TYPE_1__,int) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int ,int) ;
 int FUNC_2 (void*,TYPE_1__*,TYPE_1__) ;
 int FUNC_3 (void*,TYPE_1__*,TYPE_1__*) ;

bool FUNC_4(void *VAR_0, bstr *VAR_1, bstr *VAR_2)
{
    bstr VAR_3 = *VAR_2;
    int VAR_4 = 0;
    while (1) {
        if (VAR_4 >= VAR_3.len || VAR_3.start[VAR_4] == '"') {
            *VAR_2 = FUNC_0(VAR_3, VAR_4);
            VAR_3 = FUNC_1(VAR_3, 0, VAR_4);
            if (VAR_1->start == ((void*)0)) {
                *VAR_1 = VAR_3;
            } else {
                FUNC_2(VAR_0, VAR_1, VAR_3);
            }
            return 1;
        } else if (VAR_3.start[VAR_4] == '\\') {
            FUNC_2(VAR_0, VAR_1, FUNC_1(VAR_3, 0, VAR_4));
            VAR_3 = FUNC_0(VAR_3, VAR_4 + 1);
            VAR_4 = 0;
            if (!FUNC_3(VAR_0, VAR_1, &VAR_3))
                goto error;
        } else {
            VAR_4++;
        }
    }
error:
    return 0;
}
