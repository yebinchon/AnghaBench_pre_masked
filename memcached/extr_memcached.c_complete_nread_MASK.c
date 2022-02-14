
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ protocol; } ;
typedef TYPE_1__ conn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(conn *VAR_2) {
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_2->protocol == VAR_0
           || VAR_2->protocol == VAR_1);

    if (VAR_2->protocol == VAR_0) {
        FUNC_1(VAR_2);
    } else if (VAR_2->protocol == VAR_1) {
        FUNC_2(VAR_2);
    }
}
