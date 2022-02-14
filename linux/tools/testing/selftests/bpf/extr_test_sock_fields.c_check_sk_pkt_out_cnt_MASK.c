
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_spinlock_cnt {int cnt; } ;


 int FUNC_0 (int,char*,char*,int,int ,int,int) ;
 int FUNC_1 (int ,int*,struct bpf_spinlock_cnt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3, int VAR_4)
{
 struct bpf_spinlock_cnt VAR_5 = {}, VAR_6 = {};
 int VAR_7;

 VAR_5.cnt = ~0;
 VAR_6 = ~0;
 VAR_7 = FUNC_1(VAR_2, &VAR_3, &VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_1, &VAR_3,
       &VAR_6);
 FUNC_0(VAR_7 || VAR_5.cnt != 4 || VAR_6 != 40,
       "bpf_map_lookup_elem(sk_pkt_out_cnt, &accept_fd)",
       "err:%d errno:%d pkt_out_cnt:%u pkt_out_cnt10:%u",
       VAR_7, VAR_0, VAR_5.cnt, VAR_6);

 VAR_5.cnt = ~0;
 VAR_6 = ~0;
 VAR_7 = FUNC_1(VAR_2, &VAR_4, &VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_1, &VAR_4,
       &VAR_6);






 FUNC_0(VAR_7 || VAR_5.cnt != 0xeB9F + 4 ||
       VAR_6 != 0xeB9F + 40,
       "bpf_map_lookup_elem(sk_pkt_out_cnt, &cli_fd)",
       "err:%d errno:%d pkt_out_cnt:%u pkt_out_cnt10:%u",
       VAR_7, VAR_0, VAR_5.cnt, VAR_6);
}
