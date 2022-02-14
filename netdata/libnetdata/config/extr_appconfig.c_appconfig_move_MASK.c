
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {char* name; struct config_option* values; } ;
struct config_option {int name; struct config_option* next; int hash; } ;
struct config {int dummy; } ;


 int VAR_0 ;
 struct config_option* FUNC_0 (struct section*,struct config_option*) ;
 struct config_option* FUNC_1 (struct section*,struct config_option*) ;
 struct config_option* FUNC_2 (struct section*,char const*,int ) ;
 struct section* FUNC_3 (struct config*,char const*) ;
 struct section* FUNC_4 (struct config*,char const*) ;
 int FUNC_5 (struct section*) ;
 int FUNC_6 (struct section*) ;
 int FUNC_7 (int ,char*,char const*,char const*,char const*,char const*) ;
 int FUNC_8 (char*,int ,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct config *VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5) {
    struct config_option *VAR_6, *VAR_7;
    int VAR_8 = -1;

    FUNC_7(VAR_0, "request to rename config in section '%s', old name '%s', to section '%s', new name '%s'", VAR_2, VAR_3, VAR_4, VAR_5);

    struct section *VAR_9 = FUNC_4(VAR_1, VAR_2);
    if(!VAR_9) return VAR_8;

    struct section *VAR_10 = FUNC_4(VAR_1, VAR_4);
    if(!VAR_10) VAR_10 = FUNC_3(VAR_1, VAR_4);

    FUNC_6(VAR_9);
    if(VAR_9 != VAR_10)
        FUNC_6(VAR_10);

    VAR_6 = FUNC_2(VAR_9, VAR_3, 0);
    if(!VAR_6) goto cleanup;

    VAR_7 = FUNC_2(VAR_10, VAR_5, 0);
    if(VAR_7) goto cleanup;

    if(FUNC_12(FUNC_1(VAR_9, VAR_6) != VAR_6))
        FUNC_8("INTERNAL ERROR: deletion of config '%s' from section '%s', deleted tge wrong config entry.", VAR_6->name, VAR_9->name);

    if(VAR_9->values == VAR_6) {
        VAR_9->values = VAR_6->next;
    }
    else {
        struct config_option *VAR_11;
        for(VAR_11 = VAR_9->values; VAR_11 && VAR_11->next != VAR_6 ;VAR_11 = VAR_11->next) ;
        if(!VAR_11 || VAR_11->next != VAR_6)
            FUNC_8("INTERNAL ERROR: cannot find variable '%s' in section '%s' of the config - but it should be there.", VAR_6->name, VAR_9->name);
        else
            VAR_11->next = VAR_6->next;
    }

    FUNC_9(VAR_6->name);
    VAR_6->name = FUNC_11(VAR_5);
    VAR_6->hash = FUNC_10(VAR_6->name);

    VAR_7 = VAR_6;
    VAR_7->next = VAR_10->values;
    VAR_10->values = VAR_7;

    if(FUNC_12(FUNC_0(VAR_10, VAR_6) != VAR_6))
        FUNC_8("INTERNAL ERROR: re-indexing of config '%s' in section '%s', already exists.", VAR_6->name, VAR_10->name);

    VAR_8 = 0;

cleanup:
    if(VAR_9 != VAR_10)
        FUNC_5(VAR_10);
    FUNC_5(VAR_9);
    return VAR_8;
}
