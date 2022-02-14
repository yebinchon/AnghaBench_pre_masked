
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int time; int * type; } ;
struct TYPE_5__ {int retrycount; scalar_t__ justid; scalar_t__ force; TYPE_1__ idle; } ;
typedef TYPE_2__ xclaimOptions ;
typedef int smart_string ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(smart_string *VAR_0, xclaimOptions *VAR_1) {

    if (VAR_1->idle.type != ((void*)0) && VAR_1->idle.time != -1) {
        FUNC_1(VAR_0, VAR_1->idle.type, FUNC_4(VAR_1->idle.type));
        FUNC_2(VAR_0, VAR_1->idle.time);
    }


    if (VAR_1->retrycount != -1) {
        FUNC_0(VAR_0, "RETRYCOUNT");
        FUNC_3(VAR_0, VAR_1->retrycount);
    }


    if (VAR_1->force)
        FUNC_0(VAR_0, "FORCE");
    if (VAR_1->justid)
        FUNC_0(VAR_0, "JUSTID");
}
