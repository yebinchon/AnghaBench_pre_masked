
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vo_wayland_state {int dnd_fd; scalar_t__ dnd_mime_score; int * dnd_mime_type; int dnd_offer; int dnd_action; TYPE_1__* vo; } ;
struct pollfd {int member_0; int member_1; int revents; int member_2; } ;
struct bstr {int dummy; } ;
typedef size_t ptrdiff_t ;
struct TYPE_2__ {int input_ctx; } ;


 int FUNC_0 (struct vo_wayland_state*,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bstr FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,size_t const) ;
 int FUNC_4 (int ,int *,struct bstr,int ) ;
 scalar_t__ FUNC_5 (struct pollfd*,int,int ) ;
 size_t FUNC_6 (int,int *,size_t const) ;
 int * FUNC_7 (struct vo_wayland_state*,int *,size_t) ;
 int * FUNC_8 (struct vo_wayland_state*,size_t const) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct vo_wayland_state *VAR_3)
{
    if (VAR_3->dnd_fd == -1)
        return;

    struct pollfd VAR_4 = { VAR_3->dnd_fd, VAR_2 | VAR_0 | VAR_1, 0 };
    if (FUNC_5(&VAR_4, 1, 0) <= 0)
        return;

    if (VAR_4.revents & VAR_2) {
        ptrdiff_t VAR_5 = 0;
        size_t VAR_6 = 0;
        const size_t VAR_7 = 1;
        uint8_t *VAR_8 = FUNC_8(VAR_3, VAR_7);
        if (!VAR_8)
            goto end;

        while ((VAR_6 = FUNC_6(VAR_3->dnd_fd, VAR_8 + VAR_5, VAR_7)) > 0) {
            VAR_5 += VAR_6;
            VAR_8 = FUNC_7(VAR_3, VAR_8, VAR_5 + VAR_7);
            FUNC_3(VAR_8 + VAR_5, 0, VAR_7);
            if (!VAR_8)
                goto end;
        }

        FUNC_0(VAR_3, "Read %td bytes from the DND fd\n", VAR_5);

        struct bstr VAR_9 = FUNC_1(VAR_8);
        FUNC_4(VAR_3->vo->input_ctx, VAR_3->dnd_mime_type,
                                VAR_9, VAR_3->dnd_action);
        FUNC_9(VAR_8);
end:
        FUNC_10(VAR_3->dnd_offer);
        FUNC_9(VAR_3->dnd_mime_type);
        VAR_3->dnd_mime_type = ((void*)0);
        VAR_3->dnd_mime_score = 0;
    }

    if (VAR_4.revents & (VAR_2 | VAR_0 | VAR_1)) {
        FUNC_2(VAR_3->dnd_fd);
        VAR_3->dnd_fd = -1;
    }
}
