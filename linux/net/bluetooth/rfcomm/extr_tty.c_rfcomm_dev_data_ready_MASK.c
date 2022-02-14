
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct rfcomm_dlc {struct rfcomm_dev* owner; } ;
struct rfcomm_dev {int port; int pending; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rfcomm_dlc *VAR_0, struct sk_buff *VAR_1)
{
 struct rfcomm_dev *VAR_2 = VAR_0->owner;

 if (!VAR_2) {
  FUNC_1(VAR_1);
  return;
 }

 if (!FUNC_2(&VAR_2->pending)) {
  FUNC_3(&VAR_2->pending, VAR_1);
  return;
 }

 FUNC_0("dlc %p len %d", VAR_0, VAR_1->len);

 FUNC_5(&VAR_2->port, VAR_1->data, VAR_1->len);
 FUNC_4(&VAR_2->port);

 FUNC_1(VAR_1);
}
