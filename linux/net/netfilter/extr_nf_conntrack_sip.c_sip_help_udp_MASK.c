
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sk_buff {unsigned int len; char* data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nf_conn*,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,unsigned int,unsigned int,char const**,unsigned int*) ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, unsigned int VAR_5,
   struct nf_conn *VAR_6, enum ip_conntrack_info VAR_7)
{
 unsigned int VAR_8, VAR_9;
 const char *VAR_10;


 VAR_8 = VAR_5 + sizeof(struct udphdr);
 if (VAR_8 >= VAR_4->len)
  return VAR_1;

 FUNC_0(VAR_6, VAR_4, VAR_3 * VAR_0);

 if (FUNC_4(FUNC_2(VAR_4)))
  return VAR_2;

 VAR_10 = VAR_4->data + VAR_8;
 VAR_9 = VAR_4->len - VAR_8;
 if (VAR_9 < FUNC_3("SIP/2.0 200"))
  return VAR_1;

 return FUNC_1(VAR_4, VAR_6, VAR_5, VAR_8, &VAR_10, &VAR_9);
}
