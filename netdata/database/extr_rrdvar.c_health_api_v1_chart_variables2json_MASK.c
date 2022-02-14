
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct variable2json_helper {scalar_t__ counter; int options; int * buf; } ;
struct TYPE_7__ {int rrdvar_root_index; int hostname; } ;
struct TYPE_6__ {TYPE_1__* rrdfamily; int family; int rrdvar_root_index; int context; int name; int id; TYPE_3__* rrdhost; } ;
struct TYPE_5__ {int rrdvar_root_index; } ;
typedef TYPE_2__ RRDSET ;
typedef TYPE_3__ RRDHOST ;
typedef int BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;

void FUNC_3(RRDSET *VAR_2, BUFFER *VAR_3) {
    RRDHOST *VAR_4 = VAR_2->rrdhost;

    struct variable2json_helper VAR_5 = {
            .buf = VAR_3,
            .counter = 0,
            .options = VAR_0
    };

    FUNC_1(VAR_3, "{\n\t\"chart\": \"%s\",\n\t\"chart_name\": \"%s\",\n\t\"chart_context\": \"%s\",\n\t\"chart_variables\": {", VAR_2->id, VAR_2->name, VAR_2->context);
    FUNC_0(&VAR_2->rrdvar_root_index, VAR_1, (void *)&VAR_5);
    FUNC_1(VAR_3, "\n\t},\n\t\"family\": \"%s\",\n\t\"family_variables\": {", VAR_2->family);
    VAR_5.counter = 0;
    FUNC_0(&VAR_2->rrdfamily->rrdvar_root_index, VAR_1, (void *)&VAR_5);
    FUNC_1(VAR_3, "\n\t},\n\t\"host\": \"%s\",\n\t\"host_variables\": {", VAR_4->hostname);
    VAR_5.counter = 0;
    FUNC_0(&VAR_4->rrdvar_root_index, VAR_1, (void *)&VAR_5);
    FUNC_2(VAR_3, "\n\t}\n}\n");
}
