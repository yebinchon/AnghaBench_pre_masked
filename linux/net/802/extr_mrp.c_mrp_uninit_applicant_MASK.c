
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mrp_port; } ;
struct mrp_port {int * applicants; } ;
struct mrp_application {size_t type; int group_address; } ;
struct mrp_applicant {int lock; int periodic_timer; int join_timer; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct mrp_applicant*,int ) ;
 int FUNC_5 (struct mrp_applicant*,int ) ;
 int FUNC_6 (struct mrp_applicant*) ;
 int FUNC_7 (struct mrp_applicant*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_1 ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct net_device *VAR_2, struct mrp_application *VAR_3)
{
 struct mrp_port *VAR_4 = FUNC_9(VAR_2->mrp_port);
 struct mrp_applicant *VAR_5 = FUNC_9(
  VAR_4->applicants[VAR_3->type]);

 FUNC_0();

 FUNC_1(VAR_4->applicants[VAR_3->type], ((void*)0));




 FUNC_2(&VAR_5->join_timer);
 FUNC_2(&VAR_5->periodic_timer);

 FUNC_10(&VAR_5->lock);
 FUNC_5(VAR_5, VAR_0);
 FUNC_6(VAR_5);
 FUNC_11(&VAR_5->lock);

 FUNC_7(VAR_5);

 FUNC_3(VAR_2, VAR_3->group_address);
 FUNC_4(VAR_5, VAR_1);
 FUNC_8(VAR_2);
}
