
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int * treefree; struct subre* treechain; } ;
struct subre {int flags; struct subre* chain; } ;


 int FUNC_0 (struct subre*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct vars *VAR_1)
{
 struct subre *VAR_2;
 struct subre *VAR_3;

 for (VAR_2 = VAR_1->treechain; VAR_2 != ((void*)0); VAR_2 = VAR_3)
 {
  VAR_3 = VAR_2->chain;
  if (!(VAR_2->flags & VAR_0))
   FUNC_0(VAR_2);
 }
 VAR_1->treechain = ((void*)0);
 VAR_1->treefree = ((void*)0);
}
