
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ fourcc; } ;
struct TYPE_9__ {scalar_t__ image_id; scalar_t__ width; scalar_t__ height; TYPE_1__ format; } ;
struct va_surface {scalar_t__ w; scalar_t__ h; int is_derived; TYPE_4__ image; int ctx; int * display; int id; } ;
typedef scalar_t__ VAStatus ;
struct TYPE_8__ {scalar_t__ fourcc; } ;
typedef TYPE_2__ VAImageFormat ;
typedef int VADisplay ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,scalar_t__,scalar_t__,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_4__*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct va_surface*) ;

__attribute__((used)) static int FUNC_6(struct va_surface *VAR_3, VAImageFormat *VAR_4)
{
    VADisplay *VAR_5 = VAR_3->display;

    if (VAR_3->image.image_id != VAR_0 &&
        VAR_3->image.format.fourcc == VAR_4->fourcc)
        return 0;

    int VAR_6 = 0;

    FUNC_5(VAR_3);

    VAStatus VAR_7 = FUNC_3(VAR_5, VAR_3->id, &VAR_3->image);
    if (VAR_7 == VAR_2) {

        if (VAR_3->image.format.fourcc == VAR_4->fourcc &&
            VAR_3->image.width == VAR_3->w && VAR_3->image.height == VAR_3->h)
        {
            VAR_3->is_derived = 1;
            FUNC_1(VAR_3->ctx, "Using vaDeriveImage()\n");
        } else {
            FUNC_4(VAR_3->display, VAR_3->image.image_id);
            VAR_7 = VAR_1;
        }
    }
    if (VAR_7 != VAR_2) {
        VAR_3->image.image_id = VAR_0;
        VAR_7 = FUNC_2(VAR_3->display, VAR_4, VAR_3->w, VAR_3->h, &VAR_3->image);
        if (!FUNC_0(VAR_3->ctx, "vaCreateImage()")) {
            VAR_3->image.image_id = VAR_0;
            VAR_6 = -1;
        }
    }

    return VAR_6;
}
