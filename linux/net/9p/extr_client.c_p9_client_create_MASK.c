
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct p9_client {int msize; TYPE_1__* trans_mod; int * fcall_cache; int proto_version; int reqs; int fids; int lock; int name; int * trans; } ;
struct TYPE_5__ {char* nodename; } ;
struct TYPE_4__ {int (* create ) (struct p9_client*,char const*,char*) ;int maxsize; int (* close ) (struct p9_client*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct p9_client* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct p9_client*) ;
 struct p9_client* FUNC_3 (int,int ) ;
 int * FUNC_4 (char*,int,int ,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (struct p9_client*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*,struct p9_client*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (struct p9_client*,char const*,char*) ;
 int FUNC_12 (struct p9_client*) ;
 TYPE_3__* FUNC_13 () ;
 TYPE_1__* FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;

struct p9_client *FUNC_16(const char *VAR_7, char *VAR_8)
{
 int VAR_9;
 struct p9_client *VAR_10;
 char *VAR_11;

 VAR_9 = 0;
 VAR_10 = FUNC_3(sizeof(struct p9_client), VAR_3);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->trans_mod = ((void*)0);
 VAR_10->trans = ((void*)0);
 VAR_10->fcall_cache = ((void*)0);

 VAR_11 = FUNC_13()->nodename;
 FUNC_5(VAR_10->name, VAR_11, FUNC_10(VAR_11) + 1);

 FUNC_9(&VAR_10->lock);
 FUNC_1(&VAR_10->fids);
 FUNC_1(&VAR_10->reqs);

 VAR_9 = FUNC_8(VAR_8, VAR_10);
 if (VAR_9 < 0)
  goto free_client;

 if (!VAR_10->trans_mod)
  VAR_10->trans_mod = FUNC_14();

 if (VAR_10->trans_mod == ((void*)0)) {
  VAR_9 = -VAR_2;
  FUNC_7(VAR_4,
    "No transport defined or default transport\n");
  goto free_client;
 }

 FUNC_7(VAR_5, "clnt %p trans %p msize %d protocol %d\n",
   VAR_10, VAR_10->trans_mod, VAR_10->msize, VAR_10->proto_version);

 VAR_9 = VAR_10->trans_mod->create(VAR_10, VAR_7, VAR_8);
 if (VAR_9)
  goto put_trans;

 if (VAR_10->msize > VAR_10->trans_mod->maxsize)
  VAR_10->msize = VAR_10->trans_mod->maxsize;

 if (VAR_10->msize < 4096) {
  FUNC_7(VAR_4,
    "Please specify a msize of at least 4k\n");
  VAR_9 = -VAR_0;
  goto close_trans;
 }

 VAR_9 = FUNC_6(VAR_10);
 if (VAR_9)
  goto close_trans;




 VAR_10->fcall_cache =
  FUNC_4("9p-fcall-cache", VAR_10->msize,
        0, 0, VAR_6 + 4,
        VAR_10->msize - (VAR_6 + 4),
        ((void*)0));

 return VAR_10;

close_trans:
 VAR_10->trans_mod->close(VAR_10);
put_trans:
 FUNC_15(VAR_10->trans_mod);
free_client:
 FUNC_2(VAR_10);
 return FUNC_0(VAR_9);
}
