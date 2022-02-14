
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {int in_format; struct mp_image* next; } ;
struct mp_image {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mp_image*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mp_refqueue*,struct mp_image*) ;
 int FUNC_5 (struct mp_refqueue*) ;
 scalar_t__ FUNC_6 (struct mp_refqueue*) ;

struct mp_image *FUNC_7(struct mp_refqueue *VAR_0)
{
    if (FUNC_6(VAR_0) || !VAR_0->next)
        return ((void*)0);

    struct mp_image *VAR_1 = VAR_0->next;
    VAR_0->next = ((void*)0);

    FUNC_3(&VAR_0->in_format);
    FUNC_5(VAR_0);

    VAR_0->in_format = FUNC_1(VAR_1);
    if (!VAR_0->in_format)
        FUNC_0();
    FUNC_2(VAR_0->in_format);

    FUNC_4(VAR_0, VAR_1);
    return VAR_1;
}
