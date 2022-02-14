
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port; int ip; } ;
typedef TYPE_1__ sentinelAddr ;
typedef int ip ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;

sentinelAddr *FUNC_3(char *VAR_5, int VAR_6) {
    char VAR_7[VAR_3];
    sentinelAddr *VAR_8;

    if (VAR_6 < 0 || VAR_6 > 65535) {
        VAR_4 = VAR_1;
        return ((void*)0);
    }
    if (FUNC_0(((void*)0),VAR_5,VAR_7,sizeof(VAR_7)) == VAR_0) {
        VAR_4 = VAR_2;
        return ((void*)0);
    }
    VAR_8 = FUNC_2(sizeof(*VAR_8));
    VAR_8->ip = FUNC_1(VAR_7);
    VAR_8->port = VAR_6;
    return VAR_8;
}
