
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x_resolution; scalar_t__ y_resolution; int stripe_size; scalar_t__ striped; int height; int width; int number; } ;
struct TYPE_5__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2Page ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_1(Jbig2Ctx *VAR_1, Jbig2Segment *VAR_2, Jbig2Page *VAR_3)
{
    if (VAR_3->x_resolution == 0) {
        FUNC_0(VAR_1, VAR_0, VAR_2->number, "page %d image is %dx%d (unknown res)", VAR_3->number, VAR_3->width, VAR_3->height);
    } else if (VAR_3->x_resolution == VAR_3->y_resolution) {
        FUNC_0(VAR_1, VAR_0, VAR_2->number, "page %d image is %dx%d (%d ppm)", VAR_3->number, VAR_3->width, VAR_3->height, VAR_3->x_resolution);
    } else {
        FUNC_0(VAR_1, VAR_0, VAR_2->number,
                    "page %d image is %dx%d (%dx%d ppm)", VAR_3->number, VAR_3->width, VAR_3->height, VAR_3->x_resolution, VAR_3->y_resolution);
    }
    if (VAR_3->striped) {
        FUNC_0(VAR_1, VAR_0, VAR_2->number, "\tmaximum stripe size: %d", VAR_3->stripe_size);
    }
}
