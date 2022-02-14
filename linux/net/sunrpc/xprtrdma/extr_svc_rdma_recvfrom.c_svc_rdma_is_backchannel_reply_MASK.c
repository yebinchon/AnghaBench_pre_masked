
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_bc_xprt; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct svc_xprt *VAR_3,
       __be32 *VAR_4)
{
 __be32 *VAR_5;

 if (!VAR_3->xpt_bc_xprt)
  return 0;

 VAR_5 = VAR_4 + 3;
 if (*VAR_5++ != VAR_1)
  return 0;

 if (*VAR_5++ != VAR_2)
  return 0;
 if (*VAR_5++ != VAR_2)
  return 0;
 if (*VAR_5++ != VAR_2)
  return 0;


 if (*VAR_5++ != *VAR_4)
  return 0;

 if (*VAR_5 == FUNC_0(VAR_0))
  return 0;

 return 1;
}
