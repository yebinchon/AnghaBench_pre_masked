
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct rfcomm_dev {int port; int dlc; int pending; } ;


 int FUNC_0 (char*,struct rfcomm_dev*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rfcomm_dev *VAR_0)
{
 struct sk_buff *VAR_1;
 int VAR_2 = 0;

 FUNC_0("dev %p", VAR_0);

 FUNC_2(VAR_0->dlc);

 while ((VAR_1 = FUNC_4(&VAR_0->pending))) {
  VAR_2 += FUNC_6(&VAR_0->port, VAR_1->data,
    VAR_1->len);
  FUNC_1(VAR_1);
 }

 FUNC_3(VAR_0->dlc);

 if (VAR_2 > 0)
  FUNC_5(&VAR_0->port);
}
