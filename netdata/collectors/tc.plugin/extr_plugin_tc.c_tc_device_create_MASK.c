
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_device {char enabled; struct tc_device* prev; struct tc_device* next; int id; int classes_index; int hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct tc_device* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 struct tc_device* FUNC_6 (struct tc_device*) ;
 struct tc_device* FUNC_7 (char*,int ) ;
 struct tc_device* VAR_2 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline struct tc_device *FUNC_9(char *VAR_3)
{
    struct tc_device *VAR_4 = FUNC_7(VAR_3, 0);

    if(!VAR_4) {
        FUNC_2(VAR_0, "TC: Creating device '%s'", VAR_3);

        VAR_4 = FUNC_1(1, sizeof(struct tc_device));

        VAR_4->id = FUNC_5(VAR_3);
        VAR_4->hash = FUNC_4(VAR_4->id);
        VAR_4->enabled = (char)-1;

        FUNC_0(&VAR_4->classes_index, VAR_1);
        if(FUNC_8(FUNC_6(VAR_4) != VAR_4))
            FUNC_3("plugin_tc: INTERNAL ERROR: removing device '%s' removed a different device.", VAR_4->id);

        if(!VAR_2) {
            VAR_2 = VAR_4;
        }
        else {
            VAR_4->next = VAR_2;
            VAR_2->prev = VAR_4;
            VAR_2 = VAR_4;
        }
    }

    return(VAR_4);
}
