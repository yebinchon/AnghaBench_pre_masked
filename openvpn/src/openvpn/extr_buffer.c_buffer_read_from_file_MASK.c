
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct buffer {int member_0; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {size_t st_size; int member_0; } ;
typedef TYPE_1__ platform_stat_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 struct buffer FUNC_2 (size_t const,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,scalar_t__) ;
 int FUNC_4 (struct buffer*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int,size_t const,int *) ;
 int FUNC_7 (struct buffer*,struct gc_arena*) ;
 int * FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (char const*,TYPE_1__*) ;

struct buffer
FUNC_10(const char *VAR_0, struct gc_arena *VAR_1)
{
    struct buffer VAR_2 = { 0 };

    platform_stat_t VAR_3 = {0};
    if (FUNC_9(VAR_0, &VAR_3) < 0)
    {
        return VAR_2;
    }

    FILE *VAR_4 = FUNC_8(VAR_0, "r");
    if (!VAR_4)
    {
        return VAR_2;
    }

    const size_t VAR_5 = VAR_3.st_size;
    VAR_2 = FUNC_2(VAR_5 + 1, VAR_1);
    ssize_t VAR_6 = FUNC_6(FUNC_1(&VAR_2), 1, VAR_5, VAR_4);
    if (VAR_6 < 0)
    {
        FUNC_7(&VAR_2, VAR_1);
        goto cleanup;
    }
    FUNC_0(FUNC_3(&VAR_2, VAR_6));
    FUNC_4(&VAR_2);

cleanup:
    FUNC_5(VAR_4);
    return VAR_2;
}
