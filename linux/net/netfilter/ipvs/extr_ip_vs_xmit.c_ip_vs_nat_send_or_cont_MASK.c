
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int ipvs_property; } ;
struct ip_vs_conn {int flags; scalar_t__ vport; scalar_t__ dport; TYPE_1__* ipvs; int daddr; int vaddr; int af; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int *,struct sk_buff*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct ip_vs_conn*,int) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_8(int VAR_5, struct sk_buff *VAR_6,
      struct ip_vs_conn *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_3;

 VAR_6->ipvs_property = 1;
 if (FUNC_5(!(VAR_7->flags & VAR_0)))
  FUNC_3(VAR_6);
 else
  FUNC_4(VAR_6, VAR_7, 1);




 if (!VAR_8 || VAR_7->vport != VAR_7->dport ||
     !FUNC_1(VAR_7->af, &VAR_7->vaddr, &VAR_7->daddr))
  FUNC_2(VAR_6);

 if (!VAR_8) {
  FUNC_7(VAR_6);
  FUNC_0(VAR_5, VAR_2, VAR_7->ipvs->net, ((void*)0), VAR_6,
   ((void*)0), FUNC_6(VAR_6)->dev, VAR_4);
 } else
  VAR_9 = VAR_1;

 return VAR_9;
}
