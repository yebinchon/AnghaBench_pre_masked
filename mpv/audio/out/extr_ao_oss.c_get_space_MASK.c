
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {scalar_t__ audio_fd; int outburst; scalar_t__ device_failed; } ;
struct ao {int sstride; struct priv* priv; } ;
struct TYPE_3__ {int fragments; int fragsize; int member_0; } ;
typedef TYPE_1__ audio_buf_info ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ao*) ;
 double FUNC_1 (struct ao*) ;
 int FUNC_2 (scalar_t__,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    audio_buf_info VAR_3 = {0};
    if (FUNC_2(VAR_2->audio_fd, VAR_0, &VAR_3) != -1) {

        return VAR_3.fragments * VAR_3.fragsize / VAR_1->sstride;
    }

    if (VAR_2->audio_fd < 0 && VAR_2->device_failed && FUNC_1(VAR_1) > 0.2)
        return 0;

    if (VAR_2->audio_fd < 0 || FUNC_0(VAR_1) > 0)
        return VAR_2->outburst / VAR_1->sstride;

    return 0;
}
