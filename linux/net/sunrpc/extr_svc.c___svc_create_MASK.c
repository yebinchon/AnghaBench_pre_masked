
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv_ops {int dummy; } ;
struct svc_serv {int sv_nrthreads; unsigned int sv_max_payload; unsigned int sv_xdrsize; int sv_nrpools; int sv_name; struct svc_pool* sv_pools; int sv_lock; int sv_temptimer; int sv_permsocks; int sv_tempsocks; struct svc_serv_ops const* sv_ops; int sv_max_mesg; int sv_stats; struct svc_program* sv_program; } ;
struct svc_program {int pg_lovers; int pg_nvers; unsigned int pg_hivers; struct svc_program* pg_next; TYPE_1__** pg_vers; int pg_stats; int pg_name; } ;
struct svc_pool {unsigned int sp_id; int sp_lock; int sp_all_threads; int sp_sockets; } ;
struct TYPE_2__ {unsigned int vs_xdrsize; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct svc_serv*) ;
 int FUNC_2 (char*,unsigned int,int ) ;
 struct svc_pool* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct svc_serv*) ;
 struct svc_serv* FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static struct svc_serv *
FUNC_9(struct svc_program *VAR_3, unsigned int VAR_4, int VAR_5,
      const struct svc_serv_ops *VAR_6)
{
 struct svc_serv *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 if (!(VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0)))
  return ((void*)0);
 VAR_7->sv_name = VAR_3->pg_name;
 VAR_7->sv_program = VAR_3;
 VAR_7->sv_nrthreads = 1;
 VAR_7->sv_stats = VAR_3->pg_stats;
 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;
 VAR_7->sv_max_payload = VAR_4? VAR_4 : 4096;
 VAR_7->sv_max_mesg = FUNC_6(VAR_7->sv_max_payload + VAR_1, VAR_1);
 VAR_7->sv_ops = VAR_6;
 VAR_9 = 0;
 while (VAR_3) {
  VAR_3->pg_lovers = VAR_3->pg_nvers-1;
  for (VAR_8=0; VAR_8<VAR_3->pg_nvers ; VAR_8++)
   if (VAR_3->pg_vers[VAR_8]) {
    VAR_3->pg_hivers = VAR_8;
    if (VAR_3->pg_lovers > VAR_8)
     VAR_3->pg_lovers = VAR_8;
    if (VAR_3->pg_vers[VAR_8]->vs_xdrsize > VAR_9)
     VAR_9 = VAR_3->pg_vers[VAR_8]->vs_xdrsize;
   }
  VAR_3 = VAR_3->pg_next;
 }
 VAR_7->sv_xdrsize = VAR_9;
 FUNC_0(&VAR_7->sv_tempsocks);
 FUNC_0(&VAR_7->sv_permsocks);
 FUNC_8(&VAR_7->sv_temptimer, ((void*)0), 0);
 FUNC_7(&VAR_7->sv_lock);

 FUNC_1(VAR_7);

 VAR_7->sv_nrpools = VAR_5;
 VAR_7->sv_pools =
  FUNC_3(VAR_7->sv_nrpools, sizeof(struct svc_pool),
   VAR_0);
 if (!VAR_7->sv_pools) {
  FUNC_4(VAR_7);
  return ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->sv_nrpools; VAR_10++) {
  struct svc_pool *VAR_11 = &VAR_7->sv_pools[VAR_10];

  FUNC_2("svc: initialising pool %u for %s\n",
    VAR_10, VAR_7->sv_name);

  VAR_11->sp_id = VAR_10;
  FUNC_0(&VAR_11->sp_sockets);
  FUNC_0(&VAR_11->sp_all_threads);
  FUNC_7(&VAR_11->sp_lock);
 }

 return VAR_7;
}
