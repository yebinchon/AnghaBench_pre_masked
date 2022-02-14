
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ip_vs_protocol {int name; int (* unregister_app ) (struct netns_ipvs*,struct ip_vs_app*) ;} ;
struct ip_vs_app {int rcu_head; int a_list; int port; int name; int protocol; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct ip_vs_protocol* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct netns_ipvs*,struct ip_vs_app*) ;

__attribute__((used)) static void
FUNC_6(struct netns_ipvs *VAR_1, struct ip_vs_app *VAR_2)
{
 struct ip_vs_protocol *VAR_3;

 if (!(VAR_3 = FUNC_2(VAR_2->protocol)))
  return;

 if (VAR_3->unregister_app)
  VAR_3->unregister_app(VAR_1, VAR_2);

 FUNC_0(9, "%s App %s:%u unregistered\n",
    VAR_3->name, VAR_2->name, FUNC_4(VAR_2->port));

 FUNC_3(&VAR_2->a_list);

 FUNC_1(&VAR_2->rcu_head, VAR_0);
}
