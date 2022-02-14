
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vo {TYPE_1__* x11; } ;
struct TYPE_9__ {int visual; } ;
struct priv {int Shmem_Flag; int image_height; TYPE_3__** myximage; int image_width; int depth; TYPE_2__ vinfo; TYPE_4__* Shminfo; struct vo* vo; } ;
struct TYPE_11__ {scalar_t__ shmid; char* shmaddr; int readOnly; } ;
struct TYPE_10__ {int bytes_per_line; int height; char* data; } ;
struct TYPE_8__ {int display; scalar_t__ ShmCompletionEvent; scalar_t__ display_is_local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*) ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_2 (int ,int ,int ,int ,int ,int *,int ,int,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 TYPE_3__* FUNC_5 (int ,int ,int ,int ,int *,TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;
 char* FUNC_9 (int,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int,int) ;

__attribute__((used)) static bool FUNC_13(struct priv *VAR_6, int VAR_7)
{
    struct vo *VAR_8 = VAR_6->vo;
    if (VAR_8->x11->display_is_local && FUNC_7(VAR_8->x11->display)) {
        VAR_6->Shmem_Flag = 1;
        VAR_8->x11->ShmCompletionEvent = FUNC_6(VAR_8->x11->display)
                                    + VAR_4;
    } else {
        VAR_6->Shmem_Flag = 0;
        FUNC_1(VAR_8, "Shared memory not supported\nReverting to normal Xlib\n");
    }

    if (VAR_6->Shmem_Flag) {
        VAR_6->myximage[VAR_7] =
            FUNC_5(VAR_8->x11->display, VAR_6->vinfo.visual, VAR_6->depth,
                            VAR_5, ((void*)0), &VAR_6->Shminfo[VAR_7], VAR_6->image_width,
                            VAR_6->image_height);
        if (VAR_6->myximage[VAR_7] == ((void*)0)) {
            FUNC_1(VAR_8, "Shared memory error,disabling ( Ximage error )\n");
            goto shmemerror;
        }
        VAR_6->Shminfo[VAR_7].shmid = FUNC_12(VAR_2,
                                       VAR_6->myximage[VAR_7]->bytes_per_line *
                                       VAR_6->myximage[VAR_7]->height,
                                       VAR_1 | 0777);
        if (VAR_6->Shminfo[VAR_7].shmid < 0) {
            FUNC_3(VAR_6->myximage[VAR_7]);
            FUNC_1(VAR_8, "Shared memory error,disabling ( seg id error )\n");
            goto shmemerror;
        }
        VAR_6->Shminfo[VAR_7].shmaddr = (char *) FUNC_10(VAR_6->Shminfo[VAR_7].shmid, 0, 0);

        if (VAR_6->Shminfo[VAR_7].shmaddr == ((char *) -1)) {
            FUNC_3(VAR_6->myximage[VAR_7]);
            FUNC_1(VAR_8, "Shared memory error,disabling ( address error )\n");
            goto shmemerror;
        }
        VAR_6->myximage[VAR_7]->data = VAR_6->Shminfo[VAR_7].shmaddr;
        VAR_6->Shminfo[VAR_7].readOnly = VAR_0;
        FUNC_4(VAR_8->x11->display, &VAR_6->Shminfo[VAR_7]);

        FUNC_8(VAR_8->x11->display, VAR_0);

        FUNC_11(VAR_6->Shminfo[VAR_7].shmid, VAR_3, 0);
    } else {
shmemerror:
        VAR_6->Shmem_Flag = 0;

        FUNC_0(VAR_8, "Not using SHM.\n");
        VAR_6->myximage[VAR_7] =
            FUNC_2(VAR_8->x11->display, VAR_6->vinfo.visual, VAR_6->depth, VAR_5,
                         0, ((void*)0), VAR_6->image_width, VAR_6->image_height, 8, 0);
        if (!VAR_6->myximage[VAR_7]) {
            FUNC_1(VAR_8, "could not allocate image");
            return 0;
        }
        VAR_6->myximage[VAR_7]->data =
            FUNC_9(1, VAR_6->myximage[VAR_7]->bytes_per_line * VAR_6->image_height + 32);
    }
    return 1;
}
