
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct __sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct __sk_buff*,int ,int*,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct __sk_buff*,int,int,int) ;

int FUNC_3(struct __sk_buff *VAR_3)
{
 uint32_t VAR_4, VAR_5 = 0x3fea8c0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2, &VAR_4, 4);
 if (VAR_6 < 0) {
  FUNC_1("bpf_skb_load_bytes failed: %d\n", VAR_6);
  return VAR_0;
 }

 if (VAR_4 == 0x2fea8c0) {
  FUNC_1("out: rewriting from %x to %x\n", VAR_4, VAR_5);
  return FUNC_2(VAR_3, VAR_4, VAR_5, 1);
 }

 return VAR_1;
}
