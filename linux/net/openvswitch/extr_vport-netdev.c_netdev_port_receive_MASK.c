
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {int dummy; } ;
struct sk_buff {int data; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct vport* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct vport*,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_3)
{
 struct vport *VAR_4;

 VAR_4 = FUNC_1(VAR_3->dev);
 if (FUNC_8(!VAR_4))
  goto error;

 if (FUNC_8(FUNC_7(VAR_3)))
  goto error;




 VAR_3 = FUNC_5(VAR_3, VAR_2);
 if (FUNC_8(!VAR_3))
  return;

 if (VAR_3->dev->type == VAR_0) {
  FUNC_4(VAR_3, VAR_1);
  FUNC_3(VAR_3, VAR_3->data, VAR_1);
 }
 FUNC_2(VAR_4, VAR_3, FUNC_6(VAR_3));
 return;
error:
 FUNC_0(VAR_3);
}
