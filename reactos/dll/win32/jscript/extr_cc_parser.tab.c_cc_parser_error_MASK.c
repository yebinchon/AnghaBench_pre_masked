
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hres; } ;
typedef TYPE_1__ parser_ctx_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(parser_ctx_t *VAR_1, const char *VAR_2)
{
    if(FUNC_0(VAR_1->hres)) {
        FUNC_1("%s\n", VAR_2);
        VAR_1->hres = VAR_0;
    }

    return 0;
}
