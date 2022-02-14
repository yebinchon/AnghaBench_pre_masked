
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ data_type; char* data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int ENGINE ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,char*) ;

__attribute__((used)) static int FUNC_3(const OSSL_PARAM VAR_2[], const char **VAR_3,
                       ENGINE **VAR_4)
{
    const OSSL_PARAM *VAR_5;

    *VAR_3 = ((void*)0);
    VAR_5 = FUNC_2(VAR_2, VAR_0);
    if (VAR_5 != ((void*)0)) {
        if (VAR_5->data_type != VAR_1)
            return 0;
        *VAR_3 = VAR_5->data;
    }

    *VAR_4 = ((void*)0);



    VAR_5 = FUNC_2(VAR_2, "engine");
    if (VAR_5 != ((void*)0)) {
        if (VAR_5->data_type != VAR_1)
            return 0;
        FUNC_1(*VAR_4);
        *VAR_4 = FUNC_0(VAR_5->data);
        if (*VAR_4 == ((void*)0))
            return 0;
    }

    return 1;
}
