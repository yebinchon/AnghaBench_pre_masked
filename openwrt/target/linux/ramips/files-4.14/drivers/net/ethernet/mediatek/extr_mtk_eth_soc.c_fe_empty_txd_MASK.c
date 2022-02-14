
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fe_tx_ring {int tx_ring_size; int tx_next_idx; int tx_free_idx; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline u32 FUNC_1(struct fe_tx_ring *VAR_0)
{
 FUNC_0();
 return (u32)(VAR_0->tx_ring_size -
   ((VAR_0->tx_next_idx - VAR_0->tx_free_idx) &
    (VAR_0->tx_ring_size - 1)));
}
