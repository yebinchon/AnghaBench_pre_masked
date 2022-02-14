
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct bpf_xfrm_state {int remote_ipv4; int spi; int reqid; } ;
struct __sk_buff {int dummy; } ;
typedef int fmt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct __sk_buff*,int ,struct bpf_xfrm_state*,int,int ) ;
 int FUNC_2 (char*,int,int ,int ,int ) ;

int FUNC_3(struct __sk_buff *VAR_1)
{
 struct bpf_xfrm_state VAR_2;
 char VAR_3[] = "reqid %d spi 0x%x remote ip 0x%x\n";
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, &VAR_2, sizeof(VAR_2), 0);
 if (VAR_4 < 0)
  return VAR_0;

 FUNC_2(VAR_3, sizeof(VAR_3), VAR_2.reqid, FUNC_0(VAR_2.spi),
    FUNC_0(VAR_2.remote_ipv4));
 return VAR_0;
}
