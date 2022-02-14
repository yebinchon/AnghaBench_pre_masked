
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ip_vs_protocol {int (* register_app ) (struct netns_ipvs*,struct ip_vs_app*) ;int name; int unregister_app; } ;
struct ip_vs_app {int port; int name; int incs_list; int a_list; int timeout_table; int timeouts_size; scalar_t__ timeouts; int usecnt; struct ip_vs_app* app; int p_list; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ip_vs_app*) ;
 int FUNC_5 (scalar_t__,int ) ;
 struct ip_vs_protocol* FUNC_6 (int ) ;
 struct ip_vs_app* FUNC_7 (struct ip_vs_app*,int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct netns_ipvs*,struct ip_vs_app*) ;

__attribute__((used)) static int
FUNC_11(struct netns_ipvs *VAR_4, struct ip_vs_app *VAR_5, __u16 VAR_6,
    __u16 VAR_7)
{
 struct ip_vs_protocol *VAR_8;
 struct ip_vs_app *VAR_9;
 int VAR_10;

 if (!(VAR_8 = FUNC_6(VAR_6)))
  return -VAR_2;

 if (!VAR_8->unregister_app)
  return -VAR_1;

 VAR_9 = FUNC_7(VAR_5, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_0;
 FUNC_0(&VAR_9->p_list);
 FUNC_0(&VAR_9->incs_list);
 VAR_9->app = VAR_5;
 VAR_9->port = FUNC_3(VAR_7);
 FUNC_2(&VAR_9->usecnt, 0);

 if (VAR_5->timeouts) {
  VAR_9->timeout_table =
   FUNC_5(VAR_5->timeouts,
         VAR_5->timeouts_size);
  if (!VAR_9->timeout_table) {
   VAR_10 = -VAR_0;
   goto out;
  }
 }

 VAR_10 = VAR_8->register_app(VAR_4, VAR_9);
 if (VAR_10)
  goto out;

 FUNC_8(&VAR_9->a_list, &VAR_5->incs_list);
 FUNC_1(9, "%s App %s:%u registered\n",
    VAR_8->name, VAR_9->name, FUNC_9(VAR_9->port));

 return 0;

  out:
 FUNC_4(VAR_9);
 return VAR_10;
}
