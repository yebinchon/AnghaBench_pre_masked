
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bug_entry {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bug_entry *VAR_1, struct bug_entry *VAR_2)
{
 struct bug_entry *VAR_3;

 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++)
  VAR_3->flags &= ~VAR_0;
}
