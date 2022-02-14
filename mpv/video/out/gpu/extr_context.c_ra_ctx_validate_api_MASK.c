
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct m_option {int dummy; } ;
struct bstr {int dummy; } ;
struct TYPE_3__ {char* type; int name; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bstr,char*) ;
 TYPE_1__** VAR_2 ;
 int FUNC_2 (struct mp_log*,char*,...) ;

int FUNC_3(struct mp_log *VAR_3, const struct m_option *VAR_4,
                        struct bstr VAR_5, struct bstr VAR_6)
{
    if (FUNC_1(VAR_6, "help")) {
        FUNC_2(VAR_3, "GPU APIs (contexts):\n");
        FUNC_2(VAR_3, "    auto (autodetect)\n");
        for (int VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
            FUNC_2(VAR_3, "    %s (%s)\n", VAR_2[VAR_7]->type, VAR_2[VAR_7]->name);
        return VAR_0;
    }
    if (FUNC_1(VAR_6, "auto"))
        return 1;
    for (int VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
        if (FUNC_1(VAR_6, VAR_2[VAR_8]->type))
            return 1;
    }
    return VAR_1;
}
