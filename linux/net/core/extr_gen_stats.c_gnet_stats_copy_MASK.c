
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnet_dump {scalar_t__ xstats_len; int * xstats; scalar_t__ lock; int skb; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int,int,void*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_3(struct gnet_dump *VAR_0, int VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
 if (FUNC_1(VAR_0->skb, VAR_1, VAR_3, VAR_2, VAR_4))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 if (VAR_0->lock)
  FUNC_2(VAR_0->lock);
 FUNC_0(VAR_0->xstats);
 VAR_0->xstats = ((void*)0);
 VAR_0->xstats_len = 0;
 return -1;
}
