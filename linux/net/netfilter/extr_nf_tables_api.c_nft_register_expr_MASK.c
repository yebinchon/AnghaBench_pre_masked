
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr_type {scalar_t__ family; int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct nft_expr_type *VAR_3)
{
 FUNC_2(VAR_0);
 if (VAR_3->family == VAR_1)
  FUNC_1(&VAR_3->list, &VAR_2);
 else
  FUNC_0(&VAR_3->list, &VAR_2);
 FUNC_3(VAR_0);
 return 0;
}
