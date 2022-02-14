
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_device {struct tc_class* classes; scalar_t__ family_updated; scalar_t__ name_updated; } ;
struct tc_class {int unupdated; struct tc_class* next; scalar_t__ name_updated; scalar_t__ updated; } ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct tc_device*,struct tc_class*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct tc_device *VAR_0) {
    static int VAR_1 = 999;

    if(FUNC_2(VAR_1 > 0)) {
        VAR_1 = (int) FUNC_0("plugin:tc", "cleanup unused classes every", 120);
        if(VAR_1 < 0) VAR_1 = -VAR_1;
    }

    VAR_0->name_updated = 0;
    VAR_0->family_updated = 0;

    struct tc_class *VAR_2 = VAR_0->classes;
    while(VAR_2) {
        if(FUNC_2(VAR_1 && VAR_2->unupdated >= VAR_1)) {
            struct tc_class *VAR_3 = VAR_2->next;
            FUNC_1(VAR_0, VAR_2);
            VAR_2 = VAR_3;
        }
        else {
            VAR_2->updated = 0;
            VAR_2->name_updated = 0;

            VAR_2 = VAR_2->next;
        }
    }
}
