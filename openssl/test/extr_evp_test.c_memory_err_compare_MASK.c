
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* err; int * expected_err; } ;
typedef TYPE_1__ EVP_TEST ;


 int FUNC_0 (void const*,size_t,void const*,size_t) ;
 int FUNC_1 (void const*,size_t,void const*,size_t) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(EVP_TEST *VAR_0, const char *VAR_1,
                              const void *VAR_2, size_t VAR_3,
                              const void *VAR_4, size_t VAR_5)
{
    int VAR_6;

    if (VAR_0->expected_err != ((void*)0) && FUNC_2(VAR_0->expected_err, VAR_1) == 0)
        VAR_6 = !FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
    else
        VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
    if (!VAR_6)
        VAR_0->err = VAR_1;
    return VAR_6;
}
