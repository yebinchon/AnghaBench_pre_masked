
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* family; int use_count; int rrdvar_root_index; int hash_family; } ;
typedef int RRDHOST ;
typedef TYPE_1__ RRDFAMILY ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,char*) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,char const*,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;

RRDFAMILY *FUNC_7(RRDHOST *VAR_1, const char *VAR_2) {
    RRDFAMILY *VAR_3 = FUNC_4(VAR_1, VAR_2, 0);
    if(!VAR_3) {
        VAR_3 = FUNC_1(1, sizeof(RRDFAMILY));

        VAR_3->family = FUNC_6(VAR_2);
        VAR_3->hash_family = FUNC_5(VAR_3->family);


        FUNC_0(&VAR_3->rrdvar_root_index, VAR_0);

        RRDFAMILY *VAR_4 = FUNC_3(VAR_1, VAR_3);
        if(VAR_4 != VAR_3)
            FUNC_2("RRDFAMILY: INTERNAL ERROR: Expected to INSERT RRDFAMILY '%s' into index, but inserted '%s'.", VAR_3->family, (VAR_4)?VAR_4->family:"NONE");
    }

    VAR_3->use_count++;
    return VAR_3;
}
