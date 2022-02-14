
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reliable_ack {int len; scalar_t__* packet_id; } ;
typedef scalar_t__ packet_id_type ;



__attribute__((used)) static inline bool
FUNC_0(struct reliable_ack *VAR_0, packet_id_type VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->len; ++VAR_2)
    {
        if (VAR_0->packet_id[VAR_2] == VAR_1)
        {
            return 1;
        }
    }
    return 0;
}
