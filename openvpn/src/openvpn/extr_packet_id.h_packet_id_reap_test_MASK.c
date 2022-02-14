
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_id_rec {scalar_t__ last_reap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct packet_id_rec*) ;

__attribute__((used)) static inline void
FUNC_1(struct packet_id_rec *VAR_2)
{
    if (VAR_2->last_reap + VAR_0 <= VAR_1)
    {
        FUNC_0(VAR_2);
    }
}
