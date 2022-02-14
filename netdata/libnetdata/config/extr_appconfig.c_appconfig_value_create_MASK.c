
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {char* name; struct config_option* values; } ;
struct config_option {struct config_option* next; struct config_option* name; struct config_option* value; int hash; } ;


 int VAR_0 ;
 struct config_option* FUNC_0 (struct section*,struct config_option*) ;
 struct config_option* FUNC_1 (int,int) ;
 int FUNC_2 (struct section*) ;
 int FUNC_3 (struct section*) ;
 int FUNC_4 (int ,char*,char const*,char const*,char*) ;
 int FUNC_5 (char*,struct config_option*,char*) ;
 int FUNC_6 (struct config_option*) ;
 int FUNC_7 (struct config_option*) ;
 void* FUNC_8 (char const*) ;

__attribute__((used)) static inline struct config_option *FUNC_9(struct section *VAR_1, const char *VAR_2, const char *VAR_3) {
    FUNC_4(VAR_0, "Creating config entry for name '%s', value '%s', in section '%s'.", VAR_2, VAR_3, VAR_1->name);

    struct config_option *VAR_4 = FUNC_1(1, sizeof(struct config_option));
    VAR_4->name = FUNC_8(VAR_2);
    VAR_4->hash = FUNC_7(VAR_4->name);
    VAR_4->value = FUNC_8(VAR_3);

    struct config_option *VAR_5 = FUNC_0(VAR_1, VAR_4);
    if(VAR_5 != VAR_4) {
        FUNC_5("indexing of config '%s' in section '%s': already exists - using the existing one.", VAR_4->name, VAR_1->name);
        FUNC_6(VAR_4->value);
        FUNC_6(VAR_4->name);
        FUNC_6(VAR_4);
        return VAR_5;
    }

    FUNC_3(VAR_1);
    struct config_option *VAR_6 = VAR_1->values;
    if(VAR_6) {
        while (VAR_6->next) VAR_6 = VAR_6->next;
        VAR_6->next = VAR_4;
    }
    else VAR_1->values = VAR_4;
    FUNC_2(VAR_1);

    return VAR_4;
}
