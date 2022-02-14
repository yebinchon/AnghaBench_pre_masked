
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct bpf_lpm_trie_key {int prefixlen; int data; } ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bpf_lpm_trie_key* FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t,int,int,int ) ;
 int FUNC_3 (int,struct bpf_lpm_trie_key*,int*) ;
 scalar_t__ FUNC_4 (int,struct bpf_lpm_trie_key*,int*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct bpf_lpm_trie_key *VAR_6;
 struct bpf_lpm_trie_key *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 int VAR_10;
 int VAR_11;
 __u64 VAR_12;

 VAR_8 = sizeof(*VAR_6) + sizeof(__u32);
 VAR_9 = sizeof(*VAR_7) + sizeof(__u32) * 4;
 VAR_6 = FUNC_0(VAR_8);
 VAR_7 = FUNC_0(VAR_9);

 VAR_10 = FUNC_2(VAR_3,
         VAR_8, sizeof(VAR_12),
         100, VAR_2);
 FUNC_1(VAR_10 >= 0);

 VAR_11 = FUNC_2(VAR_3,
         VAR_9, sizeof(VAR_12),
         100, VAR_2);
 FUNC_1(VAR_11 >= 0);


 VAR_12 = 1;
 VAR_6->prefixlen = 16;
 FUNC_6(VAR_0, "192.168.0.0", VAR_6->data);
 FUNC_1(FUNC_4(VAR_10, VAR_6, &VAR_12, 0) == 0);

 VAR_12 = 2;
 VAR_6->prefixlen = 24;
 FUNC_6(VAR_0, "192.168.0.0", VAR_6->data);
 FUNC_1(FUNC_4(VAR_10, VAR_6, &VAR_12, 0) == 0);

 VAR_12 = 3;
 VAR_6->prefixlen = 24;
 FUNC_6(VAR_0, "192.168.128.0", VAR_6->data);
 FUNC_1(FUNC_4(VAR_10, VAR_6, &VAR_12, 0) == 0);

 VAR_12 = 5;
 VAR_6->prefixlen = 24;
 FUNC_6(VAR_0, "192.168.1.0", VAR_6->data);
 FUNC_1(FUNC_4(VAR_10, VAR_6, &VAR_12, 0) == 0);

 VAR_12 = 4;
 VAR_6->prefixlen = 23;
 FUNC_6(VAR_0, "192.168.0.0", VAR_6->data);
 FUNC_1(FUNC_4(VAR_10, VAR_6, &VAR_12, 0) == 0);

 VAR_12 = 0xdeadbeef;
 VAR_7->prefixlen = 64;
 FUNC_6(VAR_1, "2a00:1450:4001:814::200e", VAR_7->data);
 FUNC_1(FUNC_4(VAR_11, VAR_7, &VAR_12, 0) == 0);


 VAR_6->prefixlen = 32;
 VAR_7->prefixlen = 128;


 FUNC_6(VAR_0, "192.168.128.23", VAR_6->data);
 FUNC_1(FUNC_3(VAR_10, VAR_6, &VAR_12) == 0);
 FUNC_1(VAR_12 == 3);

 FUNC_6(VAR_0, "192.168.0.1", VAR_6->data);
 FUNC_1(FUNC_3(VAR_10, VAR_6, &VAR_12) == 0);
 FUNC_1(VAR_12 == 2);

 FUNC_6(VAR_1, "2a00:1450:4001:814::", VAR_7->data);
 FUNC_1(FUNC_3(VAR_11, VAR_7, &VAR_12) == 0);
 FUNC_1(VAR_12 == 0xdeadbeef);

 FUNC_6(VAR_1, "2a00:1450:4001:814::1", VAR_7->data);
 FUNC_1(FUNC_3(VAR_11, VAR_7, &VAR_12) == 0);
 FUNC_1(VAR_12 == 0xdeadbeef);


 FUNC_6(VAR_0, "10.0.0.1", VAR_6->data);
 FUNC_1(FUNC_3(VAR_10, VAR_6, &VAR_12) == -1 &&
        VAR_5 == VAR_4);

 FUNC_6(VAR_0, "11.11.11.11", VAR_6->data);
 FUNC_1(FUNC_3(VAR_10, VAR_6, &VAR_12) == -1 &&
        VAR_5 == VAR_4);

 FUNC_6(VAR_1, "2a00:ffff::", VAR_7->data);
 FUNC_1(FUNC_3(VAR_11, VAR_7, &VAR_12) == -1 &&
        VAR_5 == VAR_4);

 FUNC_5(VAR_10);
 FUNC_5(VAR_11);
}
