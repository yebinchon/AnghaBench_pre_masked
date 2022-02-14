
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ root; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

void FUNC_1(struct strbuf *VAR_0) {
        if (!VAR_0)
                return;
        if (VAR_0->root)
                VAR_0->root = FUNC_0(VAR_0->root);
}
