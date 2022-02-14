
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int ipvs_property; } ;
struct ip_vs_conn {int flags; TYPE_1__* ipvs; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int *,struct sk_buff*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_6(int VAR_5, struct sk_buff *VAR_6,
         struct ip_vs_conn *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_3;

 VAR_6->ipvs_property = 1;
 if (FUNC_3(!(VAR_7->flags & VAR_0)))
  FUNC_2(VAR_6);
 if (!VAR_8) {
  FUNC_1(VAR_6);
  FUNC_5(VAR_6);
  FUNC_0(VAR_5, VAR_2, VAR_7->ipvs->net, ((void*)0), VAR_6,
   ((void*)0), FUNC_4(VAR_6)->dev, VAR_4);
 } else
  VAR_9 = VAR_1;
 return VAR_9;
}
