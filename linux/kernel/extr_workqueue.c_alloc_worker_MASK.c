
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker {int flags; int node; int scheduled; int entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct worker* FUNC_1 (int,int ,int) ;

__attribute__((used)) static struct worker *FUNC_2(int VAR_2)
{
 struct worker *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_3->entry);
  FUNC_0(&VAR_3->scheduled);
  FUNC_0(&VAR_3->node);

  VAR_3->flags = VAR_1;
 }
 return VAR_3;
}
