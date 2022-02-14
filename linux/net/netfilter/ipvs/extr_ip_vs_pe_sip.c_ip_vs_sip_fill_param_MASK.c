
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct sk_buff {unsigned int len; char* data; } ;
struct ip_vs_iphdr {scalar_t__ protocol; int len; } ;
struct ip_vs_conn_param {unsigned int pe_data_len; int pe_data; int af; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_1 (int ,struct sk_buff*,int,struct ip_vs_iphdr*) ;
 int FUNC_2 (char const*,unsigned int,int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_4(struct ip_vs_conn_param *VAR_4, struct sk_buff *VAR_5)
{
 struct ip_vs_iphdr VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_4->af, VAR_5, 0, &VAR_6);


 if (!VAR_12 || VAR_6.protocol != VAR_3)
  return -VAR_0;



 VAR_7 = VAR_6.len + sizeof(struct udphdr);

 if (VAR_7 >= VAR_5->len)
  return -VAR_0;
 VAR_12 = FUNC_3(VAR_5);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_11 = VAR_5->data + VAR_7;
 VAR_8 = VAR_5->len - VAR_7;

 if (FUNC_0(VAR_11, 0, VAR_8, &VAR_9, &VAR_10))
  return -VAR_0;




 VAR_4->pe_data = FUNC_2(VAR_11 + VAR_9, VAR_10, VAR_2);
 if (!VAR_4->pe_data)
  return -VAR_1;

 VAR_4->pe_data_len = VAR_10;

 return 0;
}
