
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xvctx {int Shmem_Flag; int image_height; TYPE_1__** xvimage; int xv_format; int xv_port; TYPE_2__* Shminfo; int image_width; } ;
struct vo_x11_state {int display; scalar_t__ ShmCompletionEvent; scalar_t__ display_is_local; } ;
struct vo {struct vo_x11_state* x11; struct xvctx* priv; } ;
struct mp_image {int h; int w; } ;
struct TYPE_4__ {void* data; int width; int height; int data_size; } ;
typedef TYPE_1__ XvImage ;
struct TYPE_5__ {void* shmaddr; int shmid; int readOnly; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vo*,char*,int,int,int,int ) ;
 int FUNC_2 (struct vo*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *,int,int,TYPE_2__*) ;
 void* FUNC_9 (int ) ;
 struct mp_image FUNC_10 (struct vo*,int) ;
 int FUNC_11 (struct mp_image*,int ,int ,int ,int ) ;
 int FUNC_12 (struct mp_image*,int,int) ;
 void* FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_16(struct vo *VAR_5, int VAR_6)
{
    struct xvctx *VAR_7 = VAR_5->priv;
    struct vo_x11_state *VAR_8 = VAR_5->x11;

    int VAR_9 = FUNC_0(VAR_7->image_width, 32);

    int VAR_10 = FUNC_0(VAR_7->image_height, 2);
    if (VAR_8->display_is_local && FUNC_5(VAR_8->display)) {
        VAR_7->Shmem_Flag = 1;
        VAR_8->ShmCompletionEvent = FUNC_4(VAR_8->display)
                                + VAR_4;
    } else {
        VAR_7->Shmem_Flag = 0;
        FUNC_2(VAR_5, "Shared memory not supported\nReverting to normal Xv.\n");
    }
    if (VAR_7->Shmem_Flag) {
        VAR_7->xvimage[VAR_6] =
            (XvImage *) FUNC_8(VAR_8->display, VAR_7->xv_port,
                                         VAR_7->xv_format, ((void*)0),
                                         VAR_9, VAR_10,
                                         &VAR_7->Shminfo[VAR_6]);
        if (!VAR_7->xvimage[VAR_6])
            return 0;

        VAR_7->Shminfo[VAR_6].shmid = FUNC_15(VAR_2,
                                         VAR_7->xvimage[VAR_6]->data_size,
                                         VAR_1 | 0777);
        VAR_7->Shminfo[VAR_6].shmaddr = FUNC_13(VAR_7->Shminfo[VAR_6].shmid, 0, 0);
        if (VAR_7->Shminfo[VAR_6].shmaddr == (void *)-1)
            return 0;
        VAR_7->Shminfo[VAR_6].readOnly = VAR_0;

        VAR_7->xvimage[VAR_6]->data = VAR_7->Shminfo[VAR_6].shmaddr;
        FUNC_3(VAR_8->display, &VAR_7->Shminfo[VAR_6]);
        FUNC_6(VAR_8->display, VAR_0);
        FUNC_14(VAR_7->Shminfo[VAR_6].shmid, VAR_3, 0);
    } else {
        VAR_7->xvimage[VAR_6] =
            (XvImage *) FUNC_7(VAR_8->display, VAR_7->xv_port,
                                      VAR_7->xv_format, ((void*)0), VAR_9,
                                      VAR_10);
        if (!VAR_7->xvimage[VAR_6])
            return 0;
        VAR_7->xvimage[VAR_6]->data = FUNC_9(VAR_7->xvimage[VAR_6]->data_size);
        if (!VAR_7->xvimage[VAR_6]->data)
            return 0;
        FUNC_6(VAR_8->display, VAR_0);
    }

    if ((VAR_7->xvimage[VAR_6]->width < VAR_9) ||
        (VAR_7->xvimage[VAR_6]->height < VAR_10)) {
        FUNC_1(VAR_5, "Got XvImage with too small size: %ux%u (expected %ux%u)\n",
               VAR_7->xvimage[VAR_6]->width, VAR_7->xvimage[VAR_6]->height,
               VAR_9, VAR_7->image_height);
        return 0;
    }

    struct mp_image VAR_11 = FUNC_10(VAR_5, VAR_6);
    FUNC_12(&VAR_11, VAR_9, VAR_10);
    FUNC_11(&VAR_11, 0, 0, VAR_11.w, VAR_11.h);
    return 1;
}
