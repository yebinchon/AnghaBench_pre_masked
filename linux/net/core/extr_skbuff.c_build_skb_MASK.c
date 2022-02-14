
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int head_frag; int pfmemalloc; } ;


 struct sk_buff* FUNC_0 (void*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;

struct sk_buff *FUNC_3(void *VAR_0, unsigned int VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 && VAR_1) {
  VAR_2->head_frag = 1;
  if (FUNC_1(FUNC_2(VAR_0)))
   VAR_2->pfmemalloc = 1;
 }
 return VAR_2;
}
