
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int authenticated; int * sasl_conn; } ;
typedef TYPE_1__ conn ;
struct TYPE_6__ {scalar_t__ verbose; int sasl; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (char*,int *,scalar_t__*,int *,int *,int *,int ,int **) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(conn *VAR_4) {
    FUNC_0(VAR_4);

    if (!VAR_2.sasl)
        return;

    VAR_4->authenticated = 0;

    if (!VAR_4->sasl_conn) {
        int VAR_5=FUNC_2("memcached",
                                   ((void*)0),
                                   VAR_1[0] ? VAR_1 : ((void*)0),
                                   ((void*)0), ((void*)0),
                                   ((void*)0), 0, &VAR_4->sasl_conn);
        if (VAR_5 != VAR_0) {
            if (VAR_2.verbose) {
                FUNC_1(VAR_3, "Failed to initialize SASL conn.\n");
            }
            VAR_4->sasl_conn = ((void*)0);
        }
    }
}
