
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_spinlock_cnt {int cnt; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*,int,int ) ;
 int FUNC_1 (int ,int*,struct bpf_spinlock_cnt*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, __u32 VAR_5)
{
 struct bpf_spinlock_cnt VAR_6 = {};
 int VAR_7;

 VAR_6.cnt = VAR_5;
 VAR_7 = FUNC_1(VAR_3, &VAR_4, &VAR_6,
      VAR_0);
 FUNC_0(VAR_7, "bpf_map_update_elem(sk_pkt_out_cnt_fd)",
       "err:%d errno:%d", VAR_7, VAR_1);

 VAR_6.cnt *= 10;
 VAR_7 = FUNC_1(VAR_2, &VAR_4, &VAR_6,
      VAR_0);
 FUNC_0(VAR_7, "bpf_map_update_elem(sk_pkt_out_cnt10_fd)",
       "err:%d errno:%d", VAR_7, VAR_1);
}
