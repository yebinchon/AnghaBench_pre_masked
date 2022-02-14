
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filters; int ppmd7_context; } ;
struct TYPE_4__ {TYPE_1__ v3; } ;
struct ar_archive_rar_uncomp {int version; TYPE_2__ state; int lzss; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar_archive_rar_uncomp*) ;

void FUNC_4(struct ar_archive_rar_uncomp *VAR_1)
{
    if (!VAR_1->version)
        return;
    FUNC_3(VAR_1);
    FUNC_1(&VAR_1->lzss);
    if (VAR_1->version == 3) {
        FUNC_0(&VAR_1->state.v3.ppmd7_context, &VAR_0);
        FUNC_2(&VAR_1->state.v3.filters);
    }
    VAR_1->version = 0;
}
