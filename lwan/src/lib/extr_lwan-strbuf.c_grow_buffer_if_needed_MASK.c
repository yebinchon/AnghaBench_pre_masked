
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buffer; int static_buffer; } ;
struct lwan_strbuf {int flags; int used; TYPE_1__ value; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (int) ;
 char* FUNC_3 (size_t const) ;
 size_t FUNC_4 (size_t,int) ;
 int FUNC_5 (char*,int ,int) ;
 char* FUNC_6 (char*,size_t const) ;

__attribute__((used)) static bool FUNC_7(struct lwan_strbuf *VAR_1, size_t VAR_2)
{
    if (VAR_1->flags & VAR_0) {
        const size_t VAR_3 = FUNC_1(FUNC_4(VAR_2 + 1, VAR_1->used));
        if (FUNC_0(!VAR_3))
            return 0;

        char *VAR_4 = FUNC_3(VAR_3);
        if (FUNC_0(!VAR_4))
            return 0;

        FUNC_5(VAR_4, VAR_1->value.static_buffer, VAR_1->used);
        VAR_4[VAR_1->used + 1] = '\0';

        VAR_1->flags &= ~VAR_0;
        VAR_1->value.buffer = VAR_4;

        return 1;
    }

    if (FUNC_0(!VAR_1->used || FUNC_2(VAR_1->used) < VAR_2)) {
        const size_t VAR_5 = FUNC_1(VAR_2 + 1);
        if (FUNC_0(!VAR_5))
            return 0;

        char *VAR_6 = FUNC_6(VAR_1->value.buffer, VAR_5);
        if (FUNC_0(!VAR_6))
            return 0;
        VAR_1->value.buffer = VAR_6;
    }

    return 1;
}
