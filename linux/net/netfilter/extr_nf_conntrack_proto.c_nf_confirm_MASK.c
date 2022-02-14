
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conntrack_helper {int (* help ) (struct sk_buff*,unsigned int,struct nf_conn*,int) ;} ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int status; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int,unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct nf_conn_help* FUNC_5 (struct nf_conn*) ;
 struct nf_conntrack_helper* FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,unsigned int,struct nf_conn*,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

unsigned int FUNC_9(struct sk_buff *VAR_4, unsigned int VAR_5,
   struct nf_conn *VAR_6, enum ip_conntrack_info VAR_7)
{
 const struct nf_conn_help *VAR_8;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8) {
  const struct nf_conntrack_helper *VAR_9;
  int VAR_10;


  VAR_9 = FUNC_6(VAR_8->helper);
  if (VAR_9) {
   VAR_10 = VAR_9->help(VAR_4,
        VAR_5,
        VAR_6, VAR_7);
   if (VAR_10 != VAR_1)
    return VAR_10;
  }
 }

 if (FUNC_8(VAR_0, &VAR_6->status) &&
     !FUNC_4(VAR_4)) {
  if (!FUNC_3(VAR_4, VAR_6, VAR_7, VAR_5)) {
   FUNC_0(FUNC_2(VAR_6), VAR_3);
   return VAR_2;
  }
 }


 return FUNC_1(VAR_4);
}
