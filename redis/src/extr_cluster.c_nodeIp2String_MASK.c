
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conn; } ;
typedef TYPE_1__ clusterLink ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int *) ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2(char *VAR_1, clusterLink *VAR_2, char *VAR_3) {
    if (VAR_3[0] != '\0') {
        FUNC_1(VAR_1,VAR_3,VAR_0);
        VAR_1[VAR_0-1] = '\0';
    } else {
        FUNC_0(VAR_2->conn, VAR_1, VAR_0, ((void*)0));
    }
}
