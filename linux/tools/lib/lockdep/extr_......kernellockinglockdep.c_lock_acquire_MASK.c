
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lockdep_map {int dummy; } ;
struct TYPE_2__ {int lockdep_recursion; } ;


 int FUNC_0 (struct lockdep_map*,unsigned int,int,int,int,int ,struct lockdep_map*,unsigned long,int ,int ) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct lockdep_map*,unsigned int,int,int,int,struct lockdep_map*,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct lockdep_map *VAR_1, unsigned int VAR_2,
     int VAR_3, int VAR_4, int VAR_5,
     struct lockdep_map *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;

 if (FUNC_6(VAR_0->lockdep_recursion))
  return;

 FUNC_4(VAR_8);
 FUNC_1(VAR_8);

 VAR_0->lockdep_recursion = 1;
 FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         FUNC_2(VAR_8), VAR_6, VAR_7, 0, 0);
 VAR_0->lockdep_recursion = 0;
 FUNC_3(VAR_8);
}
