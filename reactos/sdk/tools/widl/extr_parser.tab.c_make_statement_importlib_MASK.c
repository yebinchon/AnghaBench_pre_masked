
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* str; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
typedef TYPE_2__ statement_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static statement_t *FUNC_1(const char *VAR_1)
{
    statement_t *VAR_2 = FUNC_0(VAR_0);
    VAR_2->u.str = VAR_1;
    return VAR_2;
}
