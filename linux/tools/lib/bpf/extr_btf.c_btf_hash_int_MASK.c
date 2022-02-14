
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
typedef int __u32 ;


 long FUNC_0 (struct btf_type*) ;
 long FUNC_1 (long,int ) ;

__attribute__((used)) static long FUNC_2(struct btf_type *VAR_0)
{
 __u32 VAR_1 = *(__u32 *)(VAR_0 + 1);
 long VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2 = FUNC_1(VAR_2, VAR_1);
 return VAR_2;
}
