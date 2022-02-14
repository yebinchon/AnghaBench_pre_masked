
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int attrs; } ;
typedef TYPE_1__ var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;

const char *FUNC_3(const var_t *VAR_3)
{
    static char VAR_4[256];

    if (FUNC_0( VAR_3->attrs, VAR_0 ))
        FUNC_2( VAR_4, "get_" );
    else if (FUNC_0( VAR_3->attrs, VAR_1 ))
        FUNC_2( VAR_4, "put_" );
    else if (FUNC_0( VAR_3->attrs, VAR_2 ))
        FUNC_2( VAR_4, "putref_" );
    else
        VAR_4[0] = 0;
    FUNC_1( VAR_4, VAR_3->name );
    return VAR_4;
}
