
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sctp_ulpq {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;


 int FUNC_0 (struct sk_buff_head*,int ) ;
 int FUNC_1 (struct sctp_ulpq*,struct sk_buff_head*) ;
 int FUNC_2 (struct sctp_ulpevent*) ;
 int FUNC_3 (struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_4(struct sctp_ulpq *VAR_0,
     struct sctp_ulpevent *VAR_1)
{
 struct sk_buff_head VAR_2;

 FUNC_3(&VAR_2);
 FUNC_0(&VAR_2, FUNC_2(VAR_1));
 return FUNC_1(VAR_0, &VAR_2);
}
