
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_device {int name_updated; int * name; int * id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(struct tc_device *VAR_1, char *VAR_2) {
    if(FUNC_5(!VAR_2 || !*VAR_2)) return;

    if(VAR_1->name) {
        if(!FUNC_3(VAR_1->name, VAR_2)) return;
        FUNC_1(VAR_1->name);
        VAR_1->name = ((void*)0);
    }

    if(FUNC_2(VAR_2 && *VAR_2 && FUNC_3(VAR_1->id, VAR_2) != 0)) {
        FUNC_0(VAR_0, "TC: Setting device '%s' name to '%s'", VAR_1->id, VAR_2);
        VAR_1->name = FUNC_4(VAR_2);
        VAR_1->name_updated = 1;
    }
}
