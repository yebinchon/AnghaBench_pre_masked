
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qrtr_ctrl_pkt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 struct qrtr_ctrl_pkt* FUNC_1 (struct sk_buff*,int const) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct qrtr_ctrl_pkt **VAR_2)
{
 const int VAR_3 = sizeof(struct qrtr_ctrl_pkt);
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_1 + VAR_3, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(VAR_4, VAR_1);
 *VAR_2 = FUNC_1(VAR_4, VAR_3);

 return VAR_4;
}
