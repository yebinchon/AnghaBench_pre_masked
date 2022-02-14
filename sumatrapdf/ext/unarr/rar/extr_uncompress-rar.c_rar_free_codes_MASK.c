
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar_archive_rar_uncomp_v3 {int lengthcode; int lowoffsetcode; int offsetcode; int maincode; } ;
struct TYPE_2__ {int v2; struct ar_archive_rar_uncomp_v3 v3; } ;
struct ar_archive_rar_uncomp {int version; TYPE_1__ state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ar_archive_rar_uncomp *VAR_0)
{
    struct ar_archive_rar_uncomp_v3 *VAR_1 = &VAR_0->state.v3;

    if (VAR_0->version == 2) {
        FUNC_1(&VAR_0->state.v2);
        return;
    }

    FUNC_0(&VAR_1->maincode);
    FUNC_0(&VAR_1->offsetcode);
    FUNC_0(&VAR_1->lowoffsetcode);
    FUNC_0(&VAR_1->lengthcode);
}
