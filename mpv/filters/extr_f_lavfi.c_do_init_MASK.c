
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_lavfi {int dummy; } ;
struct lavfi_pad {int pin_index; scalar_t__ type; int name; int dir; int pin; } ;
struct lavfi {int num_in_pads; int num_out_pads; scalar_t__ force_type; TYPE_1__* f; struct mp_lavfi public; scalar_t__ force_bidir; struct lavfi_pad** out_pads; struct lavfi_pad** in_pads; scalar_t__ failed; } ;
struct TYPE_3__ {int num_pins; int * ppins; } ;


 int FUNC_0 (struct lavfi*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct lavfi*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static struct mp_lavfi *FUNC_5(struct lavfi *VAR_2)
{
    FUNC_3(VAR_2, 1);

    if (VAR_2->failed)
        goto error;

    for (int VAR_3 = 0; VAR_3 < VAR_2->num_in_pads + VAR_2->num_out_pads; VAR_3++) {

        struct lavfi_pad *VAR_4 =
            VAR_3 < VAR_2->num_in_pads ? VAR_2->in_pads[VAR_3] : VAR_2->out_pads[VAR_3 - VAR_2->num_in_pads];

        VAR_4->pin_index = VAR_2->f->num_pins;
        VAR_4->pin = FUNC_1(VAR_2->f, VAR_4->dir, VAR_4->name);

        if (VAR_2->force_type && VAR_2->force_type != VAR_4->type) {
            FUNC_0(VAR_2, "mismatching media type\n");
            goto error;
        }
    }

    if (VAR_2->force_bidir) {
        if (VAR_2->f->num_pins != 2) {
            FUNC_0(VAR_2, "exactly 2 pads required\n");
            goto error;
        }
        if (FUNC_2(VAR_2->f->ppins[0]) != VAR_1 ||
            FUNC_2(VAR_2->f->ppins[1]) != VAR_0)
        {
            FUNC_0(VAR_2, "1 input and 1 output pad required\n");
            goto error;
        }
    }

    return &VAR_2->public;

error:
    FUNC_4(VAR_2->f);
    return ((void*)0);
}
