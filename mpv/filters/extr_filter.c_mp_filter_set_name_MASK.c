
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {TYPE_1__* in; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mp_filter*,char const*) ;

void FUNC_2(struct mp_filter *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0->in->name);
    VAR_0->in->name = FUNC_1(VAR_0, VAR_1);
}
