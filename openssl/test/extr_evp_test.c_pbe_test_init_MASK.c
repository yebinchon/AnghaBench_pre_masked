
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int skip; TYPE_1__* data; } ;
struct TYPE_5__ {int pbe_type; } ;
typedef int PBE_TYPE ;
typedef TYPE_1__ PBE_DATA ;
typedef TYPE_2__ EVP_TEST ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(EVP_TEST *VAR_4, const char *VAR_5)
{
    PBE_DATA *VAR_6;
    PBE_TYPE VAR_7 = VAR_0;

    if (FUNC_2(VAR_5, "scrypt") == 0) {

        VAR_7 = VAR_3;




    } else if (FUNC_2(VAR_5, "pbkdf2") == 0) {
        VAR_7 = VAR_1;
    } else if (FUNC_2(VAR_5, "pkcs12") == 0) {
        VAR_7 = VAR_2;
    } else {
        FUNC_1("Unknown pbe algorithm %s", VAR_5);
    }
    VAR_6 = FUNC_0(sizeof(*VAR_6));
    VAR_6->pbe_type = VAR_7;
    VAR_4->data = VAR_6;
    return 1;
}
