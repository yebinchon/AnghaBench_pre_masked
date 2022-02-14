
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_type; int key; int data_size; } ;
typedef TYPE_1__ OSSL_PARAM ;


 int FUNC_0 (char*,size_t,char*,...) ;







__attribute__((used)) static int FUNC_1(char *VAR_0, size_t VAR_1, const OSSL_PARAM *VAR_2)
{
    const char *VAR_3 = "";
    const char *VAR_4 = ((void*)0);
    int VAR_5 = 0;
    int VAR_6;

    switch (VAR_2->data_type) {
    case 130:
        VAR_3 = "unsigned ";

    case 133:
        VAR_4 = "integer";
        break;
    case 129:
        VAR_3 = "pointer to a ";

    case 128:
        VAR_4 = "UTF8 encoded string";
        break;
    case 132:
        VAR_3 = "pointer to an ";

    case 131:
        VAR_4 = "octet string";
        break;
    default:
        VAR_4 = "unknown type";
        VAR_5 = 1;
        break;
    }

    VAR_6 = FUNC_0(VAR_0, VAR_1, "%s: ", VAR_2->key);
    if (VAR_6 > 0) {
        VAR_0 += VAR_6;
        VAR_1 -= VAR_6;
    }
    VAR_6 = FUNC_0(VAR_0, VAR_1, "%s%s", VAR_3, VAR_4);
    if (VAR_6 > 0) {
        VAR_0 += VAR_6;
        VAR_1 -= VAR_6;
    }
    if (VAR_5) {
        VAR_6 = FUNC_0(VAR_0, VAR_1, " [%d]", VAR_2->data_type);
        if (VAR_6 > 0) {
            VAR_0 += VAR_6;
            VAR_1 -= VAR_6;
        }
    }
    if (VAR_2->data_size == 0)
        VAR_6 = FUNC_0(VAR_0, VAR_1, " (arbitrary size)");
    else
        VAR_6 = FUNC_0(VAR_0, VAR_1, " (max %zu bytes large)",
                                   VAR_2->data_size);
    if (VAR_6 > 0) {
        VAR_0 += VAR_6;
        VAR_1 -= VAR_6;
    }
    *VAR_0 = '\0';
    return 1;
}
