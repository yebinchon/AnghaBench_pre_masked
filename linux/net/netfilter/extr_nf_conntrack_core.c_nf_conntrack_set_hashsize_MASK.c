
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_param {int dummy; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {int * net_ns; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,unsigned int*) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char const*,struct kernel_param const*) ;

int FUNC_3(const char *VAR_4, const struct kernel_param *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_1->nsproxy->net_ns != &VAR_2)
  return -VAR_0;


 if (!VAR_3)
  return FUNC_2(VAR_4, VAR_5);

 VAR_7 = FUNC_0(VAR_4, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_6);
}
