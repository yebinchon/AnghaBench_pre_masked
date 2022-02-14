
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct strstr_pair_st TYPE_1__ ;


struct strstr_pair_st {char* prefix; char* name; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,char const*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1)
{
    size_t VAR_2 = 0;
    struct strstr_pair_st {
        char *prefix;
        char *name;
    } VAR_3[] = {
        {"0x", "a hexadecimal"},
        {"0X", "a hexadecimal"},
        {"0", "an octal"}
    };

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3); VAR_2++) {
        if (FUNC_3(VAR_1, VAR_3[VAR_2].prefix, FUNC_2(VAR_3[VAR_2].prefix)) == 0) {
            FUNC_1("%s: Can't parse \"%s\" as %s number\n",
                              VAR_0, VAR_1, VAR_3[VAR_2].name);
            return;
        }
    }
    FUNC_1("%s: Can't parse \"%s\" as a number\n", VAR_0, VAR_1);
    return;
}
