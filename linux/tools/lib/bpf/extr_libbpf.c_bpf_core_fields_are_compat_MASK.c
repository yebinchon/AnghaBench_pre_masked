
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {int size; } ;
struct btf {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int type; } ;







 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct btf_type const*) ;
 int FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_type const*) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (char*,int,int ,int ) ;
 struct btf_type* FUNC_6 (struct btf const*,int ,int *) ;

__attribute__((used)) static int FUNC_7(const struct btf *VAR_1,
          __u32 VAR_2,
          const struct btf *VAR_3,
          __u32 VAR_4)
{
 const struct btf_type *VAR_5, *VAR_6;

recur:
 VAR_5 = FUNC_6(VAR_1, VAR_2, &VAR_2);
 VAR_6 = FUNC_6(VAR_3, VAR_4, &VAR_4);
 if (!VAR_5 || !VAR_6)
  return -VAR_0;

 if (FUNC_3(VAR_5) && FUNC_3(VAR_6))
  return 1;
 if (FUNC_4(VAR_5) != FUNC_4(VAR_6))
  return 0;

 switch (FUNC_4(VAR_5)) {
 case 130:
 case 128:
  return 1;
 case 131:
  return VAR_5->size == VAR_6->size;
 case 129:
  return FUNC_2(VAR_5) == 0 &&
         FUNC_2(VAR_6) == 0 &&
         VAR_5->size == VAR_6->size &&
         FUNC_1(VAR_5) == FUNC_1(VAR_6);
 case 132:
  VAR_2 = FUNC_0(VAR_5)->type;
  VAR_4 = FUNC_0(VAR_6)->type;
  goto recur;
 default:
  FUNC_5("unexpected kind %d relocated, local [%d], target [%d]\n",
      FUNC_4(VAR_5), VAR_2, VAR_4);
  return 0;
 }
}
