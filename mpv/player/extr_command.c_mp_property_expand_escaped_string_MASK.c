
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct MPContext {int dummy; } ;
struct TYPE_8__ {int start; scalar_t__ len; int member_0; } ;
typedef TYPE_1__ bstr ;


 TYPE_1__ FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (void*,TYPE_1__*,TYPE_1__) ;
 int FUNC_3 (void*,TYPE_1__*,TYPE_1__*) ;
 char* FUNC_4 (struct MPContext*,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int *) ;
 char* FUNC_7 (int *,char*) ;

char *FUNC_8(struct MPContext *VAR_0, const char *VAR_1)
{
    void *VAR_2 = FUNC_6(((void*)0));
    bstr VAR_3 = FUNC_0(VAR_1);
    bstr VAR_4 = {0};
    while (VAR_3.len) {
        if (!FUNC_3(VAR_2, &VAR_4, &VAR_3)) {
            FUNC_5(VAR_2);
            return FUNC_7(((void*)0), "(broken escape sequences)");
        }

        if (!FUNC_1(&VAR_3, "\""))
            break;
        FUNC_2(VAR_2, &VAR_4, FUNC_0("\""));
    }
    char *VAR_5 = FUNC_4(VAR_0, VAR_4.start);
    FUNC_5(VAR_2);
    return VAR_5;
}
