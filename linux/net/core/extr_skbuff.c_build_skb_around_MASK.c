
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int head_frag; int pfmemalloc; } ;


 struct sk_buff* FUNC_0 (struct sk_buff*,void*,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*) ;

struct sk_buff *FUNC_4(struct sk_buff *VAR_0,
     void *VAR_1, unsigned int VAR_2)
{
 if (FUNC_2(!VAR_0))
  return ((void*)0);

 VAR_0 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_0 && VAR_2) {
  VAR_0->head_frag = 1;
  if (FUNC_1(FUNC_3(VAR_1)))
   VAR_0->pfmemalloc = 1;
 }
 return VAR_0;
}
