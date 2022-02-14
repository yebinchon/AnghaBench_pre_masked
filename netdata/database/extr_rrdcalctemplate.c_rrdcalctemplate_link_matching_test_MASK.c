
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {char* chart; char* name; int foreachdim; TYPE_1__* rrdset; } ;
struct TYPE_13__ {scalar_t__ hash_context; int name; int family_pattern; int context; } ;
struct TYPE_12__ {int hostname; } ;
struct TYPE_11__ {scalar_t__ hash_context; int id; int family; int context; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef TYPE_3__ RRDCALCTEMPLATE ;
typedef TYPE_4__ RRDCALC ;


 int FUNC_0 (char*,char*,char*,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(RRDCALCTEMPLATE *VAR_0, RRDSET *VAR_1, RRDHOST *VAR_2 ) {
    if(VAR_0->hash_context == VAR_1->hash_context && !FUNC_4(VAR_0->context, VAR_1->context)
       && (!VAR_0->family_pattern || FUNC_3(VAR_0->family_pattern, VAR_1->family))) {
        RRDCALC *VAR_3 = FUNC_2(VAR_2, VAR_0, VAR_1->id);
        if(FUNC_5(!VAR_3))
            FUNC_1("Health tried to create alarm from template '%s' on chart '%s' of host '%s', but it failed", VAR_0->name, VAR_1->id, VAR_2->hostname);




    }
}
