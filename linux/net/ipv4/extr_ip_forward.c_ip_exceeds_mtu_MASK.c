
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int len; scalar_t__ ignore_df; } ;
struct TYPE_4__ {unsigned int frag_max_size; } ;
struct TYPE_3__ {int frag_off; } ;


 TYPE_2__* FUNC_0 (struct sk_buff const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff const*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(const struct sk_buff *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->len <= VAR_2)
  return 0;

 if (FUNC_5((FUNC_2(VAR_1)->frag_off & FUNC_1(VAR_0)) == 0))
  return 0;


 if (FUNC_5(FUNC_0(VAR_1)->frag_max_size > VAR_2))
  return 1;

 if (VAR_1->ignore_df)
  return 0;

 if (FUNC_4(VAR_1) && FUNC_3(VAR_1, VAR_2))
  return 0;

 return 1;
}
