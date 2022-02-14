
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpm_mt_test_info {int iter; int cmd; int map_fd; TYPE_1__* key; } ;
struct bpf_lpm_trie_key {int data; int prefixlen; } ;
typedef int __u32 ;
struct TYPE_2__ {int data; int prefixlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct bpf_lpm_trie_key* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct bpf_lpm_trie_key*) ;
 int FUNC_3 (int ,struct bpf_lpm_trie_key*,struct bpf_lpm_trie_key*) ;
 int FUNC_4 (int ,struct bpf_lpm_trie_key*,int*) ;
 scalar_t__ FUNC_5 (int ,struct bpf_lpm_trie_key*,int*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void *FUNC_8(void *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct lpm_mt_test_info *VAR_10 = VAR_4;
 struct bpf_lpm_trie_key *VAR_11;

 VAR_9 = sizeof(struct bpf_lpm_trie_key) + sizeof(__u32);
 VAR_11 = FUNC_0(VAR_9);
 for (VAR_8 = 0; VAR_8 < VAR_10->iter; VAR_8++)
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {



   VAR_6 = (VAR_8 < (VAR_10->iter / 2)) ? VAR_5 : VAR_2 - VAR_5 - 1;
   VAR_11->prefixlen = VAR_10->key[VAR_6].prefixlen;
   FUNC_6(VAR_11->data, &VAR_10->key[VAR_6].data, sizeof(__u32));
   if (VAR_10->cmd == 0) {
    __u32 VAR_12 = VAR_6;

    FUNC_1(FUNC_5(VAR_10->map_fd, VAR_11, &VAR_12, 0) == 0);
   } else if (VAR_10->cmd == 1) {
    VAR_7 = FUNC_2(VAR_10->map_fd, VAR_11);
    FUNC_1(VAR_7 == 0 || VAR_3 == VAR_0);
   } else if (VAR_10->cmd == 2) {
    __u32 VAR_13;
    VAR_7 = FUNC_4(VAR_10->map_fd, VAR_11, &VAR_13);
    FUNC_1(VAR_7 == 0 || VAR_3 == VAR_0);
   } else {
    struct bpf_lpm_trie_key *VAR_14 = FUNC_0(VAR_9);
    VAR_7 = FUNC_3(VAR_10->map_fd, VAR_11, VAR_14);
    FUNC_1(VAR_7 == 0 || VAR_3 == VAR_0 || VAR_3 == VAR_1);
   }
  }


 FUNC_7((void *)VAR_10);
}
