
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int log_count; int log_fp; } ;
struct TYPE_10__ {char* guid; } ;
struct TYPE_9__ {int last_t; char* guid; } ;
struct TYPE_8__ {char* url; } ;
typedef TYPE_1__ REGISTRY_URL ;
typedef TYPE_2__ REGISTRY_PERSON ;
typedef TYPE_3__ REGISTRY_MACHINE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,char,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_7__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(char VAR_1, REGISTRY_PERSON *VAR_2, REGISTRY_MACHINE *VAR_3, REGISTRY_URL *VAR_4, char *VAR_5) {
    if(FUNC_2(VAR_0.log_fp)) {
        if(FUNC_5(FUNC_1(VAR_0.log_fp, "%c\t%08x\t%s\t%s\t%s\t%s\n",
                VAR_1,
                VAR_2->last_t,
                VAR_2->guid,
                VAR_3->guid,
                VAR_5,
                VAR_4->url) < 0))
            FUNC_0("Registry: failed to save log. Registry data may be lost in case of abnormal restart.");



        VAR_0.log_count++;




        if(FUNC_5(FUNC_4()))
            FUNC_3();
    }
}
