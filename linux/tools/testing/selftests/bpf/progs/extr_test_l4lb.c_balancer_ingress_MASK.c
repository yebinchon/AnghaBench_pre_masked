
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_hdr {int eth_proto; } ;
struct __sk_buff {scalar_t__ data; scalar_t__ data_end; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int,void*,int,struct __sk_buff*) ;

int FUNC_2(struct __sk_buff *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_3->data_end;
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct eth_hdr *VAR_6 = VAR_5;
 __u32 VAR_7;
 __u32 VAR_8;

 VAR_8 = sizeof(struct eth_hdr);
 if (VAR_5 + VAR_8 > VAR_4)
  return VAR_2;
 VAR_7 = VAR_6->eth_proto;
 if (VAR_7 == FUNC_0(VAR_0))
  return FUNC_1(VAR_5, VAR_8, VAR_4, 0, VAR_3);
 else if (VAR_7 == FUNC_0(VAR_1))
  return FUNC_1(VAR_5, VAR_8, VAR_4, 1, VAR_3);
 else
  return VAR_2;
}
