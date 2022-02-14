
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t elements; scalar_t__ base; } ;
struct fortune_array {TYPE_2__ base; } ;
struct db_stmt {int dummy; } ;
struct TYPE_4__ {char* s; int i; } ;
struct db_row {char kind; int buffer_length; TYPE_1__ u; } ;
struct coro {int dummy; } ;
struct TYPE_6__ {int message; int id; } ;
struct Fortune {TYPE_3__ item; } ;
typedef int fortune_query ;
typedef int fortune_buffer ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct coro*,struct fortune_array*,int ,char*) ;
 int FUNC_2 (struct coro*,int) ;
 int VAR_0 ;
 struct db_stmt* FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (struct db_stmt*) ;
 scalar_t__ FUNC_5 (struct db_stmt*,struct db_row*) ;
 int FUNC_6 (struct fortune_array*) ;
 int FUNC_7 (struct fortune_array*) ;
 int FUNC_8 (struct fortune_array*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct coro *VAR_2, void *VAR_3)
{
    static const char VAR_4[] = "SELECT * FROM Fortune";
    char VAR_5[256];
    struct Fortune *VAR_6 = VAR_3;
    struct fortune_array VAR_7;
    struct db_stmt *VAR_8;
    size_t VAR_9;

    VAR_8 = FUNC_3(VAR_0, VAR_4, sizeof(VAR_4) - 1);
    if (FUNC_0(!VAR_8))
        return 0;

    FUNC_6(&VAR_7);

    struct db_row VAR_10[] = {
        { .kind = 'i' },
        { .kind = 's', .u.s = VAR_5, .buffer_length = sizeof(VAR_5) },
        { .kind = '\0' }
    };
    while (FUNC_5(VAR_8, VAR_10)) {
        if (!FUNC_1(VAR_2, &VAR_7, VAR_10[0].u.i, VAR_10[1].u.s))
            goto out;
    }

    if (!FUNC_1(VAR_2, &VAR_7, 0,
                            "Additional fortune added at request time."))
        goto out;

    FUNC_8(&VAR_7, VAR_1);

    for (VAR_9 = 0; VAR_9 < VAR_7.base.elements; VAR_9++) {
        struct Fortune *VAR_11 = &((struct Fortune *)VAR_7.base.base)[VAR_9];
        VAR_6->item.id = VAR_11->item.id;
        VAR_6->item.message = VAR_11->item.message;
        FUNC_2(VAR_2, 1);
    }

out:
    FUNC_7(&VAR_7);
    FUNC_4(VAR_8);
    return 0;
}
