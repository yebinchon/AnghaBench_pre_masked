
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sk_buff {unsigned int len; char* data; } ;
struct nf_nat_sip_hooks {int (* seq_adjust ) (struct sk_buff*,unsigned int,unsigned int) ;} ;
struct nf_conn {int status; } ;
typedef unsigned int s16 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _tcph ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nf_conn*,char const*,int ,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct nf_conn*,struct sk_buff*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*,struct nf_conn*,unsigned int,unsigned int,char const**,unsigned int*) ;
 struct nf_nat_sip_hooks* FUNC_3 (int ) ;
 unsigned int FUNC_4 (char const*,char**,int) ;
 int VAR_8 ;
 struct tcphdr* FUNC_5 (struct sk_buff*,unsigned int,int,struct tcphdr*) ;
 int FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (char*) ;
 int FUNC_8 (struct sk_buff*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_9, unsigned int VAR_10,
   struct nf_conn *VAR_11, enum ip_conntrack_info VAR_12)
{
 struct tcphdr *VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;
 const char *VAR_22, *VAR_23;
 s16 VAR_24, VAR_25 = 0;
 int VAR_26 = VAR_4;
 bool VAR_27;

 if (VAR_12 != VAR_2 &&
     VAR_12 != VAR_3)
  return VAR_4;


 VAR_13 = FUNC_5(VAR_9, VAR_10, sizeof(VAR_14), &VAR_14);
 if (VAR_13 == ((void*)0))
  return VAR_4;
 VAR_15 = VAR_10 + VAR_13->doff * 4;
 if (VAR_15 >= VAR_9->len)
  return VAR_4;

 FUNC_1(VAR_11, VAR_9, VAR_8 * VAR_0);

 if (FUNC_9(FUNC_6(VAR_9)))
  return VAR_5;

 VAR_22 = VAR_9->data + VAR_15;
 VAR_16 = VAR_9->len - VAR_15;
 if (VAR_16 < FUNC_7("SIP/2.0 200"))
  return VAR_4;

 while (1) {
  if (FUNC_0(VAR_11, VAR_22, 0, VAR_16,
          VAR_6,
          &VAR_17, &VAR_18) <= 0)
   break;

  VAR_19 = FUNC_4(VAR_22 + VAR_17, (char **)&VAR_23, 10);
  if (VAR_22 + VAR_17 == VAR_23)
   break;

  VAR_27 = 0;
  for (; VAR_23 + FUNC_7("\r\n\r\n") <= VAR_22 + VAR_16; VAR_23++) {
   if (VAR_23[0] == '\r' && VAR_23[1] == '\n' &&
       VAR_23[2] == '\r' && VAR_23[3] == '\n') {
    VAR_27 = 1;
    break;
   }
  }
  if (!VAR_27)
   break;
  VAR_23 += FUNC_7("\r\n\r\n") + VAR_19;

  VAR_20 = VAR_21 = VAR_23 - VAR_22;
  if (VAR_20 > VAR_16)
   return VAR_4;

  VAR_26 = FUNC_2(VAR_9, VAR_11, VAR_10, VAR_15,
          &VAR_22, &VAR_20);

  if (VAR_26 != VAR_4)
   break;
  VAR_24 = VAR_20 - VAR_21;
  VAR_25 += VAR_24;

  VAR_15 += VAR_20;
  VAR_22 += VAR_20;
  VAR_16 = VAR_16 + VAR_24 - VAR_20;
 }

 if (VAR_26 == VAR_4 && VAR_11->status & VAR_1) {
  const struct nf_nat_sip_hooks *VAR_28;

  VAR_28 = FUNC_3(VAR_7);
  if (VAR_28)
   VAR_28->seq_adjust(VAR_9, VAR_10, VAR_25);
 }

 return VAR_26;
}
