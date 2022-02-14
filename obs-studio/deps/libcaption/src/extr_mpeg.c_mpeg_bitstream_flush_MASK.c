
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t latent; int front; int status; } ;
typedef TYPE_1__ mpeg_bitstream_t ;
typedef int cea708_t ;
typedef int caption_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;

size_t FUNC_3(mpeg_bitstream_t* VAR_2, caption_frame_t* VAR_3)
{
    if (VAR_2->latent) {
        cea708_t* VAR_4 = FUNC_0(VAR_2);
        VAR_2->status = FUNC_2(VAR_0, FUNC_1(VAR_3, VAR_4));
        VAR_2->front = (VAR_2->front + 1) % VAR_1;
        --VAR_2->latent;
    }

    return VAR_2->latent;
}
