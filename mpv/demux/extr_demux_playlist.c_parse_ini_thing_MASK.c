
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct pl_parser {scalar_t__ probing; } ;
struct TYPE_15__ {int len; int member_0; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (TYPE_1__,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__,char*) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__,char*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__,char*) ;
 TYPE_1__ FUNC_6 (TYPE_1__) ;
 scalar_t__ FUNC_7 (TYPE_1__,char const*) ;
 int FUNC_8 (struct pl_parser*,TYPE_1__) ;
 int FUNC_9 (struct pl_parser*) ;
 TYPE_1__ FUNC_10 (struct pl_parser*) ;

__attribute__((used)) static int FUNC_11(struct pl_parser *VAR_0, const char *VAR_1,
                           const char *VAR_2)
{
    bstr VAR_3 = {0};
    while (!VAR_3.len && !FUNC_9(VAR_0))
        VAR_3 = FUNC_6(FUNC_10(VAR_0));
    if (FUNC_7(VAR_3, VAR_1) != 0)
        return -1;
    if (VAR_0->probing)
        return 0;
    while (!FUNC_9(VAR_0)) {
        VAR_3 = FUNC_6(FUNC_10(VAR_0));
        bstr VAR_4, VAR_5;
        if (FUNC_4(VAR_3, "=", &VAR_4, &VAR_5) &&
            FUNC_1(VAR_4, FUNC_0(VAR_2)))
        {
            VAR_5 = FUNC_6(VAR_5);
            if (FUNC_5(VAR_5, "\"") && FUNC_2(VAR_5, "\""))
                VAR_5 = FUNC_3(VAR_5, 1, -1);
            FUNC_8(VAR_0, VAR_5);
        }
    }
    return 0;
}
