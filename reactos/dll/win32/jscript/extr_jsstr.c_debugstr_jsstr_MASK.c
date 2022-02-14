
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsstr_t ;
struct TYPE_6__ {int buf; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_4__ {int * left; } ;


 char const* FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char const* FUNC_7 (char*,char const*) ;

const char *FUNC_8(jsstr_t *VAR_0)
{
    return FUNC_5(VAR_0) ? FUNC_0(FUNC_2(VAR_0)->buf, FUNC_6(VAR_0))
        : FUNC_4(VAR_0) ? FUNC_0(FUNC_1(VAR_0)->buf, FUNC_6(VAR_0))
        : FUNC_7("%s...", FUNC_8(FUNC_3(VAR_0)->left));
}
