
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mrp_applicant {TYPE_3__* pdu; int queue; TYPE_7__* dev; TYPE_2__* app; } ;
struct TYPE_12__ {int dev_addr; } ;
struct TYPE_11__ {scalar_t__ mh; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_9__ {int group_address; TYPE_1__ pkttype; } ;


 int FUNC_0 (TYPE_3__*,TYPE_7__*,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mrp_applicant*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct mrp_applicant *VAR_0)
{
 if (!VAR_0->pdu)
  return;

 if (FUNC_1(VAR_0->pdu)->mh)
  FUNC_2(VAR_0);
 FUNC_2(VAR_0);

 FUNC_0(VAR_0->pdu, VAR_0->dev, FUNC_3(VAR_0->app->pkttype.type),
   VAR_0->app->group_address, VAR_0->dev->dev_addr,
   VAR_0->pdu->len);

 FUNC_4(&VAR_0->queue, VAR_0->pdu);
 VAR_0->pdu = ((void*)0);
}
