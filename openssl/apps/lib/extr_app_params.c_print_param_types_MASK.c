
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {int * key; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (int ,char*,int,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,TYPE_1__ const*) ;

int FUNC_2(const char *VAR_1, const OSSL_PARAM *VAR_2, int VAR_3)
{
    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_0, "%*sNo declared %s\n", VAR_3, "", VAR_1);
    } else if (VAR_2->key == ((void*)0)) {




        FUNC_0(VAR_0, "%*sEmpty list of %s (!!!)\n", VAR_3, "", VAR_1);
    } else {
        FUNC_0(VAR_0, "%*s%s:\n", VAR_3, "", VAR_1);
        for (; VAR_2->key != ((void*)0); VAR_2++) {
            char VAR_4[200];

            FUNC_1(VAR_4, sizeof(VAR_4), VAR_2);
            FUNC_0(VAR_0, "%*s  %s\n", VAR_3, "", VAR_4);
        }
    }
    return 1;
}
