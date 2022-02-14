
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zswap_tree {int lock; int rbroot; } ;
struct zswap_entry {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zswap_tree*,struct zswap_entry*) ;
 int FUNC_3 (int *,struct zswap_entry*) ;
 struct zswap_entry* FUNC_4 (int *,int ) ;
 struct zswap_tree** VAR_0 ;

__attribute__((used)) static void FUNC_5(unsigned VAR_1, pgoff_t VAR_2)
{
 struct zswap_tree *VAR_3 = VAR_0[VAR_1];
 struct zswap_entry *VAR_4;


 FUNC_0(&VAR_3->lock);
 VAR_4 = FUNC_4(&VAR_3->rbroot, VAR_2);
 if (!VAR_4) {

  FUNC_1(&VAR_3->lock);
  return;
 }


 FUNC_3(&VAR_3->rbroot, VAR_4);


 FUNC_2(VAR_3, VAR_4);

 FUNC_1(&VAR_3->lock);
}
