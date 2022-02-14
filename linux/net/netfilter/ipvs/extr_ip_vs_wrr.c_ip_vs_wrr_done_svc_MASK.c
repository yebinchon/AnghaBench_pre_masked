
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_wrr_mark {int dummy; } ;
struct ip_vs_service {struct ip_vs_wrr_mark* sched_data; } ;


 int FUNC_0 (struct ip_vs_wrr_mark*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct ip_vs_service *VAR_1)
{
 struct ip_vs_wrr_mark *VAR_2 = VAR_1->sched_data;




 FUNC_0(VAR_2, VAR_0);
}
