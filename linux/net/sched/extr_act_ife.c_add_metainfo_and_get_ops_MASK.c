
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_meta_ops {int owner; } ;
struct tcf_ife_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcf_meta_ops const*,struct tcf_ife_info*,int ,int *,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct tcf_meta_ops *VAR_1,
        struct tcf_ife_info *VAR_2, u32 VAR_3,
        bool VAR_4)
{
 int VAR_5;

 if (!FUNC_2(VAR_1->owner))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, ((void*)0), 0, 1, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_1->owner);
 return VAR_5;
}
