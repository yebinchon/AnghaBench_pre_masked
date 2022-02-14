
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlbl_af4list {int dummy; } ;
struct list_head {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct netlbl_af4list*) ;
 struct netlbl_af4list* FUNC_1 (int ,int ,struct list_head*) ;

struct netlbl_af4list *FUNC_2(__be32 VAR_0, __be32 VAR_1,
          struct list_head *VAR_2)
{
 struct netlbl_af4list *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_3);
 return VAR_3;
}
