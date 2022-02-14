
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ status; scalar_t__ latent; } ;
typedef TYPE_1__ mpeg_bitstream_t ;
typedef int caption_frame_t ;
struct TYPE_8__ {double timestamp; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(mpeg_bitstream_t* VAR_1, caption_frame_t* VAR_2, double VAR_3)
{
    FUNC_1(VAR_1);

    while (VAR_1->latent && VAR_1->status == VAR_0 && FUNC_0(VAR_1)->timestamp < VAR_3) {
        FUNC_2(VAR_1, VAR_2);
    }
}
