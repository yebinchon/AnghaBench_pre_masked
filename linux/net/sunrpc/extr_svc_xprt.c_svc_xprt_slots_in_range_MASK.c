
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_nr_rqsts; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct svc_xprt *VAR_1)
{
 unsigned int VAR_2 = VAR_0;
 int VAR_3 = FUNC_0(&VAR_1->xpt_nr_rqsts);

 return VAR_2 == 0 || (VAR_3 >= 0 && VAR_3 < VAR_2);
}
