
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_refqueue {int filter; int out; } ;
struct mp_image {int dummy; } ;


 int FUNC_0 (int ,struct mp_image*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mp_refqueue*) ;

void FUNC_5(struct mp_refqueue *VAR_1, struct mp_image *VAR_2)
{
    if (VAR_2) {
        FUNC_3(VAR_1->out, FUNC_0(VAR_0, VAR_2));
    } else {
        FUNC_1(VAR_1->filter, "failed to output frame\n");
        FUNC_2(VAR_1->filter);
    }
    FUNC_4(VAR_1);
}
