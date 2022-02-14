
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_id_persist {int id; scalar_t__ time; } ;
struct TYPE_2__ {int id; scalar_t__ time; } ;
struct packet_id {TYPE_1__ rec; } ;


 scalar_t__ FUNC_0 (struct packet_id_persist*) ;

__attribute__((used)) static inline void
FUNC_1(struct packet_id_persist *VAR_0, const struct packet_id *VAR_1)
{
    if (FUNC_0(VAR_0) && VAR_1->rec.time)
    {
        VAR_0->time = VAR_1->rec.time;
        VAR_0->id = VAR_1->rec.id;
    }
}
