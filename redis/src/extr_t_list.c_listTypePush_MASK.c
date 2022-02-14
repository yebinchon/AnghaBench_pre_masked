
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ encoding; int ptr; } ;
typedef TYPE_1__ robj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,size_t,int) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(robj *VAR_4, robj *VAR_5, int VAR_6) {
    if (VAR_4->encoding == VAR_1) {
        int VAR_7 = (VAR_6 == VAR_0) ? VAR_2 : VAR_3;
        VAR_5 = FUNC_1(VAR_5);
        size_t VAR_8 = FUNC_3(VAR_5->ptr);
        FUNC_2(VAR_4->ptr, VAR_5->ptr, VAR_8, VAR_7);
        FUNC_0(VAR_5);
    } else {
        FUNC_4("Unknown list encoding");
    }
}
