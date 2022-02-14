
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int vscore; TYPE_1__* vsapi; } ;
struct mp_image_params {int h; int w; int imgfmt; } ;
typedef int VSFrameRef ;
typedef int VSFormat ;
struct TYPE_2__ {int * (* newVideoFrame ) (int const*,int ,int ,int *,int ) ;int * (* getFormatPreset ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int const*,int ,int ,int *,int ) ;

__attribute__((used)) static VSFrameRef *FUNC_3(struct priv *VAR_0, struct mp_image_params *VAR_1)
{
    const VSFormat *VAR_2 =
        VAR_0->vsapi->getFormatPreset(FUNC_0(VAR_1->imgfmt), VAR_0->vscore);
    return VAR_0->vsapi->newVideoFrame(VAR_2, VAR_1->w, VAR_1->h, ((void*)0), VAR_0->vscore);
}
