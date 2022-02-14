
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cflayer {int dummy; } ;
struct cfctrl_rsp {int dummy; } ;
struct cfctrl {struct cfctrl_rsp res; } ;


 struct cfctrl* FUNC_0 (struct cflayer*) ;

struct cfctrl_rsp *FUNC_1(struct cflayer *VAR_0)
{
 struct cfctrl *VAR_1 = FUNC_0(VAR_0);
 return &VAR_1->res;
}
