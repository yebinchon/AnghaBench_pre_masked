
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_1 (struct mp_filter*,int *) ;

struct mp_filter *FUNC_2(struct mp_filter *VAR_3)
{
    struct mp_filter *VAR_4 = FUNC_1(VAR_3, &VAR_2);
    if (!VAR_4)
        return ((void*)0);

    FUNC_0(VAR_4, VAR_0, "in");
    FUNC_0(VAR_4, VAR_1, "out");

    return VAR_4;
}
