
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; scalar_t__ ignore_df; } ;
struct TYPE_2__ {unsigned int frag_max_size; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (struct sk_buff const*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->len <= VAR_1)
  return 0;


 if (FUNC_0(VAR_0)->frag_max_size && FUNC_0(VAR_0)->frag_max_size > VAR_1)
  return 1;

 if (VAR_0->ignore_df)
  return 0;

 if (FUNC_2(VAR_0) && FUNC_1(VAR_0, VAR_1))
  return 0;

 return 1;
}
