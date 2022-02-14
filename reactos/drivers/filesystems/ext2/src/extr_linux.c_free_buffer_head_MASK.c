
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct buffer_head {scalar_t__ b_bcb; TYPE_2__* b_mdl; } ;
struct TYPE_5__ {int MappedSystemVa; int MdlFlags; } ;
struct TYPE_4__ {int bh_count; int bh_cache; } ;
typedef int ERESOURCE_THREAD ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct buffer_head*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int ,struct buffer_head*) ;

void
FUNC_8(struct buffer_head * VAR_4)
{
    if (VAR_4) {
        if (VAR_4->b_mdl) {

            FUNC_1(VAR_0, ("bh=%p mdl=%p (Flags:%xh VA:%p) released.\n", VAR_4, VAR_4->b_mdl,
                          VAR_4->b_mdl->MdlFlags, VAR_4->b_mdl->MappedSystemVa));
            if (FUNC_4(VAR_4->b_mdl->MdlFlags, VAR_1)) {
                FUNC_5(VAR_4->b_mdl->MappedSystemVa, VAR_4->b_mdl);
            }
            FUNC_3(VAR_4->b_mdl);
        }
        if (VAR_4->b_bcb) {
            FUNC_0(VAR_4->b_bcb, (ERESOURCE_THREAD)VAR_4 | 0x3);
        }

        FUNC_1(VAR_0, ("bh=%p freed.\n", VAR_4));
        FUNC_2(VAR_2, VAR_4, sizeof(struct buffer_head));
        FUNC_7(VAR_3.bh_cache, VAR_4);
        FUNC_6(&VAR_3.bh_count);
    }
}
