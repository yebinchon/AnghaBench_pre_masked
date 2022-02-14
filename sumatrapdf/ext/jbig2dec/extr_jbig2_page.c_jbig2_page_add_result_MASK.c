
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ height; int width; } ;
struct TYPE_9__ {int height; int flags; TYPE_2__* image; scalar_t__ striped; } ;
typedef TYPE_1__ Jbig2Page ;
typedef TYPE_2__ Jbig2Image ;
typedef int Jbig2Ctx ;
typedef int Jbig2ComposeOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,char*,...) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*,int ,scalar_t__,int) ;

int
FUNC_3(Jbig2Ctx *VAR_3, Jbig2Page *VAR_4, Jbig2Image *VAR_5, uint32_t VAR_6, uint32_t VAR_7, Jbig2ComposeOp VAR_8)
{
    int VAR_9;


    if (VAR_4->image == ((void*)0))
        return FUNC_0(VAR_3, VAR_2, -1, "page info possibly missing, no image defined");


    if (VAR_4->striped && VAR_4->height == 0xFFFFFFFF) {
        uint32_t VAR_10 = VAR_7 + VAR_5->height;
        if (VAR_4->image->height < VAR_10) {
            Jbig2Image *VAR_11 = ((void*)0);

            FUNC_0(VAR_3, VAR_0, -1, "growing page buffer to %u rows to accommodate new stripe", VAR_10);
            VAR_11 = FUNC_2(VAR_3, VAR_4->image, VAR_4->image->width, VAR_10, VAR_4->flags & 4);
            if (VAR_11 == ((void*)0)) {
                return FUNC_0(VAR_3, VAR_1, -1, "unable to resize image to accommodate new stripe");
            }
            VAR_4->image = VAR_11;
        }
    }

    VAR_9 = FUNC_1(VAR_3, VAR_4->image, VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_9 < 0)
        return FUNC_0(VAR_3, VAR_2, -1, "failed to compose image with page");

    return 0;
}
