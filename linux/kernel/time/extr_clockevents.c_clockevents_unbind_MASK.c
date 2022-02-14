
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;
struct ce_unbind {int res; struct clock_event_device* ce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct ce_unbind*,int) ;

__attribute__((used)) static int FUNC_1(struct clock_event_device *VAR_2, int VAR_3)
{
 struct ce_unbind VAR_4 = { .ce = VAR_2, .res = -VAR_0 };

 FUNC_0(VAR_3, VAR_1, &VAR_4, 1);
 return VAR_4.res;
}
