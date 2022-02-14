
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dumper {int btf; } ;
typedef int __u8 ;
typedef int __u32 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btf_dumper const*,int,int ,void const*) ;

__attribute__((used)) static int FUNC_2(const struct btf_dumper *VAR_0, __u32 VAR_1,
          __u8 VAR_2, const void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->btf, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
}
