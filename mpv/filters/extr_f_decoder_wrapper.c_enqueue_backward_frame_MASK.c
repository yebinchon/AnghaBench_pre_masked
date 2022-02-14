
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct priv {scalar_t__ reverse_queue_byte_size; int reverse_queue_complete; int num_reverse_queue; int reverse_queue; TYPE_1__* header; TYPE_2__* opt_cache; } ;
struct mp_frame {scalar_t__ type; } ;
struct MPOpts {scalar_t__ video_reverse_size; scalar_t__ audio_reverse_size; } ;
struct TYPE_4__ {struct MPOpts* opts; } ;
struct TYPE_3__ {int type; } ;


 int FUNC_0 (struct priv*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct priv*,int ,int ,int ,struct mp_frame) ;


 scalar_t__ FUNC_2 (struct mp_frame) ;
 int FUNC_3 (struct mp_frame*) ;

__attribute__((used)) static void FUNC_4(struct priv *VAR_1, struct mp_frame VAR_2)
{
    bool VAR_3 = VAR_2.type == VAR_0;

    if (!VAR_3) {
        struct MPOpts *VAR_4 = VAR_1->opt_cache->opts;

        uint64_t VAR_5 = 0;
        switch (VAR_1->header->type) {
        case 128: VAR_5 = VAR_4->video_reverse_size; break;
        case 129: VAR_5 = VAR_4->audio_reverse_size; break;
        }

        if (VAR_1->reverse_queue_byte_size >= VAR_5) {
            FUNC_0(VAR_1, "Reversal queue overflow, discarding frame.\n");
            FUNC_3(&VAR_2);
            return;
        }

        VAR_1->reverse_queue_byte_size += FUNC_2(VAR_2);
    }


    FUNC_1(VAR_1, VAR_1->reverse_queue, VAR_1->num_reverse_queue,
                        VAR_3 ? 0 : VAR_1->num_reverse_queue, VAR_2);

    VAR_1->reverse_queue_complete = VAR_3;
}
