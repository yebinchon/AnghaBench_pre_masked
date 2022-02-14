
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int packet_id_type ;
typedef int net_time_t ;



__attribute__((used)) static inline int
FUNC_0(bool VAR_0)
{
    return sizeof(packet_id_type) + (VAR_0 ? sizeof(net_time_t) : 0);
}
