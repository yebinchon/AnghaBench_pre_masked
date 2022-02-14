
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int size; } ;
struct btf_member {int offset; int type; } ;
struct btf {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (struct btf const*,int ) ;
 int FUNC_1 (struct btf_type const*,int) ;
 struct btf_member* FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_type const*) ;

__attribute__((used)) static bool FUNC_4(const struct btf *VAR_0, __u32 VAR_1,
     const struct btf_type *VAR_2)
{
 const struct btf_member *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 __u16 VAR_7;

 VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2->size % VAR_4)
  return 1;

 VAR_3 = FUNC_2(VAR_2);
 VAR_7 = FUNC_3(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++, VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_3->type);
  VAR_6 = FUNC_1(VAR_2, VAR_5);
  if (VAR_6 == 0 && VAR_3->offset % (8 * VAR_4) != 0)
   return 1;
 }





 return 0;
}
