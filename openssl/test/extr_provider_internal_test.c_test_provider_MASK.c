
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int data_size; } ;
typedef int OSSL_PROVIDER ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(OSSL_PROVIDER *VAR_1, const char *VAR_2)
{
    const char *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    VAR_4 =
        FUNC_4(FUNC_5(VAR_1))
        && FUNC_4(FUNC_7(VAR_1, VAR_0))
        && FUNC_1(VAR_3 = VAR_0[0].data)
        && FUNC_2(VAR_0[0].data_size, 0)
        && FUNC_3(VAR_3, VAR_2);

    FUNC_0("Got this greeting: %s\n", VAR_3);
    FUNC_6(VAR_1);
    return VAR_4;
}
