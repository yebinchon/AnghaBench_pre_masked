
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ead_instance {scalar_t__ pid; int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct ead_instance*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ead_instance *VAR_1, bool VAR_2)
{
 if (VAR_1->pid > 0)
  FUNC_1(VAR_1->pid, VAR_0);
 VAR_1->pid = 0;
 if (VAR_2) {
  FUNC_2(&VAR_1->list);
  FUNC_0(VAR_1);
 }
}
