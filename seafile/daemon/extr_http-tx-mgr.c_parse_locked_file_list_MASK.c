
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int GHashTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,void*) ;
 int * FUNC_2 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static GHashTable *
FUNC_9 (json_t *VAR_3)
{
    GHashTable *VAR_4 = ((void*)0);
    size_t VAR_5, VAR_6;
    json_t *VAR_7, *VAR_8, *VAR_9;

    VAR_4 = FUNC_2 (VAR_2, VAR_1, VAR_0, ((void*)0));
    if (!VAR_4) {
        return ((void*)0);
    }

    VAR_5 = FUNC_5 (VAR_3);
    for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
        VAR_7 = FUNC_4 (VAR_3, VAR_6);
        VAR_8 = FUNC_7 (VAR_7, "path");
        if (!VAR_8) {
            FUNC_0 (VAR_4);
            return ((void*)0);
        }
        VAR_9 = FUNC_7 (VAR_7, "by_me");
        if (!VAR_9) {
            FUNC_0 (VAR_4);
            return ((void*)0);
        }
        FUNC_1 (VAR_4,
                             FUNC_3(FUNC_8(VAR_8)),
                             (void*)(long)FUNC_6(VAR_9));
    }

    return VAR_4;
}
