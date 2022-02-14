
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int cb; } ;
struct cfpkt {int dummy; } ;
struct TYPE_5__ {TYPE_3__* dn; } ;
struct TYPE_4__ {int sk_priority; } ;
struct caifsock {TYPE_2__ layer; TYPE_1__ sk; } ;
struct caif_payload_info {int dummy; } ;
struct TYPE_6__ {int (* transmit ) (TYPE_3__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct cfpkt* FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct cfpkt*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct caifsock *VAR_3,
   int VAR_4, long VAR_5)
{
 struct cfpkt *VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_2);
 FUNC_3(VAR_2->cb, 0, sizeof(struct caif_payload_info));
 FUNC_1(VAR_6, VAR_3->sk.sk_priority);

 if (VAR_3->layer.dn == ((void*)0)) {
  FUNC_2(VAR_2);
  return -VAR_1;
 }

 return VAR_3->layer.dn->transmit(VAR_3->layer.dn, VAR_6);
}
