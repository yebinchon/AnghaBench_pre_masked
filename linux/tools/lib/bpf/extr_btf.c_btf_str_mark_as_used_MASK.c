
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_str_ptrs {scalar_t__ data; int cnt; int ptrs; } ;
struct btf_str_ptr {int used; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 struct btf_str_ptr* FUNC_0 (scalar_t__,int ,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(__u32 *VAR_2, void *VAR_3)
{
 struct btf_str_ptrs *VAR_4;
 struct btf_str_ptr *VAR_5;

 if (*VAR_2 == 0)
  return 0;

 VAR_4 = VAR_3;
 VAR_5 = FUNC_0(VAR_4->data + *VAR_2, VAR_4->ptrs, VAR_4->cnt,
      sizeof(struct btf_str_ptr), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->used = 1;
 return 0;
}
