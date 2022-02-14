
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucounts {int node; scalar_t__ count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ucounts*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ucounts *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0, VAR_2);
 VAR_1->count -= 1;
 if (!VAR_1->count)
  FUNC_0(&VAR_1->node);
 else
  VAR_1 = ((void*)0);
 FUNC_3(&VAR_0, VAR_2);

 FUNC_1(VAR_1);
}
