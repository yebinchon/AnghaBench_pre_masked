
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct j1939_sock {int nfilters; struct j1939_filter* filters; } ;
struct TYPE_2__ {int pgn; int sa; int src_name; } ;
struct j1939_sk_buff_cb {TYPE_1__ addr; } ;
struct j1939_filter {int pgn_mask; int pgn; int addr_mask; int addr; int name_mask; int name; } ;



__attribute__((used)) static bool FUNC_0(struct j1939_sock *VAR_0,
      const struct j1939_sk_buff_cb *VAR_1)
{
 const struct j1939_filter *VAR_2 = VAR_0->filters;
 int VAR_3 = VAR_0->nfilters;

 if (!VAR_3)

  return 1;

 for (; VAR_3; ++VAR_2, --VAR_3) {
  if ((VAR_1->addr.pgn & VAR_2->pgn_mask) != VAR_2->pgn)
   continue;
  if ((VAR_1->addr.sa & VAR_2->addr_mask) != VAR_2->addr)
   continue;
  if ((VAR_1->addr.src_name & VAR_2->name_mask) != VAR_2->name)
   continue;
  return 1;
 }
 return 0;
}
