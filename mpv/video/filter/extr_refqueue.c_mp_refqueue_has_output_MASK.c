
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {scalar_t__ pos; } ;


 int FUNC_0 (struct mp_refqueue*) ;

__attribute__((used)) static bool FUNC_1(struct mp_refqueue *VAR_0)
{
    return VAR_0->pos >= 0 && !FUNC_0(VAR_0);
}
