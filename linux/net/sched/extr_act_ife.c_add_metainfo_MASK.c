
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_meta_ops {int owner; } ;
struct tcf_ife_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcf_meta_ops const*,struct tcf_ife_info*,int ,void*,int,int,int) ;
 struct tcf_meta_ops* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tcf_ife_info *VAR_1, u32 VAR_2, void *VAR_3,
   int VAR_4, bool VAR_5)
{
 const struct tcf_meta_ops *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, 0, VAR_5);
 if (VAR_7)

  FUNC_2(VAR_6->owner);
 return VAR_7;
}
