
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_array {int dummy; } ;
struct pfifo_fast_priv {struct skb_array* q; } ;



__attribute__((used)) static inline struct skb_array *FUNC_0(struct pfifo_fast_priv *VAR_0,
       int VAR_1)
{
 return &VAR_0->q[VAR_1];
}
