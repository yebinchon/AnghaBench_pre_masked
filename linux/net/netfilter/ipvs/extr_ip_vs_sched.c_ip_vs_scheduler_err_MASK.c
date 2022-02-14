
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; int in6; } ;
struct ip_vs_service {scalar_t__ af; int port; TYPE_1__ addr; int protocol; int fwmark; int scheduler; } ;
struct ip_vs_scheduler {char* name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ,int *,char const*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ip_vs_scheduler* FUNC_3 (int ) ;

void FUNC_4(struct ip_vs_service *VAR_1, const char *VAR_2)
{
 struct ip_vs_scheduler *VAR_3 = FUNC_3(VAR_1->scheduler);
 char *VAR_4 = VAR_3 ? VAR_3->name : "none";

 if (VAR_1->fwmark) {
  FUNC_0("%s: FWM %u 0x%08X - %s\n",
        VAR_4, VAR_1->fwmark, &VAR_1->fwmark, VAR_2);






 } else {
  FUNC_0("%s: %s %pI4:%d - %s\n",
        VAR_4, FUNC_1(VAR_1->protocol),
        &VAR_1->addr.ip, FUNC_2(VAR_1->port), VAR_2);
 }
}
