
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * path; } ;
typedef TYPE_1__ OSSL_PROVIDER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;

int FUNC_3(OSSL_PROVIDER *VAR_2, const char *VAR_3)
{
    FUNC_1(VAR_2->path);
    if (VAR_3 == ((void*)0))
        return 1;
    if ((VAR_2->path = FUNC_2(VAR_3)) != ((void*)0))
        return 1;
    FUNC_0(VAR_0, VAR_1);
    return 0;
}
