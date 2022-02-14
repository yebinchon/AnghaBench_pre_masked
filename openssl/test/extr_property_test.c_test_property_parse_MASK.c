
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e; int query; int defn; } ;
typedef int OSSL_PROPERTY_LIST ;
typedef int OSSL_METHOD_STORE ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_9(int VAR_1)
{
    OSSL_METHOD_STORE *VAR_2;
    OSSL_PROPERTY_LIST *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    if (FUNC_1(VAR_2 = FUNC_4(((void*)0)))
        && FUNC_2("sky", "groan", "cold", "today", "tomorrow", "n",
                              ((void*)0))
        && FUNC_1(VAR_3 = FUNC_5(((void*)0), VAR_0[VAR_1].defn))
        && FUNC_1(VAR_4 = FUNC_6(((void*)0), VAR_0[VAR_1].query))
        && FUNC_0(FUNC_8(VAR_4, VAR_3), VAR_0[VAR_1].e))
        VAR_5 = 1;
    FUNC_7(VAR_3);
    FUNC_7(VAR_4);
    FUNC_3(VAR_2);
    return VAR_5;
}
