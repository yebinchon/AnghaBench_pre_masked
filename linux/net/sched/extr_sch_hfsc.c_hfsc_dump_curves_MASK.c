
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hfsc_class {int cl_flags; int cl_usc; int cl_fsc; int cl_rsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct sk_buff *VAR_6, struct hfsc_class *VAR_7)
{
 if ((VAR_7->cl_flags & VAR_1) &&
     (FUNC_0(VAR_6, VAR_4, &VAR_7->cl_rsc) < 0))
  goto nla_put_failure;

 if ((VAR_7->cl_flags & VAR_0) &&
     (FUNC_0(VAR_6, VAR_3, &VAR_7->cl_fsc) < 0))
  goto nla_put_failure;

 if ((VAR_7->cl_flags & VAR_2) &&
     (FUNC_0(VAR_6, VAR_5, &VAR_7->cl_usc) < 0))
  goto nla_put_failure;

 return VAR_6->len;

 nla_put_failure:
 return -1;
}
