
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct rps_dev_flow {unsigned int last_qtail; } ;


 int FUNC_0 (struct sk_buff*,int,unsigned int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct sk_buff*,struct rps_dev_flow**) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_1 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2)
{
 int VAR_3;

 FUNC_3(VAR_0, VAR_2);

 FUNC_11(VAR_2);
 {
  unsigned int VAR_4;

  VAR_3 = FUNC_0(VAR_2, FUNC_1(), &VAR_4);
  FUNC_6();
 }
 return VAR_3;
}
