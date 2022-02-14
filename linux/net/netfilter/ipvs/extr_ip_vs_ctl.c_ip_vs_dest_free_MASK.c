
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_service {int dummy; } ;
struct TYPE_2__ {int cpustats; } ;
struct ip_vs_dest {TYPE_1__ stats; int svc; } ;


 int FUNC_0 (struct ip_vs_dest*) ;
 int FUNC_1 (struct ip_vs_service*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ip_vs_dest*) ;
 struct ip_vs_service* FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct ip_vs_dest *VAR_0)
{
 struct ip_vs_service *VAR_1 = FUNC_4(VAR_0->svc, 1);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_0->stats.cpustats);
 FUNC_3(VAR_0);
}
