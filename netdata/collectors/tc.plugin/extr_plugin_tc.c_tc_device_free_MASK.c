
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_device {struct tc_device* family; struct tc_device* name; struct tc_device* id; scalar_t__ classes; struct tc_device* prev; struct tc_device* next; } ;


 int FUNC_0 (char*,struct tc_device*) ;
 int FUNC_1 (struct tc_device*) ;
 int FUNC_2 (struct tc_device*,scalar_t__) ;
 struct tc_device* FUNC_3 (struct tc_device*) ;
 struct tc_device* VAR_0 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct tc_device *VAR_1)
{
    if(VAR_1->next) VAR_1->next->prev = VAR_1->prev;
    if(VAR_1->prev) VAR_1->prev->next = VAR_1->next;
    if(VAR_0 == VAR_1) {
        if(VAR_1->next) VAR_0 = VAR_1->next;
        else VAR_0 = VAR_1->prev;
    }

    if(FUNC_4(FUNC_3(VAR_1) != VAR_1))
        FUNC_0("plugin_tc: INTERNAL ERROR: removing device '%s' removed a different device.", VAR_1->id);

    while(VAR_1->classes) FUNC_2(VAR_1, VAR_1->classes);

    FUNC_1(VAR_1->id);
    FUNC_1(VAR_1->name);
    FUNC_1(VAR_1->family);
    FUNC_1(VAR_1);
}
