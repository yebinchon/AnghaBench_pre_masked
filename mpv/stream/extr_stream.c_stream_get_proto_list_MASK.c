
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** protocols; } ;
typedef TYPE_1__ stream_info_t ;


 int FUNC_0 (int *,char**,int,int *) ;
 TYPE_1__** VAR_0 ;
 int * FUNC_1 (int *,char*) ;

char **FUNC_2(void)
{
    char **VAR_1 = ((void*)0);
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_0[VAR_3]; VAR_3++) {
        const stream_info_t *VAR_4 = VAR_0[VAR_3];

        if (!VAR_4->protocols)
            continue;

        for (int VAR_5 = 0; VAR_4->protocols[VAR_5]; VAR_5++) {
            if (*VAR_4->protocols[VAR_5] == '\0')
               continue;

            FUNC_0(((void*)0), VAR_1, VAR_2,
                                FUNC_1(((void*)0), VAR_4->protocols[VAR_5]));
        }
    }
    FUNC_0(((void*)0), VAR_1, VAR_2, ((void*)0));
    return VAR_1;
}
