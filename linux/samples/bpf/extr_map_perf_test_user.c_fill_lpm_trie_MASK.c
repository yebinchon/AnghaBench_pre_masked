
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_lpm_trie_key {int prefixlen; int* data; } ;


 struct bpf_lpm_trie_key* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct bpf_lpm_trie_key*,unsigned long*,int ) ;
 int * VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 struct bpf_lpm_trie_key *VAR_1;
 unsigned long VAR_2 = 0;
 unsigned int VAR_3;
 int VAR_4;

 VAR_1 = FUNC_0(sizeof(*VAR_1) + 4);
 VAR_1->prefixlen = 32;

 for (VAR_3 = 0; VAR_3 < 512; ++VAR_3) {
  VAR_1->prefixlen = FUNC_3() % 33;
  VAR_1->data[0] = FUNC_3() & 0xff;
  VAR_1->data[1] = FUNC_3() & 0xff;
  VAR_1->data[2] = FUNC_3() & 0xff;
  VAR_1->data[3] = FUNC_3() & 0xff;
  VAR_4 = FUNC_2(VAR_0[6], VAR_1, &VAR_2, 0);
  FUNC_1(!VAR_4);
 }

 VAR_1->prefixlen = 32;
 VAR_1->data[0] = 192;
 VAR_1->data[1] = 168;
 VAR_1->data[2] = 0;
 VAR_1->data[3] = 1;
 VAR_2 = 128;

 VAR_4 = FUNC_2(VAR_0[6], VAR_1, &VAR_2, 0);
 FUNC_1(!VAR_4);
}
