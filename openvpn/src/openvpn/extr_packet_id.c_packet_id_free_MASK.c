
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seq_list; } ;
struct packet_id {TYPE_1__ rec; } ;


 int FUNC_0 (struct packet_id) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(struct packet_id *VAR_1)
{
    if (VAR_1)
    {
        FUNC_1(VAR_0, "PID packet_id_free");
        if (VAR_1->rec.seq_list)
        {
            FUNC_2(VAR_1->rec.seq_list);
        }
        FUNC_0(*VAR_1);
    }
}
