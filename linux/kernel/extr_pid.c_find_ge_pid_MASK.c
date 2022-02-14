
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int idr; } ;
struct pid {int dummy; } ;


 struct pid* FUNC_0 (int *,int*) ;

struct pid *FUNC_1(int VAR_0, struct pid_namespace *VAR_1)
{
 return FUNC_0(&VAR_1->idr, &VAR_0);
}
