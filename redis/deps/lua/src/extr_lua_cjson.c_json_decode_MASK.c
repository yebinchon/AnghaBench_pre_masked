
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ json_token_t ;
struct TYPE_10__ {int tmp; int * data; int * ptr; scalar_t__ current_depth; int cfg; } ;
typedef TYPE_2__ json_parse_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*,char*,TYPE_1__*) ;
 int FUNC_4 (int *,int,int,char*) ;
 int * FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (size_t) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_1)
{
    json_parse_t VAR_2;
    json_token_t VAR_3;
    size_t VAR_4;

    FUNC_4(VAR_1, FUNC_7(VAR_1) == 1, 1, "expected 1 argument");

    VAR_2.cfg = FUNC_0(VAR_1);
    VAR_2.data = FUNC_5(VAR_1, 1, &VAR_4);
    VAR_2.current_depth = 0;
    VAR_2.ptr = VAR_2.data;






    if (VAR_4 >= 2 && (!VAR_2.data[0] || !VAR_2.data[1]))
        FUNC_6(VAR_1, "JSON parser does not support UTF-16 or UTF-32");




    VAR_2.tmp = FUNC_9(VAR_4);

    FUNC_1(&VAR_2, &VAR_3);
    FUNC_2(VAR_1, &VAR_2, &VAR_3);


    FUNC_1(&VAR_2, &VAR_3);

    if (VAR_3.type != VAR_0)
        FUNC_3(VAR_1, &VAR_2, "the end", &VAR_3);

    FUNC_8(VAR_2.tmp);

    return 1;
}
