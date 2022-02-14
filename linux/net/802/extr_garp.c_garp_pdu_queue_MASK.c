
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct garp_applicant {int * pdu; int queue; TYPE_2__* app; TYPE_3__* dev; } ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_4__ {int group_address; } ;
struct TYPE_5__ {TYPE_1__ proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct garp_applicant*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct garp_applicant *VAR_3)
{
 if (!VAR_3->pdu)
  return;

 FUNC_0(VAR_3);
 FUNC_0(VAR_3);

 FUNC_2(VAR_3->pdu, VAR_1, VAR_2,
       VAR_2, VAR_0);
 FUNC_3(VAR_3->pdu);
 FUNC_1(VAR_3->pdu, VAR_3->dev->dev_addr,
    VAR_3->app->proto.group_address);

 FUNC_4(&VAR_3->queue, VAR_3->pdu);
 VAR_3->pdu = ((void*)0);
}
