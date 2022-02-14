
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int len; } ;
struct iphdr {int frag_off; int ihl; int protocol; } ;
typedef int _iph ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int,int,int) ;
 struct iphdr* FUNC_2 (struct sk_buff const*,unsigned int,int,struct iphdr*) ;

__attribute__((used)) static int FUNC_3(const struct sk_buff *VAR_1, unsigned int VAR_2,
       u_int8_t *VAR_3)
{
 int VAR_4 = -1;
 const struct iphdr *VAR_5;
 struct iphdr VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_2, sizeof(VAR_6), &VAR_6);
 if (!VAR_5)
  return -1;




 if (VAR_5->frag_off & FUNC_0(VAR_0))
  return -1;

 VAR_4 = VAR_2 + (VAR_5->ihl << 2);
 *VAR_3 = VAR_5->protocol;


 if (VAR_4 > VAR_1->len) {
  FUNC_1("bogus IPv4 packet: nhoff %u, ihl %u, skblen %u\n",
    VAR_2, VAR_5->ihl << 2, VAR_1->len);
  return -1;
 }
 return VAR_4;
}
