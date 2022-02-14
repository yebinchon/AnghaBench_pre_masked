
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {int type; int size; } ;
struct btf_member {int type; } ;
struct btf {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;
struct TYPE_2__ {int type; } ;
 struct btf_type* FUNC_0 (struct btf const*,int ) ;
 TYPE_1__* FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_type const*) ;
 struct btf_member* FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(const struct btf *VAR_0, __u32 VAR_1)
{
 const struct btf_type *VAR_2 = FUNC_0(VAR_0, VAR_1);
 __u16 VAR_3 = FUNC_2(VAR_2);

 switch (VAR_3) {
 case 134:
 case 135:
  return FUNC_6(sizeof(void *), VAR_2->size);
 case 133:
  return sizeof(void *);
 case 130:
 case 128:
 case 136:
 case 132:
  return FUNC_8(VAR_0, VAR_2->type);
 case 137:
  return FUNC_8(VAR_0, FUNC_1(VAR_2)->type);
 case 131:
 case 129: {
  const struct btf_member *VAR_4 = FUNC_3(VAR_2);
  __u16 VAR_5 = FUNC_4(VAR_2);
  int VAR_6, VAR_7 = 1;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_4++)
   VAR_7 = FUNC_5(VAR_7, FUNC_8(VAR_0, VAR_4->type));

  return VAR_7;
 }
 default:
  FUNC_7("unsupported BTF_KIND:%u\n", FUNC_2(VAR_2));
  return 1;
 }
}
