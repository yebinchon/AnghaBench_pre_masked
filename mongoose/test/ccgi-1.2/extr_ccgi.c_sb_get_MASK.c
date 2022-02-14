
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
typedef TYPE_1__ strbuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int VAR_0 ;

__attribute__((used)) static strbuf *
FUNC_4(strbuf *VAR_1, int VAR_2) {
    int VAR_3;
    for (VAR_3 = 128; VAR_3 < VAR_2; VAR_3 += VAR_3)
        ;
    if (VAR_1 == 0) {
        VAR_1 = (strbuf *) FUNC_2(sizeof(*VAR_1) + VAR_3);
    }
    else {
        VAR_1 = (strbuf *) FUNC_3(VAR_1, sizeof(*VAR_1) + VAR_3);
        if (VAR_1 == 0) {
            FUNC_1("C CGI Library out of memory\n", VAR_0);
            FUNC_0(1);
        }
    }
    VAR_1->size = VAR_3;
    return VAR_1;
}
