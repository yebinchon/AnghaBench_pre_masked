
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf {int types_size; int nr_types; struct btf_type** types; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btf_type VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 struct btf_type** FUNC_2 (struct btf_type**,int) ;

__attribute__((used)) static int FUNC_3(struct btf *VAR_4, struct btf_type *VAR_5)
{
 if (VAR_4->types_size - VAR_4->nr_types < 2) {
  struct btf_type **VAR_6;
  __u32 VAR_7, VAR_8;

  if (VAR_4->types_size == VAR_0)
   return -VAR_1;

  VAR_7 = FUNC_0(VAR_4->types_size >> 2, 16);
  VAR_8 = FUNC_1(VAR_0, VAR_4->types_size + VAR_7);

  VAR_6 = FUNC_2(VAR_4->types, sizeof(*VAR_6) * VAR_8);
  if (!VAR_6)
   return -VAR_2;

  if (VAR_4->nr_types == 0)
   VAR_6[0] = &VAR_3;

  VAR_4->types = VAR_6;
  VAR_4->types_size = VAR_8;
 }

 VAR_4->types[++(VAR_4->nr_types)] = VAR_5;

 return 0;
}
