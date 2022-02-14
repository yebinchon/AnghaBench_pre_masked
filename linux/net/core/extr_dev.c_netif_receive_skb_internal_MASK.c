
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct rps_dev_flow {int last_qtail; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int,int *) ;
 int FUNC_2 (int ,struct sk_buff*,struct rps_dev_flow**) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_1, VAR_3);

 if (FUNC_6(VAR_3))
  return VAR_0;

 FUNC_4();
 VAR_4 = FUNC_0(VAR_3);
 FUNC_5();
 return VAR_4;
}
