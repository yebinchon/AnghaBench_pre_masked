
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct TYPE_4__ {int (* cmp ) (struct key const*,TYPE_2__*) ;} ;
struct TYPE_3__ {scalar_t__ type; } ;
struct keyring_search_context {int flags; int skipped_ret; scalar_t__ now; int possessed; void* result; int cred; TYPE_2__ match_data; TYPE_1__ index_key; } ;
struct key {scalar_t__ type; int expiry; int serial; int state; int flags; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 void* FUNC_0 (short) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (void*,int ,int ) ;
 struct key* FUNC_4 (void const*) ;
 int FUNC_5 (char*,...) ;
 void* FUNC_6 (struct key const*,int ) ;
 int FUNC_7 (struct key const*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(const void *VAR_9, void *VAR_10)
{
 struct keyring_search_context *VAR_11 = VAR_10;
 const struct key *VAR_12 = FUNC_4(VAR_9);
 unsigned long VAR_13 = FUNC_1(VAR_12->flags);
 short VAR_14 = FUNC_1(VAR_12->state);

 FUNC_2("{%d}", VAR_12->serial);


 if (VAR_12->type != VAR_11->index_key.type) {
  FUNC_5(" = 0 [!type]");
  return 0;
 }


 if (VAR_11->flags & VAR_3) {
  time64_t VAR_15 = FUNC_1(VAR_12->expiry);

  if (VAR_13 & ((1 << VAR_6) |
         (1 << VAR_7))) {
   VAR_11->result = FUNC_0(-VAR_2);
   FUNC_5(" = %d [invrev]", VAR_11->skipped_ret);
   goto skipped;
  }

  if (VAR_15 && VAR_11->now >= VAR_15) {
   if (!(VAR_11->flags & VAR_5))
    VAR_11->result = FUNC_0(-VAR_1);
   FUNC_5(" = %d [expire]", VAR_11->skipped_ret);
   goto skipped;
  }
 }


 if (!VAR_11->match_data.cmp(VAR_12, &VAR_11->match_data)) {
  FUNC_5(" = 0 [!match]");
  return 0;
 }


 if (!(VAR_11->flags & VAR_4) &&
     FUNC_3(FUNC_6(VAR_12, VAR_11->possessed),
    VAR_11->cred, VAR_8) < 0) {
  VAR_11->result = FUNC_0(-VAR_0);
  FUNC_5(" = %d [!perm]", VAR_11->skipped_ret);
  goto skipped;
 }

 if (VAR_11->flags & VAR_3) {

  if (VAR_14 < 0) {
   VAR_11->result = FUNC_0(VAR_14);
   FUNC_5(" = %d [neg]", VAR_11->skipped_ret);
   goto skipped;
  }
 }


 VAR_11->result = FUNC_6(VAR_12, VAR_11->possessed);
 FUNC_5(" = 1 [found]");
 return 1;

skipped:
 return VAR_11->skipped_ret;
}
