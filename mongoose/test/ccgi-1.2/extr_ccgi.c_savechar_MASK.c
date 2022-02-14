
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int* str; } ;
typedef TYPE_1__ strbuf ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static strbuf *
FUNC_1(strbuf *VAR_0, int VAR_1, int VAR_2) {
    if (VAR_0 == 0 || VAR_1 >= VAR_0->size) {
        VAR_0 = FUNC_0(VAR_0, VAR_1 + 1);
    }
    VAR_0->str[VAR_1] = VAR_2;
    return VAR_0;
}
