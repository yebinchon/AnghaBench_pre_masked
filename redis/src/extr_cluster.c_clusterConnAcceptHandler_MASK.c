
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int connection ;
struct TYPE_4__ {int * conn; } ;
typedef TYPE_1__ clusterLink ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(connection *VAR_3) {
    clusterLink *VAR_4;

    if (FUNC_2(VAR_3) != VAR_0) {
        FUNC_6(VAR_1,
                "Error accepting cluster node connection: %s", FUNC_1(VAR_3));
        FUNC_0(VAR_3);
        return;
    }






    VAR_4 = FUNC_5(((void*)0));
    VAR_4->conn = VAR_3;
    FUNC_3(VAR_3, VAR_4);


    FUNC_4(VAR_3, VAR_2);
}
