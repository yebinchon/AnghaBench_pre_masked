
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; int head_frag; } ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;
 unsigned int FUNC_1 (struct sk_buff const*) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;

unsigned int
FUNC_3(const struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = 0;

 if (!VAR_2->head_frag ||
     FUNC_1(VAR_2) < VAR_0 ||
     FUNC_2(VAR_2)->nr_frags >= VAR_1)
  VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_2))
  VAR_3 = VAR_2->len;

 return VAR_3;
}
