
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zswap_tree {int lock; int rbroot; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zswap_tree* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int *) ;
 struct zswap_tree** VAR_2 ;

__attribute__((used)) static void FUNC_3(unsigned VAR_3)
{
 struct zswap_tree *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_1("alloc failed, zswap disabled for swap type %d\n", VAR_3);
  return;
 }

 VAR_4->rbroot = VAR_1;
 FUNC_2(&VAR_4->lock);
 VAR_2[VAR_3] = VAR_4;
}
