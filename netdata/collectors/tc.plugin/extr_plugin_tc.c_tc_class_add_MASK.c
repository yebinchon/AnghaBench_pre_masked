
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_device {char* id; struct tc_class* last_class; struct tc_class* classes; } ;
struct tc_class {char isqdisc; void* id; void* leafid; void* leaf_hash; void* parentid; void* parent_hash; void* hash; struct tc_class* prev; struct tc_class* next; } ;


 int VAR_0 ;
 struct tc_class* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*) ;
 int FUNC_2 (char*,void*,char*) ;
 scalar_t__ FUNC_3 (struct tc_class*) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (char*) ;
 struct tc_class* FUNC_6 (struct tc_device*,struct tc_class*) ;
 struct tc_class* FUNC_7 (struct tc_device*,char*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline struct tc_class *FUNC_9(struct tc_device *VAR_1, char *VAR_2, char VAR_3, char *VAR_4, char *VAR_5)
{
    struct tc_class *VAR_6 = FUNC_7(VAR_1, VAR_2, 0);

    if(!VAR_6) {
        FUNC_1(VAR_0, "TC: Creating in device '%s', class id '%s', parentid '%s', leafid '%s'", VAR_1->id, VAR_2, VAR_4?VAR_4:"", VAR_5?VAR_5:"");

        VAR_6 = FUNC_0(1, sizeof(struct tc_class));

        if(FUNC_8(!VAR_1->classes))
            VAR_1->classes = VAR_6;

        else if(FUNC_3(VAR_1->last_class)) {
            VAR_1->last_class->next = VAR_6;
            VAR_6->prev = VAR_1->last_class;
        }

        VAR_1->last_class = VAR_6;

        VAR_6->id = FUNC_5(VAR_2);
        VAR_6->hash = FUNC_4(VAR_6->id);

        VAR_6->isqdisc = VAR_3;
        if(VAR_4 && *VAR_4) {
            VAR_6->parentid = FUNC_5(VAR_4);
            VAR_6->parent_hash = FUNC_4(VAR_6->parentid);
        }

        if(VAR_5 && *VAR_5) {
            VAR_6->leafid = FUNC_5(VAR_5);
            VAR_6->leaf_hash = FUNC_4(VAR_6->leafid);
        }

        if(FUNC_8(FUNC_6(VAR_1, VAR_6) != VAR_6))
            FUNC_2("plugin_tc: INTERNAL ERROR: attempt index class '%s' on device '%s': already exists", VAR_6->id, VAR_1->id);
    }
    return(VAR_6);
}
