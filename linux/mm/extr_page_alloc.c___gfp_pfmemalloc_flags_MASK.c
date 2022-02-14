
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gfp_t ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(gfp_t VAR_6)
{
 if (FUNC_3(VAR_6 & VAR_4))
  return 0;
 if (VAR_6 & VAR_3)
  return VAR_0;
 if (FUNC_1() && (VAR_5->flags & VAR_2))
  return VAR_0;
 if (!FUNC_0()) {
  if (VAR_5->flags & VAR_2)
   return VAR_0;
  else if (FUNC_2(VAR_5))
   return VAR_1;
 }

 return 0;
}
