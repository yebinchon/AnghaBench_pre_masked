
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int list; } ;
struct napi_struct {scalar_t__ rx_count; int rx_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct napi_struct*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct napi_struct *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_1(&VAR_2->list, &VAR_1->rx_list);
 if (++VAR_1->rx_count >= VAR_0)
  FUNC_0(VAR_1);
}
