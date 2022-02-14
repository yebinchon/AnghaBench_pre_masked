
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* mrp_port; } ;
struct mrp_application {size_t type; int group_address; } ;
struct mrp_applicant {int periodic_timer; int join_timer; int queue; int lock; int mad; struct mrp_application* app; struct net_device* dev; } ;
struct TYPE_2__ {int * applicants; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct mrp_applicant*) ;
 struct mrp_applicant* FUNC_3 (int,int ) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_5 (struct mrp_applicant*) ;
 int VAR_4 ;
 int FUNC_6 (struct mrp_applicant*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,struct mrp_applicant*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

int FUNC_13(struct net_device *VAR_5, struct mrp_application *VAR_6)
{
 struct mrp_applicant *VAR_7;
 int VAR_8;

 FUNC_0();

 if (!FUNC_9(VAR_5->mrp_port)) {
  VAR_8 = FUNC_4(VAR_5);
  if (VAR_8 < 0)
   goto err1;
 }

 VAR_8 = -VAR_0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto err2;

 VAR_8 = FUNC_1(VAR_5, VAR_6->group_address);
 if (VAR_8 < 0)
  goto err3;

 VAR_7->dev = VAR_5;
 VAR_7->app = VAR_6;
 VAR_7->mad = VAR_2;
 FUNC_11(&VAR_7->lock);
 FUNC_10(&VAR_7->queue);
 FUNC_8(VAR_5->mrp_port->applicants[VAR_6->type], VAR_7);
 FUNC_12(&VAR_7->join_timer, VAR_3, 0);
 FUNC_5(VAR_7);
 FUNC_12(&VAR_7->periodic_timer, VAR_4, 0);
 FUNC_6(VAR_7);
 return 0;

err3:
 FUNC_2(VAR_7);
err2:
 FUNC_7(VAR_5);
err1:
 return VAR_8;
}
