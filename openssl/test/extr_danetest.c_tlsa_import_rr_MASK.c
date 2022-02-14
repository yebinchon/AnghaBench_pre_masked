
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* uint8_t ;
struct tlsa_field {unsigned char** member_0; char* member_1; scalar_t__ (* parser ) (char const*,scalar_t__) ;int name; scalar_t__ var; int const member_2; } ;
typedef scalar_t__ ossl_ssize_t ;
typedef int SSL ;


 int FUNC_0 (unsigned char* const) ;
 int FUNC_1 (int *,unsigned char* const,unsigned char* const,unsigned char* const,unsigned char* const,scalar_t__) ;
 int FUNC_2 (char*,char const*,...) ;


 scalar_t__ FUNC_3 (char const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_0, const char *VAR_1)
{
    static uint8_t VAR_2;
    static uint8_t VAR_3;
    static uint8_t VAR_4;
    static unsigned char *VAR_5 = ((void*)0);
    static struct tlsa_field VAR_6[] = {
        { &VAR_2, "usage", 129 },
        { &VAR_3, "selector", 129 },
        { &VAR_4, "mtype", 129 },
        { &VAR_5, "data", 128 },
        { ((void*)0), }
    };
    int VAR_7;
    struct tlsa_field *VAR_8;
    const char *VAR_9 = VAR_1;
    ossl_ssize_t VAR_10 = 0;

    for (VAR_8 = VAR_6; VAR_8->var; ++VAR_8) {
        if ((VAR_10 = VAR_8->parser(VAR_9 += VAR_10, VAR_8->var)) <= 0) {
            FUNC_2("bad TLSA %s field in: %s", VAR_8->name, VAR_1);
            return 0;
        }
    }

    VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_10);
    FUNC_0(VAR_5);
    if (VAR_7 == 0) {
        FUNC_2("unusable TLSA rrdata: %s", VAR_1);
        return 0;
    }
    if (VAR_7 < 0) {
        FUNC_2("error loading TLSA rrdata: %s", VAR_1);
        return 0;
    }

    return VAR_7;
}
