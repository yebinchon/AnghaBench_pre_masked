
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_conn {int flags; struct ip_vs_conn* control; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct ip_vs_conn *VAR_1)
{
 for (VAR_1 = VAR_1->control; VAR_1; VAR_1 = VAR_1->control) {
  if (VAR_1->flags & VAR_0)
   return 1;
 }
 return 0;
}
