
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ dest; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct eth_hdr {scalar_t__ h_proto; } ;
struct __sk_buff {scalar_t__ data_end; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct iphdr*) ;

int FUNC_2(struct __sk_buff *VAR_4)
{
 void *VAR_5 = (void *)(long)VAR_4->data;
 struct eth_hdr *VAR_6 = VAR_5;
 struct iphdr *VAR_7 = VAR_5 + sizeof(*VAR_6);
 struct udphdr *VAR_8 = VAR_5 + sizeof(*VAR_6) + sizeof(*VAR_7);
 void *VAR_9 = (void *)(long)VAR_4->data_end;


 if (VAR_5 + sizeof(*VAR_6) + sizeof(*VAR_7) + sizeof(*VAR_8) > VAR_9)
  return 0;

 if (VAR_6->h_proto != FUNC_0(VAR_1))
  return 0;
 if (VAR_7->protocol != VAR_2 || VAR_7->ihl != 5)
  return 0;
 if (FUNC_1(VAR_7))
  return 0;
 if (VAR_8->dest == FUNC_0(VAR_0))
  return VAR_3;
 return 0;
}
