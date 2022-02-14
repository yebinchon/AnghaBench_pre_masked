
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {TYPE_1__* xpt_ops; int xpt_flags; } ;
struct TYPE_2__ {scalar_t__ (* xpo_has_wspace ) (struct svc_xprt*) ;} ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct svc_xprt*) ;
 scalar_t__ FUNC_4 (struct svc_xprt*) ;
 int FUNC_5 (struct svc_xprt*) ;

__attribute__((used)) static bool FUNC_6(struct svc_xprt *VAR_4)
{
 unsigned long VAR_5;
 FUNC_2();
 VAR_5 = FUNC_1(VAR_4->xpt_flags);

 if (VAR_5 & (FUNC_0(VAR_1) | FUNC_0(VAR_0)))
  return 1;
 if (VAR_5 & (FUNC_0(VAR_2) | FUNC_0(VAR_3))) {
  if (VAR_4->xpt_ops->xpo_has_wspace(VAR_4) &&
      FUNC_4(VAR_4))
   return 1;
  FUNC_5(VAR_4);
  return 0;
 }
 return 0;
}
