
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int password; int username; } ;
struct http_proxy_info {TYPE_1__ up; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 struct buffer FUNC_2 (scalar_t__,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int const*,struct gc_arena*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static const char *
FUNC_6(const struct http_proxy_info *VAR_0,
                            struct gc_arena *VAR_1)
{
    struct buffer VAR_2 = FUNC_2(FUNC_5(VAR_0->up.username) + FUNC_5(VAR_0->up.password) + 2, VAR_1);
    FUNC_0(FUNC_5(VAR_0->up.username) > 0);
    FUNC_3(&VAR_2, "%s:%s", VAR_0->up.username, VAR_0->up.password);
    return (const char *)FUNC_4((const uint8_t *)FUNC_1(&VAR_2), VAR_1);
}
