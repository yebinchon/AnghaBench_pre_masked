
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ current_depth; scalar_t__ data; scalar_t__ ptr; int tmp; TYPE_1__* cfg; } ;
typedef TYPE_2__ json_parse_t ;
struct TYPE_4__ {scalar_t__ decode_max_depth; } ;


 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(lua_State *VAR_0, json_parse_t *VAR_1, int VAR_2)
{
    VAR_1->current_depth++;

    if (VAR_1->current_depth <= VAR_1->cfg->decode_max_depth &&
        FUNC_1(VAR_0, VAR_2)) {
        return;
    }

    FUNC_2(VAR_1->tmp);
    FUNC_0(VAR_0, "Found too many nested data structures (%d) at character %d",
        VAR_1->current_depth, VAR_1->ptr - VAR_1->data);
}
