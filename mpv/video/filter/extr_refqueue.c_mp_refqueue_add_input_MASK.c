
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {scalar_t__ num_queue; scalar_t__ pos; int queue; } ;
struct mp_image {int dummy; } ;


 int FUNC_0 (struct mp_refqueue*,int ,scalar_t__,int ,struct mp_image*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mp_refqueue *VAR_0, struct mp_image *VAR_1)
{
    FUNC_1(VAR_1);

    FUNC_0(VAR_0, VAR_0->queue, VAR_0->num_queue, 0, VAR_1);
    VAR_0->pos++;

    FUNC_1(VAR_0->pos >= 0 && VAR_0->pos < VAR_0->num_queue);
}
