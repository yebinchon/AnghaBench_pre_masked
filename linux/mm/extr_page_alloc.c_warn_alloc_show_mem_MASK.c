
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nodemask_t ;
typedef int gfp_t ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(gfp_t VAR_6, nodemask_t *VAR_7)
{
 unsigned int VAR_8 = VAR_2;






 if (!(VAR_6 & VAR_4))
  if (FUNC_2(VAR_5) ||
      (VAR_5->flags & (VAR_1 | VAR_0)))
   VAR_8 &= ~VAR_2;
 if (FUNC_0() || !(VAR_6 & VAR_3))
  VAR_8 &= ~VAR_2;

 FUNC_1(VAR_8, VAR_7);
}
