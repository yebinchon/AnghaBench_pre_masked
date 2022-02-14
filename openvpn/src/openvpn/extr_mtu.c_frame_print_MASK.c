
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct frame {int align_adjust; int align_flags; int extra_link; int extra_tun; int extra_buffer; int extra_frame; int link_mtu_dynamic; int link_mtu; } ;
struct buffer {int data; } ;


 struct buffer FUNC_0 (int,struct gc_arena*) ;
 int FUNC_1 (struct buffer*,char*,...) ;
 int FUNC_2 (struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int,char*,int ) ;

void
FUNC_5(const struct frame *VAR_0,
            int VAR_1,
            const char *VAR_2)
{
    struct gc_arena VAR_3 = FUNC_3();
    struct buffer VAR_4 = FUNC_0(256, &VAR_3);
    if (VAR_2)
    {
        FUNC_1(&VAR_4, "%s ", VAR_2);
    }
    FUNC_1(&VAR_4, "[");
    FUNC_1(&VAR_4, " L:%d", VAR_0->link_mtu);
    FUNC_1(&VAR_4, " D:%d", VAR_0->link_mtu_dynamic);
    FUNC_1(&VAR_4, " EF:%d", VAR_0->extra_frame);
    FUNC_1(&VAR_4, " EB:%d", VAR_0->extra_buffer);
    FUNC_1(&VAR_4, " ET:%d", VAR_0->extra_tun);
    FUNC_1(&VAR_4, " EL:%d", VAR_0->extra_link);
    if (VAR_0->align_flags && VAR_0->align_adjust)
    {
        FUNC_1(&VAR_4, " AF:%u/%d", VAR_0->align_flags, VAR_0->align_adjust);
    }
    FUNC_1(&VAR_4, " ]");

    FUNC_4(VAR_1, "%s", VAR_4.data);
    FUNC_2(&VAR_3);
}
