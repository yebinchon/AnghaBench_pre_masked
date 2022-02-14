
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {struct section* next; int name; int values_index; int mutex; int hash; } ;
struct config {struct section* sections; } ;


 int VAR_0 ;
 struct section* FUNC_0 (struct config*,struct section*) ;
 int VAR_1 ;
 int FUNC_1 (struct config*) ;
 int FUNC_2 (struct config*) ;
 int FUNC_3 (int *,int ) ;
 struct section* FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static inline struct section *FUNC_11(struct config *VAR_2, const char *VAR_3) {
    FUNC_5(VAR_0, "Creating section '%s'.", VAR_3);

    struct section *VAR_4 = FUNC_4(1, sizeof(struct section));
    VAR_4->name = FUNC_9(VAR_3);
    VAR_4->hash = FUNC_8(VAR_4->name);
    FUNC_7(&VAR_4->mutex);

    FUNC_3(&VAR_4->values_index, VAR_1);

    if(FUNC_10(FUNC_0(VAR_2, VAR_4) != VAR_4))
        FUNC_6("INTERNAL ERROR: indexing of section '%s', already exists.", VAR_4->name);

    FUNC_2(VAR_2);
    struct section *VAR_5 = VAR_2->sections;
    if(VAR_5) {
        while (VAR_5->next) VAR_5 = VAR_5->next;
        VAR_5->next = VAR_4;
    }
    else VAR_2->sections = VAR_4;
    FUNC_1(VAR_2);

    return VAR_4;
}
