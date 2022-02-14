
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_object_type {scalar_t__ type; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct nft_object_type *VAR_4)
{
 if (VAR_4->type == VAR_2)
  return -VAR_0;

 FUNC_1(VAR_1);
 FUNC_0(&VAR_4->list, &VAR_3);
 FUNC_2(VAR_1);
 return 0;
}
