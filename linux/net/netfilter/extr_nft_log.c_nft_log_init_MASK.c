
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_5__ {scalar_t__ level; int logflags; } ;
struct TYPE_4__ {void* qthreshold; void* copy_len; int flags; void* group; } ;
struct TYPE_6__ {TYPE_2__ log; TYPE_1__ ulog; } ;
struct nf_loginfo {int type; TYPE_3__ u; } ;
struct nft_log {char* prefix; struct nf_loginfo loginfo; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int) ;
 struct nft_log* FUNC_3 (struct nft_expr const*) ;
 char* VAR_13 ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const) ;
 scalar_t__ FUNC_6 (struct nlattr const*) ;
 int FUNC_7 (char*,struct nlattr const*,scalar_t__) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(const struct nft_ctx *VAR_14,
   const struct nft_expr *VAR_15,
   const struct nlattr * const VAR_16[])
{
 struct nft_log *VAR_17 = FUNC_3(VAR_15);
 struct nf_loginfo *VAR_18 = &VAR_17->loginfo;
 const struct nlattr *VAR_19;
 int VAR_20;

 VAR_18->type = 129;
 if (VAR_16[VAR_5] != ((void*)0) &&
     VAR_16[VAR_4] != ((void*)0))
  return -VAR_0;
 if (VAR_16[VAR_4] != ((void*)0)) {
  VAR_18->type = 128;
  if (VAR_16[VAR_3] != ((void*)0))
   return -VAR_0;
 }

 VAR_19 = VAR_16[VAR_6];
 if (VAR_19 != ((void*)0)) {
  VAR_17->prefix = FUNC_1(FUNC_6(VAR_19) + 1, VAR_2);
  if (VAR_17->prefix == ((void*)0))
   return -VAR_1;
  FUNC_7(VAR_17->prefix, VAR_19, FUNC_6(VAR_19) + 1);
 } else {
  VAR_17->prefix = (char *)VAR_13;
 }

 switch (VAR_18->type) {
 case 129:
  if (VAR_16[VAR_5] != ((void*)0)) {
   VAR_18->u.log.level =
    FUNC_8(FUNC_5(VAR_16[VAR_5]));
  } else {
   VAR_18->u.log.level = VAR_10;
  }
  if (VAR_18->u.log.level > VAR_9) {
   VAR_20 = -VAR_0;
   goto err1;
  }

  if (VAR_16[VAR_3] != ((void*)0)) {
   VAR_18->u.log.logflags =
    FUNC_8(FUNC_5(VAR_16[VAR_3]));
   if (VAR_18->u.log.logflags & ~VAR_12) {
    VAR_20 = -VAR_0;
    goto err1;
   }
  }
  break;
 case 128:
  VAR_18->u.ulog.group = FUNC_9(FUNC_4(VAR_16[VAR_4]));
  if (VAR_16[VAR_8] != ((void*)0)) {
   VAR_18->u.ulog.flags |= VAR_11;
   VAR_18->u.ulog.copy_len =
    FUNC_8(FUNC_5(VAR_16[VAR_8]));
  }
  if (VAR_16[VAR_7] != ((void*)0)) {
   VAR_18->u.ulog.qthreshold =
    FUNC_9(FUNC_4(VAR_16[VAR_7]));
  }
  break;
 }

 if (VAR_18->u.log.level == VAR_9)
  return 0;

 VAR_20 = FUNC_2(VAR_14->family, VAR_18->type);
 if (VAR_20 < 0)
  goto err1;

 return 0;

err1:
 if (VAR_17->prefix != VAR_13)
  FUNC_0(VAR_17->prefix);
 return VAR_20;
}
