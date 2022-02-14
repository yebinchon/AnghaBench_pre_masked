
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pl_parser {scalar_t__ probing; int force; } ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (struct pl_parser*,char*) ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (struct pl_parser*,TYPE_1__) ;
 int FUNC_3 (struct pl_parser*) ;
 int FUNC_4 (struct pl_parser*) ;

__attribute__((used)) static int FUNC_5(struct pl_parser *VAR_0)
{
    if (!VAR_0->force)
        return -1;
    if (VAR_0->probing)
        return 0;
    FUNC_0(VAR_0, "Reading plaintext playlist.\n");
    while (!FUNC_3(VAR_0)) {
        bstr VAR_1 = FUNC_1(FUNC_4(VAR_0));
        if (VAR_1.len == 0)
            continue;
        FUNC_2(VAR_0, VAR_1);
    }
    return 0;
}
