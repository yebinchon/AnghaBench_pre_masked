
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ name; TYPE_2__* prog; } ;
struct seg6_local_lwt {TYPE_3__ bpf; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {TYPE_1__* aux; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct seg6_local_lwt *VAR_5)
{
 struct nlattr *VAR_6;

 if (!VAR_5->bpf.prog)
  return 0;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 if (FUNC_3(VAR_4, VAR_2, VAR_5->bpf.prog->aux->id))
  return -VAR_0;

 if (VAR_5->bpf.name &&
     FUNC_2(VAR_4, VAR_3, VAR_5->bpf.name))
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_6);
}
