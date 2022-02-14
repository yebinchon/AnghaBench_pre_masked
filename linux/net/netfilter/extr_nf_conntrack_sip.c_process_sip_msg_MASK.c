
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_nat_sip_hooks {int (* msg ) (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*) ;} ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*) ;
 int FUNC_2 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*) ;
 struct nf_nat_sip_hooks* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4, struct nf_conn *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7,
      const char **VAR_8, unsigned int *VAR_9)
{
 const struct nf_nat_sip_hooks *VAR_10;
 int VAR_11;

 if (FUNC_5(*VAR_8, "SIP/2.0 ", FUNC_4("SIP/2.0 ")) != 0)
  VAR_11 = FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);
 else
  VAR_11 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_11 == VAR_1 && VAR_5->status & VAR_0) {
  VAR_10 = FUNC_3(VAR_3);
  if (VAR_10 && !VAR_10->msg(VAR_4, VAR_6, VAR_7,
      VAR_8, VAR_9)) {
   FUNC_0(VAR_4, VAR_5, "cannot NAT SIP message");
   VAR_11 = VAR_2;
  }
 }

 return VAR_11;
}
