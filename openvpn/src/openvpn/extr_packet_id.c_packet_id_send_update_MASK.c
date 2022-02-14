
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_id_send {scalar_t__ time; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct packet_id_send *VAR_2, bool VAR_3)
{
    if (!VAR_2->time)
    {
        VAR_2->time = VAR_1;
    }
    if (VAR_2->id == VAR_0)
    {



        if (!VAR_3 || VAR_1 <= VAR_2->time)
        {
            return 0;
        }
        VAR_2->time = VAR_1;
        VAR_2->id = 0;
    }
    VAR_2->id++;
    return 1;
}
