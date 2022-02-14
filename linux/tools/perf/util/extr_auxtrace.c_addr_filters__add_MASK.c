
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_filters {int cnt; int head; } ;
struct addr_filter {int list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct addr_filters *VAR_0,
         struct addr_filter *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->head);
 VAR_0->cnt += 1;
}
