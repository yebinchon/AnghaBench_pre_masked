
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* install_file; scalar_t__ callback; scalar_t__ uri; } ;
typedef TYPE_1__ install_ctx_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(install_ctx_t *VAR_0)
{
    if(VAR_0->uri)
        FUNC_1(VAR_0->uri);
    if(VAR_0->callback)
        FUNC_0(VAR_0->callback);
    FUNC_2(VAR_0->install_file);
    FUNC_2(VAR_0);
}
