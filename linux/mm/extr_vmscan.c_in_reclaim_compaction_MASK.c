
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {scalar_t__ order; int priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct scan_control *VAR_3)
{
 if (FUNC_0(VAR_0) && VAR_3->order &&
   (VAR_3->order > VAR_2 ||
    VAR_3->priority < VAR_1 - 2))
  return 1;

 return 0;
}
