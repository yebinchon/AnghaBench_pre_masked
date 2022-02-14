
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {struct datapath* dp; } ;
struct sk_buff {int dummy; } ;
struct datapath {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct vport*) ;
 int FUNC_5 (struct datapath*) ;
 struct sk_buff* FUNC_6 (struct vport*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct vport *VAR_3)
{
 struct sk_buff *VAR_4;
 struct datapath *VAR_5;

 VAR_5 = VAR_3->dp;
 VAR_4 = FUNC_6(VAR_3, FUNC_5(VAR_5),
       0, 0, VAR_1);
 FUNC_4(VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_2, FUNC_5(VAR_5), 0,
        0, FUNC_1(VAR_4));
  return;
 }

 FUNC_3(&VAR_2,
    FUNC_5(VAR_5), VAR_4, 0,
    0, VAR_0);
}
