
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_subfilter {int in; } ;
struct mp_filter {int dummy; } ;


 int FUNC_0 (struct mp_filter*) ;
 struct mp_filter* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mp_subfilter *VAR_0)
{

    struct mp_filter *VAR_1 = FUNC_1(VAR_0->in);
    if (VAR_1)
        FUNC_0(VAR_1);
}
