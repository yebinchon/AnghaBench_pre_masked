
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_net; int xpt_lock; struct ip_map* xpt_auth_cache; int xpt_flags; } ;
struct sunrpc_net {int ip_map_cache; } ;
struct ip_map {int h; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct sunrpc_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_5(struct svc_xprt *VAR_2, struct ip_map *VAR_3)
{
 if (FUNC_4(VAR_0, &VAR_2->xpt_flags)) {
  FUNC_2(&VAR_2->xpt_lock);
  if (VAR_2->xpt_auth_cache == ((void*)0)) {

   VAR_2->xpt_auth_cache = VAR_3;
   VAR_3 = ((void*)0);
  }
  FUNC_3(&VAR_2->xpt_lock);
 }
 if (VAR_3) {
  struct sunrpc_net *VAR_4;

  VAR_4 = FUNC_1(VAR_2->xpt_net, VAR_1);
  FUNC_0(&VAR_3->h, VAR_4->ip_map_cache);
 }
}
