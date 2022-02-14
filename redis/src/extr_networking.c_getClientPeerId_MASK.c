
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int peerid ;
struct TYPE_4__ {char* peerid; } ;
typedef TYPE_1__ client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 char* FUNC_1 (char*) ;

char *FUNC_2(client *VAR_1) {
    char VAR_2[VAR_0];

    if (VAR_1->peerid == ((void*)0)) {
        FUNC_0(VAR_1,VAR_2,sizeof(VAR_2));
        VAR_1->peerid = FUNC_1(VAR_2);
    }
    return VAR_1->peerid;
}
