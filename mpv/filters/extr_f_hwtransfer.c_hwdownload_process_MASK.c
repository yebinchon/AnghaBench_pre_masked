
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int hwctx; } ;
struct mp_hwdownload {int pool; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_filter {int * ppins; struct mp_hwdownload* priv; } ;


 struct mp_frame FUNC_0 (scalar_t__,struct mp_image*) ;
 int FUNC_1 (struct mp_filter*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct mp_frame*) ;
 struct mp_image* FUNC_3 (struct mp_image*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct mp_frame) ;
 struct mp_frame FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mp_filter *VAR_1)
{
    struct mp_hwdownload *VAR_2 = VAR_1->priv;

    if (!FUNC_4(VAR_1->ppins[1], VAR_1->ppins[0]))
        return;

    struct mp_frame VAR_3 = FUNC_6(VAR_1->ppins[0]);
    if (VAR_3.type != VAR_0)
        goto passthrough;

    struct mp_image *VAR_4 = VAR_3.data;
    if (!VAR_4->hwctx)
        goto passthrough;

    struct mp_image *VAR_5 = FUNC_3(VAR_4, VAR_2->pool);
    if (!VAR_5) {
        FUNC_1(VAR_1, "Could not copy hardware frame to CPU memory.\n");
        goto passthrough;
    }

    FUNC_2(&VAR_3);
    FUNC_5(VAR_1->ppins[1], FUNC_0(VAR_0, VAR_5));
    return;

passthrough:
    FUNC_5(VAR_1->ppins[1], VAR_3);
    return;
}
