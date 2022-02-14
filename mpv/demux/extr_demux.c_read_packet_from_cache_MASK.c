
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;
struct demux_packet {TYPE_1__ cached_data; scalar_t__ is_cached; } ;
struct demux_internal {int cache; } ;


 int FUNC_0 (struct demux_internal*,char*) ;
 int FUNC_1 (int ) ;
 struct demux_packet* FUNC_2 (int ,int ) ;
 struct demux_packet* FUNC_3 (struct demux_packet*) ;
 int FUNC_4 (struct demux_packet*,struct demux_packet*) ;

__attribute__((used)) static struct demux_packet *FUNC_5(struct demux_internal *VAR_0,
                                                   struct demux_packet *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);

    if (VAR_1->is_cached) {
        FUNC_1(VAR_0->cache);
        struct demux_packet *VAR_2 = VAR_1;
        VAR_1 = FUNC_2(VAR_0->cache, VAR_1->cached_data.pos);
        if (VAR_1) {
            FUNC_4(VAR_1, VAR_2);
        } else {
            FUNC_0(VAR_0, "Failed to retrieve packet from cache.\n");
        }
    } else {

        VAR_1 = FUNC_3(VAR_1);
    }

    return VAR_1;
}
