
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 TYPE_1__ const* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__ const* FUNC_3 (int *,int) ;

const X509_VERIFY_PARAM *FUNC_4(const char *VAR_2)
{
    int VAR_3;
    X509_VERIFY_PARAM VAR_4;

    VAR_4.name = (char *)VAR_2;
    if (VAR_1 != ((void*)0)) {
        VAR_3 = FUNC_2(VAR_1, &VAR_4);
        if (VAR_3 >= 0)
            return FUNC_3(VAR_1, VAR_3);
    }
    return FUNC_0(&VAR_4, VAR_0, FUNC_1(VAR_0));
}
