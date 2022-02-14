
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_11__ {TYPE_1__* name; } ;
typedef TYPE_2__ client ;
struct TYPE_12__ {int ok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 TYPE_3__ VAR_2 ;

int FUNC_5(client *VAR_3, robj *VAR_4) {
    int VAR_5 = FUNC_4(VAR_4->ptr);
    char *VAR_6 = VAR_4->ptr;



    if (VAR_5 == 0) {
        if (VAR_3->name) FUNC_2(VAR_3->name);
        VAR_3->name = ((void*)0);
        FUNC_0(VAR_3,VAR_2.ok);
        return VAR_1;
    }




    for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        if (VAR_6[VAR_7] < '!' || VAR_6[VAR_7] > '~') {
            FUNC_1(VAR_3,
                "Client names cannot contain spaces, "
                "newlines or special characters.");
            return VAR_0;
        }
    }
    if (VAR_3->name) FUNC_2(VAR_3->name);
    VAR_3->name = VAR_4;
    FUNC_3(VAR_4);
    return VAR_1;
}
