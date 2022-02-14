
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_dev_scratch {int csum_unnecessary; int is_linear; int _tsize_state; int len; } ;
struct sk_buff {int len; int truesize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct udp_dev_scratch* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1)
{
 struct udp_dev_scratch *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(sizeof(struct udp_dev_scratch) > sizeof(long));
 VAR_2->_tsize_state = VAR_1->truesize;
 if (FUNC_1(!FUNC_4(VAR_1)))
  VAR_2->_tsize_state |= VAR_0;
}
