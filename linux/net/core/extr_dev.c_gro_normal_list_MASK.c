
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {scalar_t__ rx_count; int rx_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct napi_struct *VAR_0)
{
 if (!VAR_0->rx_count)
  return;
 FUNC_1(&VAR_0->rx_list);
 FUNC_0(&VAR_0->rx_list);
 VAR_0->rx_count = 0;
}
