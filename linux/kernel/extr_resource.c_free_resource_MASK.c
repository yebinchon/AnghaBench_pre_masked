
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {struct resource* sibling; } ;


 int FUNC_0 (int ) ;
 struct resource* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static void FUNC_5(struct resource *VAR_2)
{
 if (!VAR_2)
  return;

 if (!FUNC_0(FUNC_4(VAR_2))) {
  FUNC_2(&VAR_1);
  VAR_2->sibling = VAR_0;
  VAR_0 = VAR_2;
  FUNC_3(&VAR_1);
 } else {
  FUNC_1(VAR_2);
 }
}
