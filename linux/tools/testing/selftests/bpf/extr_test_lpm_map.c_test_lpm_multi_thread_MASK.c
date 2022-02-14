
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpm_mt_test_info {int cmd; } ;
struct bpf_lpm_trie_key {int dummy; } ;
typedef int pthread_t ;
typedef int info ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,size_t,size_t,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct lpm_mt_test_info*,struct lpm_mt_test_info*,int) ;
 scalar_t__ FUNC_4 (int *,int *,int *,struct lpm_mt_test_info*) ;
 scalar_t__ FUNC_5 (int ,void**) ;
 int FUNC_6 (struct lpm_mt_test_info*,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct lpm_mt_test_info VAR_3[4];
 size_t VAR_4, VAR_5;
 pthread_t VAR_6[4];
 int VAR_7, VAR_8;
 void *VAR_9;


 VAR_5 = sizeof(__u32);
 VAR_4 = sizeof(struct bpf_lpm_trie_key) + VAR_5;
 VAR_8 = FUNC_1(VAR_1, VAR_4, VAR_5,
    100, VAR_0);


 FUNC_6(&VAR_3[0], VAR_8);
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if (VAR_7 != 0)
   FUNC_3(&VAR_3[VAR_7], &VAR_3[0], sizeof(VAR_3[VAR_7]));
  VAR_3[VAR_7].cmd = VAR_7;
  FUNC_0(FUNC_4(&VAR_6[VAR_7], ((void*)0), &VAR_2, &VAR_3[VAR_7]) == 0);
 }

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  FUNC_0(FUNC_5(VAR_6[VAR_7], &VAR_9) == 0 && VAR_9 == (void *)&VAR_3[VAR_7]);

 FUNC_2(VAR_8);
}
