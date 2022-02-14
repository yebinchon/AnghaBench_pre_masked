
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct priv {TYPE_1__* vsapi; } ;
struct mp_image {int num_planes; int * stride; int ** planes; int member_0; } ;
typedef int VSFrameRef ;
struct TYPE_5__ {int id; } ;
typedef TYPE_2__ VSFormat ;
struct TYPE_4__ {int (* getStride ) (int const*,int) ;scalar_t__ (* getReadPtr ) (int const*,int) ;int * (* getWritePtr ) (int *,int) ;int (* getFrameHeight ) (int const*,int ) ;int (* getFrameWidth ) (int const*,int ) ;TYPE_2__* (* getFrameFormat ) (int const*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mp_image*,int ,int ) ;
 int FUNC_2 (struct mp_image*,int ) ;
 TYPE_2__* FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int const*,int ) ;
 int * FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int const*,int) ;
 int FUNC_8 (int const*,int) ;

__attribute__((used)) static struct mp_image FUNC_9(struct priv *VAR_0, const VSFrameRef *VAR_1,
                                    bool VAR_2)
{
    const VSFormat *VAR_3 = VAR_0->vsapi->getFrameFormat(VAR_1);

    struct mp_image VAR_4 = {0};
    FUNC_2(&VAR_4, FUNC_0(VAR_3->id));
    FUNC_1(&VAR_4, VAR_0->vsapi->getFrameWidth(VAR_1, 0),
                            VAR_0->vsapi->getFrameHeight(VAR_1, 0));

    for (int VAR_5 = 0; VAR_5 < VAR_4.num_planes; VAR_5++) {
        if (VAR_2) {
            VAR_4.planes[VAR_5] = VAR_0->vsapi->getWritePtr((VSFrameRef *)VAR_1, VAR_5);
        } else {
            VAR_4.planes[VAR_5] = (uint8_t *)VAR_0->vsapi->getReadPtr(VAR_1, VAR_5);
        }
        VAR_4.stride[VAR_5] = VAR_0->vsapi->getStride(VAR_1, VAR_5);
    }

    return VAR_4;
}
