
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_param {int type; int name_off; } ;
typedef int __u16 ;


 long FUNC_0 (struct btf_type*) ;
 struct btf_param* FUNC_1 (struct btf_type*) ;
 int FUNC_2 (struct btf_type*) ;
 long FUNC_3 (long,int ) ;

__attribute__((used)) static long FUNC_4(struct btf_type *VAR_0)
{
 const struct btf_param *VAR_1 = FUNC_1(VAR_0);
 __u16 VAR_2 = FUNC_2(VAR_0);
 long VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_3(VAR_3, VAR_1->name_off);
  VAR_3 = FUNC_3(VAR_3, VAR_1->type);
  VAR_1++;
 }
 return VAR_3;
}
