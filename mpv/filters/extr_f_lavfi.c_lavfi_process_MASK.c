
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_filter {struct lavfi* priv; } ;
struct lavfi {int num_out_pads; int f; scalar_t__ failed; TYPE_1__** out_pads; scalar_t__ draining_recover; scalar_t__ initialized; } ;
struct TYPE_2__ {int buffer_is_eof; } ;


 int FUNC_0 (struct lavfi*,char*) ;
 int FUNC_1 (struct lavfi*) ;
 int FUNC_2 (struct lavfi*) ;
 int FUNC_3 (struct lavfi*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct lavfi*) ;

__attribute__((used)) static void FUNC_7(struct mp_filter *VAR_0)
{
    struct lavfi *VAR_1 = VAR_0->priv;

    if (!VAR_1->initialized)
        FUNC_3(VAR_1);

    while (VAR_1->initialized) {
        bool VAR_2 = FUNC_6(VAR_1);
        bool VAR_3 = FUNC_1(VAR_1);
        if (!VAR_2 && !VAR_3)
            break;
    }


    if (VAR_1->draining_recover) {

        bool VAR_4 = 1;
        for (int VAR_5 = 0; VAR_5 < VAR_1->num_out_pads; VAR_5++)
            VAR_4 &= VAR_1->out_pads[VAR_5]->buffer_is_eof;

        if (VAR_4) {
            FUNC_0(VAR_1, "recovering all eof\n");
            FUNC_2(VAR_1);
            FUNC_5(VAR_1->f);
        }
    }

    if (VAR_1->failed)
        FUNC_4(VAR_1->f);
}
