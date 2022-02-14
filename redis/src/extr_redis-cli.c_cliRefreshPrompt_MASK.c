
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* sds ;
typedef int addr ;
struct TYPE_2__ {int prompt; int * dbnum; int hostport; int hostip; int * hostsocket; scalar_t__ eval_ldb; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 TYPE_1__ VAR_0 ;
 char* FUNC_1 (char*,char*,int *) ;
 char* FUNC_2 (char*,char*,int) ;
 char* FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void) {
    if (VAR_0.eval_ldb) return;

    sds VAR_1 = FUNC_3();
    if (VAR_0.hostsocket != ((void*)0)) {
        VAR_1 = FUNC_1(VAR_1,"redis %s",VAR_0.hostsocket);
    } else {
        char VAR_2[256];
        FUNC_0(VAR_2, sizeof(VAR_2), VAR_0.hostip, VAR_0.hostport);
        VAR_1 = FUNC_2(VAR_1,VAR_2,FUNC_6(VAR_2));
    }


    if (VAR_0.dbnum != 0)
        VAR_1 = FUNC_1(VAR_1,"[%i]",VAR_0.dbnum);


    VAR_1 = FUNC_2(VAR_1,"> ",2);
    FUNC_5(VAR_0.prompt,sizeof(VAR_0.prompt),"%s",VAR_1);
    FUNC_4(VAR_1);
}
