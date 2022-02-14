
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* guid; int first_t; int last_t; int usages; int person_urls; } ;
typedef TYPE_1__ REGISTRY_PERSON ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *,char*,int,int,int,char*) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_3(void *VAR_2, void *VAR_3) {
    REGISTRY_PERSON *VAR_4 = VAR_2;
    FILE *VAR_5 = VAR_3;

    FUNC_1(VAR_0, "Registry: registry_person_save('%s')", VAR_4->guid);

    int VAR_6 = FUNC_2(VAR_5, "P\t%08x\t%08x\t%08x\t%s\n",
            VAR_4->first_t,
            VAR_4->last_t,
            VAR_4->usages,
            VAR_4->guid
    );

    if(VAR_6 >= 0) {

        int VAR_7 = FUNC_0(&VAR_4->person_urls, VAR_1, VAR_5);
        if (VAR_7 < 0) return VAR_7;
        VAR_6 += VAR_7;
    }



    return VAR_6;
}
