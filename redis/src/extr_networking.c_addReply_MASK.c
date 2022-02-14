
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;
typedef int client ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,size_t) ;
 scalar_t__ FUNC_1 (int *,char*,size_t) ;
 size_t FUNC_2 (char*,int,long) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(client *VAR_2, robj *VAR_3) {
    if (FUNC_3(VAR_2) != VAR_0) return;

    if (FUNC_4(VAR_3)) {
        if (FUNC_1(VAR_2,VAR_3->ptr,FUNC_5(VAR_3->ptr)) != VAR_0)
            FUNC_0(VAR_2,VAR_3->ptr,FUNC_5(VAR_3->ptr));
    } else if (VAR_3->encoding == VAR_1) {



        char VAR_4[32];
        size_t VAR_5 = FUNC_2(VAR_4,sizeof(VAR_4),(long)VAR_3->ptr);
        if (FUNC_1(VAR_2,VAR_4,VAR_5) != VAR_0)
            FUNC_0(VAR_2,VAR_4,VAR_5);
    } else {
        FUNC_6("Wrong obj->encoding in addReply()");
    }
}
