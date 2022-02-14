
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* garp_port; } ;
struct TYPE_3__ {int group_address; } ;
struct garp_application {size_t type; TYPE_1__ proto; } ;
struct garp_applicant {int join_timer; int queue; int lock; int gid; struct garp_application* app; struct net_device* dev; } ;
struct TYPE_4__ {int * applicants; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_3 (struct garp_applicant*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct garp_applicant*) ;
 struct garp_applicant* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,struct garp_applicant*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;

int FUNC_12(struct net_device *VAR_4, struct garp_application *VAR_5)
{
 struct garp_applicant *VAR_6;
 int VAR_7;

 FUNC_0();

 if (!FUNC_8(VAR_4->garp_port)) {
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 < 0)
   goto err1;
 }

 VAR_7 = -VAR_0;
 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  goto err2;

 VAR_7 = FUNC_1(VAR_4, VAR_5->proto.group_address);
 if (VAR_7 < 0)
  goto err3;

 VAR_6->dev = VAR_4;
 VAR_6->app = VAR_5;
 VAR_6->gid = VAR_2;
 FUNC_10(&VAR_6->lock);
 FUNC_9(&VAR_6->queue);
 FUNC_7(VAR_4->garp_port->applicants[VAR_5->type], VAR_6);
 FUNC_11(&VAR_6->join_timer, VAR_3, 0);
 FUNC_3(VAR_6);
 return 0;

err3:
 FUNC_5(VAR_6);
err2:
 FUNC_4(VAR_4);
err1:
 return VAR_7;
}
