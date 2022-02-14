
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_pool {int dummy; } ;
struct z3fold_header {int mapped_count; } ;
struct page {int private; } ;
typedef enum buddy { ____Placeholder_buddy } buddy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long) ;
 struct z3fold_header* FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct page* FUNC_4 (struct z3fold_header*) ;
 int FUNC_5 (struct z3fold_header*) ;
 int FUNC_6 (struct z3fold_header*) ;

__attribute__((used)) static void FUNC_7(struct z3fold_pool *VAR_3, unsigned long VAR_4)
{
 struct z3fold_header *VAR_5;
 struct page *VAR_6;
 enum buddy VAR_7;

 VAR_5 = FUNC_2(VAR_4);
 VAR_6 = FUNC_4(VAR_5);

 if (FUNC_3(VAR_2, &VAR_6->private))
  return;

 FUNC_5(VAR_5);
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 == VAR_0)
  FUNC_0(VAR_1, &VAR_6->private);
 VAR_5->mapped_count--;
 FUNC_6(VAR_5);
}
