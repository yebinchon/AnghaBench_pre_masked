
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int str; } ;
typedef TYPE_1__ strbuf ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static strbuf *
FUNC_3(strbuf *VAR_0, const char *VAR_1) {
    int VAR_2 = FUNC_2(VAR_1);
    if (VAR_0 == 0 || VAR_2 >= VAR_0->size) {
        VAR_0 = FUNC_0(VAR_0, VAR_2 + 1);
    }
    FUNC_1(VAR_0->str, VAR_1);
    return VAR_0;
}
