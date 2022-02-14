
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prepare; int disconnect; } ;
struct db_mysql {int con; TYPE_1__ base; } ;
struct db {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct db_mysql*) ;
 struct db_mysql* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,char const*,char const*,char const*,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;

struct db *FUNC_6(const char *VAR_2, const char *VAR_3, const char *VAR_4,
        const char *VAR_5)
{
    struct db_mysql *VAR_6 = FUNC_1(sizeof(*VAR_6));

    if (!VAR_6)
        return ((void*)0);

    VAR_6->con = FUNC_3(((void*)0));
    if (!VAR_6->con) {
        FUNC_0(VAR_6);
        return ((void*)0);
    }

    if (!FUNC_4(VAR_6->con, VAR_2, VAR_3, VAR_4, VAR_5, 0, ((void*)0), 0))
        goto error;

    if (FUNC_5(VAR_6->con, "utf8"))
        goto error;

    VAR_6->base.disconnect = VAR_0;
    VAR_6->base.prepare = VAR_1;

    return (struct db *)VAR_6;

error:
    FUNC_2(VAR_6->con);
    FUNC_0(VAR_6);
    return ((void*)0);
}
