
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {int local_fixed_chan; int feat_mask; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct l2cap_conn *VAR_2)
{
 return ((VAR_2->local_fixed_chan & VAR_0) &&
  (VAR_2->feat_mask & VAR_1));
}
