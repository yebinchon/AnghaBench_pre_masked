
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int settable_ctx_params; int gettable_ctx_params; int gettable_params; } ;
struct TYPE_6__ {int verbose; scalar_t__ first; int subindent; int label; int indent; int total; } ;
typedef TYPE_1__ META ;
typedef TYPE_2__ INFO ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(META *VAR_1, INFO *VAR_2)
{
    switch (VAR_1->verbose) {
    case 1:
        if (!VAR_1->first)
            FUNC_0(VAR_0, "; ");
        FUNC_1(VAR_0, VAR_2);
        break;
    case 2:
        if (VAR_1->first) {
            if (VAR_1->total > 0)
                FUNC_0(VAR_0, "\n");
            FUNC_0(VAR_0, "%*s%ss:", VAR_1->indent, "", VAR_1->label);
        }
        FUNC_0(VAR_0, " ");
        FUNC_1(VAR_0, VAR_2);
        break;
    case 3:
    default:
        FUNC_0(VAR_0, "%*s%s ", VAR_1->indent, "", VAR_1->label);
        FUNC_1(VAR_0, VAR_2);
        FUNC_0(VAR_0, "\n");
        FUNC_2("retrievable algorithm parameters",
                          VAR_2->gettable_params, VAR_1->subindent);
        FUNC_2("retrievable operation parameters",
                          VAR_2->gettable_ctx_params, VAR_1->subindent);
        FUNC_2("settable operation parameters",
                          VAR_2->settable_ctx_params, VAR_1->subindent);
        break;
    }
    VAR_1->first = 0;
}
