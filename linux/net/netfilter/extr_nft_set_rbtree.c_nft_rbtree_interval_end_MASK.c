
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_rbtree_elem {int ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int* FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(const struct nft_rbtree_elem *VAR_2)
{
 return FUNC_0(&VAR_2->ext, VAR_1) &&
        (*FUNC_1(&VAR_2->ext) & VAR_0);
}
