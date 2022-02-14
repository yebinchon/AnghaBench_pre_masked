
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int transport; int * sasl_conn; scalar_t__ write_and_free; } ;
typedef TYPE_1__ conn ;
struct TYPE_7__ {int sasl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int **) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_6(conn *VAR_2) {
    FUNC_1(VAR_2 != ((void*)0));

    FUNC_2(VAR_2);

    if (VAR_2->write_and_free) {
        FUNC_4(VAR_2->write_and_free);
        VAR_2->write_and_free = 0;
    }

    if (VAR_2->sasl_conn) {
        FUNC_1(VAR_1.sasl);
        FUNC_5(&VAR_2->sasl_conn);
        VAR_2->sasl_conn = ((void*)0);
    }

    if (FUNC_0(VAR_2->transport)) {
        FUNC_3(VAR_2, VAR_0);
    }
}
