
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int expected_greeting ;
struct TYPE_3__ {char* data; int data_size; } ;
typedef char const OSSL_PROVIDER ;


 int FUNC_0 (char*,int,char*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,TYPE_1__*) ;
 char* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_8(const char *VAR_2)
{
    OSSL_PROVIDER *VAR_3 = ((void*)0);
    const char *VAR_4 = ((void*)0);
    char VAR_5[256];

    FUNC_0(VAR_5, sizeof(VAR_5),
                 "Hello OpenSSL %.20s, greetings from %s!",
                 VAR_0, VAR_2);

    return
        FUNC_4(VAR_3 = FUNC_2(((void*)0), VAR_2))
        && FUNC_7(FUNC_1(VAR_3, VAR_1))
        && FUNC_4(VAR_4 = VAR_1[0].data)
        && FUNC_5(VAR_1[0].data_size, 0)
        && FUNC_6(VAR_4, VAR_5)
        && FUNC_7(FUNC_3(VAR_3));
}
