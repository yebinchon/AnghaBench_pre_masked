
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct user_datum {scalar_t__ value; } ;
struct type_datum {scalar_t__ value; } ;
struct role_datum {scalar_t__ value; } ;
struct ocontext {scalar_t__* sid; TYPE_4__* context; struct ocontext* next; } ;
struct convert_context_args {TYPE_5__* oldp; int state; TYPE_6__* newp; } ;
struct context {char* str; int len; scalar_t__ type; scalar_t__ role; scalar_t__ user; } ;
struct TYPE_13__ {int table; } ;
struct TYPE_12__ {int table; } ;
struct TYPE_11__ {int table; } ;
struct TYPE_16__ {struct ocontext** ocontexts; scalar_t__ mls_enabled; TYPE_3__ p_types; TYPE_2__ p_roles; TYPE_1__ p_users; } ;
struct TYPE_15__ {scalar_t__ mls_enabled; } ;
struct TYPE_14__ {int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*) ;
 int FUNC_2 (TYPE_5__*,struct context*,char**,int *) ;
 int FUNC_3 (int ,struct context*) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*,struct context*,struct context*) ;
 int FUNC_9 (struct context*,int *) ;
 int FUNC_10 (TYPE_6__*,struct context*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (TYPE_6__*,int *,char*,struct context*,int ) ;
 int FUNC_14 (TYPE_5__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct context *VAR_9, struct context *VAR_10, void *VAR_11)
{
 struct convert_context_args *VAR_12;
 struct ocontext *VAR_13;
 struct role_datum *VAR_14;
 struct type_datum *VAR_15;
 struct user_datum *VAR_16;
 char *VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_12 = VAR_11;

 if (VAR_9->str) {
  VAR_17 = FUNC_6(VAR_9->str, VAR_2);
  if (!VAR_17)
   return -VAR_1;

  VAR_19 = FUNC_13(VAR_12->newp, ((void*)0), VAR_17,
           VAR_10, VAR_5);
  if (VAR_19 == -VAR_0) {







   FUNC_7(VAR_17, VAR_9->str, VAR_9->len);
   FUNC_1(VAR_10);
   VAR_10->str = VAR_17;
   VAR_10->len = VAR_9->len;
   return 0;
  }
  FUNC_5(VAR_17);
  if (VAR_19) {

   FUNC_11("SELinux:   Unable to map context %s, rc = %d.\n",
          VAR_9->str, -VAR_19);
   return VAR_19;
  }
  FUNC_12("SELinux:  Context %s became valid (mapped).\n",
   VAR_9->str);
  return 0;
 }

 FUNC_1(VAR_10);


 VAR_19 = -VAR_0;
 VAR_16 = FUNC_4(VAR_12->newp->p_users.table,
      FUNC_14(VAR_12->oldp,
        VAR_8, VAR_9->user - 1));
 if (!VAR_16)
  goto bad;
 VAR_10->user = VAR_16->value;


 VAR_19 = -VAR_0;
 VAR_14 = FUNC_4(VAR_12->newp->p_roles.table,
         FUNC_14(VAR_12->oldp, VAR_6, VAR_9->role - 1));
 if (!VAR_14)
  goto bad;
 VAR_10->role = VAR_14->value;


 VAR_19 = -VAR_0;
 VAR_15 = FUNC_4(VAR_12->newp->p_types.table,
      FUNC_14(VAR_12->oldp,
        VAR_7, VAR_9->type - 1));
 if (!VAR_15)
  goto bad;
 VAR_10->type = VAR_15->value;


 if (VAR_12->oldp->mls_enabled && VAR_12->newp->mls_enabled) {
  VAR_19 = FUNC_8(VAR_12->oldp, VAR_12->newp, VAR_9, VAR_10);
  if (VAR_19)
   goto bad;
 } else if (!VAR_12->oldp->mls_enabled && VAR_12->newp->mls_enabled) {







  VAR_13 = VAR_12->newp->ocontexts[VAR_3];
  while (VAR_13 && VAR_13->sid[0] != VAR_4)
   VAR_13 = VAR_13->next;
  VAR_19 = -VAR_0;
  if (!VAR_13) {
   FUNC_11("SELinux:  unable to look up"
    " the initial SIDs list\n");
   goto bad;
  }
  VAR_19 = FUNC_9(VAR_10, &VAR_13->context[0].range);
  if (VAR_19)
   goto bad;
 }


 if (!FUNC_10(VAR_12->newp, VAR_10)) {
  VAR_19 = FUNC_3(VAR_12->state, VAR_9);
  if (VAR_19)
   goto bad;
 }

 return 0;
bad:

 VAR_19 = FUNC_2(VAR_12->oldp, VAR_9, &VAR_17, &VAR_18);
 if (VAR_19)
  return VAR_19;
 FUNC_0(VAR_10);
 VAR_10->str = VAR_17;
 VAR_10->len = VAR_18;
 FUNC_12("SELinux:  Context %s became invalid (unmapped).\n",
  VAR_10->str);
 return 0;
}
