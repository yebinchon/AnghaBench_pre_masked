
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {int scheduler; } ;
struct ip_vs_scheduler {int (* done_service ) (struct ip_vs_service*) ;} ;


 struct ip_vs_scheduler* FUNC_0 (int ,int) ;
 int FUNC_1 (struct ip_vs_service*) ;

void FUNC_2(struct ip_vs_service *VAR_0,
       struct ip_vs_scheduler *VAR_1)
{
 struct ip_vs_scheduler *VAR_2;

 VAR_2 = FUNC_0(VAR_0->scheduler, 1);

 if (!VAR_2)
  return;

 if (VAR_1->done_service)
  VAR_1->done_service(VAR_0);

}
