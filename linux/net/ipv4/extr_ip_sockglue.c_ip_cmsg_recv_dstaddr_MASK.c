
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_zero; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
typedef int sin ;
typedef int _ports ;
typedef int __be16 ;
struct TYPE_4__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct msghdr*,int ,int ,int,struct sockaddr_in*) ;
 int * FUNC_3 (struct sk_buff*,int ,int,int **) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct msghdr *VAR_3, struct sk_buff *VAR_4)
{
 __be16 VAR_5[2], *VAR_6;
 struct sockaddr_in VAR_7;





 VAR_6 = FUNC_3(VAR_4, FUNC_4(VAR_4),
       sizeof(VAR_5), &VAR_5);
 if (!VAR_6)
  return;

 VAR_7.sin_family = VAR_0;
 VAR_7.sin_addr.s_addr = FUNC_0(VAR_4)->daddr;
 VAR_7.sin_port = VAR_6[1];
 FUNC_1(VAR_7.sin_zero, 0, sizeof(VAR_7.sin_zero));

 FUNC_2(VAR_3, VAR_2, VAR_1, sizeof(VAR_7), &VAR_7);
}
