
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int len; int vec; } ;
struct TYPE_4__ {TYPE_1__ sp; } ;
struct dccp_feat_entry {TYPE_2__ val; int feat_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dccp_feat_entry*) ;
 struct dccp_feat_entry* FUNC_4 (struct dccp_feat_entry const*,int,int ) ;

__attribute__((used)) static struct dccp_feat_entry *
       FUNC_5(struct dccp_feat_entry const *VAR_2)
{
 struct dccp_feat_entry *VAR_3;
 u8 VAR_4 = FUNC_1(VAR_2->feat_num);

 if (VAR_4 == VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_4(VAR_2, sizeof(struct dccp_feat_entry), FUNC_2());
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (VAR_4 == VAR_0 && FUNC_0(&VAR_3->val,
            VAR_2->val.sp.vec,
            VAR_2->val.sp.len)) {
  FUNC_3(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
