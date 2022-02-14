
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct bpf_lpm_trie_key {int prefixlen; int* data; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bpf_lpm_trie_key* FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t,int,int,int ) ;
 int FUNC_3 (int,struct bpf_lpm_trie_key*,struct bpf_lpm_trie_key*) ;
 scalar_t__ FUNC_4 (int,struct bpf_lpm_trie_key*,int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,char*,int*) ;
 int FUNC_7 (struct bpf_lpm_trie_key*,struct bpf_lpm_trie_key*,size_t) ;
 int FUNC_8 (struct bpf_lpm_trie_key*,int ,size_t) ;

__attribute__((used)) static void FUNC_9(void)
{
 struct bpf_lpm_trie_key *VAR_5, *VAR_6;
 size_t VAR_7;
 __u32 VAR_8 = 0;
 int VAR_9;

 VAR_7 = sizeof(*VAR_5) + sizeof(__u32);
 VAR_5 = FUNC_0(VAR_7);
 VAR_6 = FUNC_0(VAR_7);

 VAR_9 = FUNC_2(VAR_2, VAR_7, sizeof(VAR_8),
    100, VAR_1);
 FUNC_1(VAR_9 >= 0);


 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == -1 &&
        VAR_4 == VAR_3);


 VAR_5->prefixlen = 16;
 FUNC_6(VAR_0, "192.168.0.0", VAR_5->data);
 FUNC_1(FUNC_4(VAR_9, VAR_5, &VAR_8, 0) == 0);

 FUNC_8(VAR_5, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == 0);
 FUNC_1(VAR_5->prefixlen == 16 && VAR_5->data[0] == 192 &&
        VAR_5->data[1] == 168);

 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == -1 &&
        VAR_4 == VAR_3);


 VAR_5->prefixlen = 8;
 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == 0);
 FUNC_1(VAR_5->prefixlen == 16 && VAR_5->data[0] == 192 &&
        VAR_5->data[1] == 168);


 VAR_5->prefixlen = 24;
 FUNC_6(VAR_0, "192.168.128.0", VAR_5->data);
 FUNC_1(FUNC_4(VAR_9, VAR_5, &VAR_8, 0) == 0);

 FUNC_8(VAR_5, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == 0);
 FUNC_1(VAR_5->prefixlen == 24 && VAR_5->data[0] == 192 &&
        VAR_5->data[1] == 168 && VAR_5->data[2] == 128);

 FUNC_8(VAR_6, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 16 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == -1 &&
        VAR_4 == VAR_3);


 VAR_5->prefixlen = 24;
 FUNC_6(VAR_0, "192.168.0.0", VAR_5->data);
 FUNC_1(FUNC_4(VAR_9, VAR_5, &VAR_8, 0) == 0);

 FUNC_8(VAR_5, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == 0);
 FUNC_1(VAR_5->prefixlen == 24 && VAR_5->data[0] == 192 &&
        VAR_5->data[1] == 168 && VAR_5->data[2] == 0);

 FUNC_8(VAR_6, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 24 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 128);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 16 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == -1 &&
        VAR_4 == VAR_3);


 VAR_5->prefixlen = 24;
 FUNC_6(VAR_0, "192.168.1.0", VAR_5->data);
 FUNC_1(FUNC_4(VAR_9, VAR_5, &VAR_8, 0) == 0);

 FUNC_8(VAR_5, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == 0);
 FUNC_1(VAR_5->prefixlen == 24 && VAR_5->data[0] == 192 &&
        VAR_5->data[1] == 168 && VAR_5->data[2] == 0);

 FUNC_8(VAR_6, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 24 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 1);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 24 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 128);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 16 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == -1 &&
        VAR_4 == VAR_3);


 VAR_5->prefixlen = 28;
 FUNC_6(VAR_0, "192.168.1.128", VAR_5->data);
 FUNC_1(FUNC_4(VAR_9, VAR_5, &VAR_8, 0) == 0);

 FUNC_8(VAR_5, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, ((void*)0), VAR_5) == 0);
 FUNC_1(VAR_5->prefixlen == 24 && VAR_5->data[0] == 192 &&
        VAR_5->data[1] == 168 && VAR_5->data[2] == 0);

 FUNC_8(VAR_6, 0, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 28 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 1 &&
        VAR_6->data[3] == 128);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 24 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 1);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 24 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 128);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 16 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168);

 FUNC_7(VAR_5, VAR_6, VAR_7);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == -1 &&
        VAR_4 == VAR_3);


 VAR_5->prefixlen = 22;
 FUNC_6(VAR_0, "192.168.1.0", VAR_5->data);
 FUNC_1(FUNC_3(VAR_9, VAR_5, VAR_6) == 0);
 FUNC_1(VAR_6->prefixlen == 24 && VAR_6->data[0] == 192 &&
        VAR_6->data[1] == 168 && VAR_6->data[2] == 0);

 FUNC_5(VAR_9);
}
