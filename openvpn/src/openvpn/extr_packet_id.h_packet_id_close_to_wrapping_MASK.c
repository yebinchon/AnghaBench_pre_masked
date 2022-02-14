
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_id_send {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(const struct packet_id_send *VAR_1)
{
    return VAR_1->id >= VAR_0;
}
