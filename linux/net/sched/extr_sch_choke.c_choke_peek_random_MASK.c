
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct choke_sched_data {unsigned int head; unsigned int tab_mask; struct sk_buff** tab; } ;


 int FUNC_0 (struct choke_sched_data const*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_2(const struct choke_sched_data *VAR_0,
      unsigned int *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3 = 3;

 do {
  *VAR_1 = (VAR_0->head + FUNC_1(FUNC_0(VAR_0))) & VAR_0->tab_mask;
  VAR_2 = VAR_0->tab[*VAR_1];
  if (VAR_2)
   return VAR_2;
 } while (--VAR_3 > 0);

 return VAR_0->tab[*VAR_1 = VAR_0->head];
}
