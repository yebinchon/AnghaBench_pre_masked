
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kms {scalar_t__ crtc_id; TYPE_3__* encoder; TYPE_1__* connector; int fd; } ;
struct TYPE_8__ {unsigned int count_encoders; unsigned int count_crtcs; scalar_t__* crtcs; int * encoders; } ;
typedef TYPE_2__ drmModeRes ;
struct TYPE_9__ {scalar_t__ encoder_id; scalar_t__ crtc_id; int possible_crtcs; } ;
typedef TYPE_3__ drmModeEncoder ;
struct TYPE_7__ {scalar_t__ encoder_id; scalar_t__ connector_id; unsigned int count_encoders; int * encoders; } ;


 int FUNC_0 (struct kms*,char*,scalar_t__) ;
 int FUNC_1 (struct kms*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct kms*,char*,unsigned int,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct kms *VAR_1, const drmModeRes *VAR_2)
{

    for (unsigned int VAR_3 = 0; VAR_3 < VAR_2->count_encoders; VAR_3++) {
        drmModeEncoder *VAR_4 = FUNC_4(VAR_1->fd, VAR_2->encoders[VAR_3]);
        if (!VAR_4) {
            FUNC_2(VAR_1, "Cannot retrieve encoder %u:%u: %s\n",
                    VAR_3, VAR_2->encoders[VAR_3], FUNC_5(VAR_0));
            continue;
        }

        if (VAR_4->encoder_id == VAR_1->connector->encoder_id && VAR_4->crtc_id != 0) {
            FUNC_1(VAR_1, "Connector %u currently connected to encoder %u\n",
                       VAR_1->connector->connector_id, VAR_1->connector->encoder_id);
            VAR_1->encoder = VAR_4;
            VAR_1->crtc_id = VAR_4->crtc_id;
            goto success;
        }

        FUNC_3(VAR_4);
    }


    for (unsigned int VAR_5 = 0; VAR_5 < VAR_1->connector->count_encoders; ++VAR_5) {
        drmModeEncoder *VAR_6
            = FUNC_4(VAR_1->fd, VAR_1->connector->encoders[VAR_5]);
        if (!VAR_6) {
            FUNC_2(VAR_1, "Cannot retrieve encoder %u:%u: %s\n",
                    VAR_5, VAR_1->connector->encoders[VAR_5], FUNC_5(VAR_0));
            continue;
        }


        for (unsigned int VAR_7 = 0; VAR_7 < VAR_2->count_crtcs; ++VAR_7) {

            if (!(VAR_6->possible_crtcs & (1 << VAR_7)))
                continue;

            VAR_1->encoder = VAR_6;
            VAR_1->crtc_id = VAR_2->crtcs[VAR_7];
            goto success;
        }

        FUNC_3(VAR_6);
    }

    FUNC_0(VAR_1, "Connector %u has no suitable CRTC\n",
           VAR_1->connector->connector_id);
    return 0;

  success:
    FUNC_1(VAR_1, "Selected Encoder %u with CRTC %u\n",
               VAR_1->encoder->encoder_id, VAR_1->crtc_id);
    return 1;
}
