
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cls_bpf_prog {TYPE_2__* filter; scalar_t__ bpf_name; } ;
struct TYPE_4__ {int tag; TYPE_1__* aux; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_6(const struct cls_bpf_prog *VAR_4,
      struct sk_buff *VAR_5)
{
 struct nlattr *VAR_6;

 if (VAR_4->bpf_name &&
     FUNC_3(VAR_5, VAR_2, VAR_4->bpf_name))
  return -VAR_0;

 if (FUNC_4(VAR_5, VAR_1, VAR_4->filter->aux->id))
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_5, VAR_3, sizeof(VAR_4->filter->tag));
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_0(FUNC_1(VAR_6), VAR_4->filter->tag, FUNC_2(VAR_6));

 return 0;
}
