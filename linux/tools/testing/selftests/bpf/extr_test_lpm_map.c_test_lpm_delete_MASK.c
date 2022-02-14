
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
 scalar_t__ VAR_3 ;
 struct bpf_lpm_trie_key* FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t,int,int,int ) ;
 int FUNC_3 (int,struct bpf_lpm_trie_key*) ;
 int FUNC_4 (int,struct bpf_lpm_trie_key*,int*) ;
 scalar_t__ FUNC_5 (int,struct bpf_lpm_trie_key*,int*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 struct bpf_lpm_trie_key *VAR_5;
 size_t VAR_6;
 int VAR_7;
 __u64 VAR_8;

 VAR_6 = sizeof(*VAR_5) + sizeof(__u32);
 VAR_5 = FUNC_0(VAR_6);

 VAR_7 = FUNC_2(VAR_2,
    VAR_6, sizeof(VAR_8),
    100, VAR_1);
 FUNC_1(VAR_7 >= 0);
 VAR_8 = 1;
 VAR_5->prefixlen = 16;
 FUNC_7(VAR_0, "192.168.0.0", VAR_5->data);
 FUNC_1(FUNC_5(VAR_7, VAR_5, &VAR_8, 0) == 0);

 VAR_8 = 2;
 VAR_5->prefixlen = 24;
 FUNC_7(VAR_0, "192.168.0.0", VAR_5->data);
 FUNC_1(FUNC_5(VAR_7, VAR_5, &VAR_8, 0) == 0);

 VAR_8 = 3;
 VAR_5->prefixlen = 24;
 FUNC_7(VAR_0, "192.168.128.0", VAR_5->data);
 FUNC_1(FUNC_5(VAR_7, VAR_5, &VAR_8, 0) == 0);

 VAR_8 = 4;
 VAR_5->prefixlen = 24;
 FUNC_7(VAR_0, "192.168.1.0", VAR_5->data);
 FUNC_1(FUNC_5(VAR_7, VAR_5, &VAR_8, 0) == 0);


 VAR_5->prefixlen = 32;
 FUNC_7(VAR_0, "10.0.0.1", VAR_5->data);
 FUNC_1(FUNC_4(VAR_7, VAR_5, &VAR_8) == -1 &&
  VAR_4 == VAR_3);

 VAR_5->prefixlen = 30;
 FUNC_7(VAR_0, "192.255.0.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_7, VAR_5) == -1 &&
  VAR_4 == VAR_3);

 VAR_5->prefixlen = 16;
 FUNC_7(VAR_0, "192.255.0.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_7, VAR_5) == -1 &&
  VAR_4 == VAR_3);


 VAR_5->prefixlen = 32;
 FUNC_7(VAR_0, "192.168.0.1", VAR_5->data);
 FUNC_1(FUNC_4(VAR_7, VAR_5, &VAR_8) == 0);
 FUNC_1(VAR_8 == 2);


 VAR_5->prefixlen = 24;
 FUNC_7(VAR_0, "192.168.0.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_7, VAR_5) == 0);

 VAR_5->prefixlen = 32;
 FUNC_7(VAR_0, "192.168.0.1", VAR_5->data);
 FUNC_1(FUNC_4(VAR_7, VAR_5, &VAR_8) == 0);
 FUNC_1(VAR_8 == 1);


 VAR_5->prefixlen = 24;
 FUNC_7(VAR_0, "192.168.1.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_7, VAR_5) == 0);

 VAR_5->prefixlen = 32;
 FUNC_7(VAR_0, "192.168.1.1", VAR_5->data);
 FUNC_1(FUNC_4(VAR_7, VAR_5, &VAR_8) == 0);
 FUNC_1(VAR_8 == 1);


 VAR_5->prefixlen = 16;
 FUNC_7(VAR_0, "192.168.0.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_7, VAR_5) == 0);

 VAR_5->prefixlen = 32;
 FUNC_7(VAR_0, "192.168.128.1", VAR_5->data);
 FUNC_1(FUNC_4(VAR_7, VAR_5, &VAR_8) == 0);
 FUNC_1(VAR_8 == 3);


 VAR_5->prefixlen = 24;
 FUNC_7(VAR_0, "192.168.128.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_7, VAR_5) == 0);

 VAR_5->prefixlen = 32;
 FUNC_7(VAR_0, "192.168.128.1", VAR_5->data);
 FUNC_1(FUNC_4(VAR_7, VAR_5, &VAR_8) == -1 &&
  VAR_4 == VAR_3);

 FUNC_6(VAR_7);
}
