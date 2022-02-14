
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct policydb_compat_info {int ocon_num; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_10__ {int port; int dev_name; } ;
struct TYPE_9__ {int low_pkey; int high_pkey; int subnet_prefix; } ;
struct TYPE_8__ {int* addr; int* mask; } ;
struct TYPE_12__ {int addr; int mask; } ;
struct TYPE_11__ {void* high_port; void* low_port; void* protocol; } ;
struct TYPE_14__ {TYPE_3__ ibendport; TYPE_2__ ibpkey; TYPE_1__ node6; int name; TYPE_5__ node; TYPE_4__ port; } ;
struct TYPE_13__ {void* behavior; } ;
struct ocontext {int * context; TYPE_7__ u; TYPE_6__ v; void** sid; struct ocontext* next; } ;
typedef int __le32 ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct policydb*,void*) ;
 struct ocontext* FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int*,void*,int) ;
 int FUNC_5 (int *,int ,void*,int) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_7, struct policydb_compat_info *VAR_8,
    void *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 __be64 VAR_15[1];
 __le32 VAR_16[3];
 struct ocontext *VAR_17, *VAR_18;
 u32 VAR_19[8];

 for (VAR_10 = 0; VAR_10 < VAR_8->ocon_num; VAR_10++) {
  VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32));
  if (VAR_12)
   goto out;
  VAR_13 = FUNC_3(VAR_16[0]);

  VAR_17 = ((void*)0);
  for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
   VAR_12 = -VAR_1;
   VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_2);
   if (!VAR_18)
    goto out;
   if (VAR_17)
    VAR_17->next = VAR_18;
   else
    VAR_7->ocontexts[VAR_10] = VAR_18;
   VAR_17 = VAR_18;

   switch (VAR_10) {
   case 132:
    VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32));
    if (VAR_12)
     goto out;

    VAR_18->sid[0] = FUNC_3(VAR_16[0]);
    VAR_12 = FUNC_1(&VAR_18->context[0], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    break;
   case 136:
   case 131:
    VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32));
    if (VAR_12)
     goto out;
    VAR_14 = FUNC_3(VAR_16[0]);

    VAR_12 = FUNC_5(&VAR_18->u.name, VAR_2, VAR_9, VAR_14);
    if (VAR_12)
     goto out;

    VAR_12 = FUNC_1(&VAR_18->context[0], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    VAR_12 = FUNC_1(&VAR_18->context[1], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    break;
   case 128:
    VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32)*3);
    if (VAR_12)
     goto out;
    VAR_18->u.port.protocol = FUNC_3(VAR_16[0]);
    VAR_18->u.port.low_port = FUNC_3(VAR_16[1]);
    VAR_18->u.port.high_port = FUNC_3(VAR_16[2]);
    VAR_12 = FUNC_1(&VAR_18->context[0], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    break;
   case 130:
    VAR_12 = FUNC_4(VAR_19, VAR_9, sizeof(u32) * 2);
    if (VAR_12)
     goto out;
    VAR_18->u.node.addr = VAR_19[0];
    VAR_18->u.node.mask = VAR_19[1];
    VAR_12 = FUNC_1(&VAR_18->context[0], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    break;
   case 135:
    VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32)*2);
    if (VAR_12)
     goto out;

    VAR_12 = -VAR_0;
    VAR_18->v.behavior = FUNC_3(VAR_16[0]);

    if (VAR_18->v.behavior == VAR_4)
     goto out;
    if (VAR_18->v.behavior > VAR_3)
     goto out;

    VAR_14 = FUNC_3(VAR_16[1]);
    VAR_12 = FUNC_5(&VAR_18->u.name, VAR_2, VAR_9, VAR_14);
    if (VAR_12)
     goto out;

    VAR_12 = FUNC_1(&VAR_18->context[0], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    break;
   case 129: {
    int VAR_20;

    VAR_12 = FUNC_4(VAR_19, VAR_9, sizeof(u32) * 8);
    if (VAR_12)
     goto out;
    for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
     VAR_18->u.node6.addr[VAR_20] = VAR_19[VAR_20];
    for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
     VAR_18->u.node6.mask[VAR_20] = VAR_19[VAR_20+4];
    VAR_12 = FUNC_1(&VAR_18->context[0], VAR_7, VAR_9);
    if (VAR_12)
     goto out;
    break;
   }
   case 133: {
    u32 VAR_21, VAR_22;

    VAR_12 = FUNC_4(VAR_15, VAR_9, sizeof(u64));
    if (VAR_12)
     goto out;


    VAR_18->u.ibpkey.subnet_prefix = FUNC_0(VAR_15[0]);

    VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32) * 2);
    if (VAR_12)
     goto out;

    VAR_21 = FUNC_3(VAR_16[0]);
    VAR_22 = FUNC_3(VAR_16[1]);

    if (VAR_21 > VAR_5 || VAR_22 > VAR_5) {
     VAR_12 = -VAR_0;
     goto out;
    }

    VAR_18->u.ibpkey.low_pkey = VAR_21;
    VAR_18->u.ibpkey.high_pkey = VAR_22;

    VAR_12 = FUNC_1(&VAR_18->context[0],
              VAR_7,
              VAR_9);
    if (VAR_12)
     goto out;
    break;
   }
   case 134: {
    u32 VAR_23;

    VAR_12 = FUNC_4(VAR_16, VAR_9, sizeof(u32) * 2);
    if (VAR_12)
     goto out;
    VAR_14 = FUNC_3(VAR_16[0]);

    VAR_12 = FUNC_5(&VAR_18->u.ibendport.dev_name, VAR_2, VAR_9, VAR_14);
    if (VAR_12)
     goto out;

    VAR_23 = FUNC_3(VAR_16[1]);
    if (VAR_23 > VAR_6 || VAR_23 == 0) {
     VAR_12 = -VAR_0;
     goto out;
    }

    VAR_18->u.ibendport.port = VAR_23;

    VAR_12 = FUNC_1(&VAR_18->context[0],
              VAR_7,
              VAR_9);
    if (VAR_12)
     goto out;
    break;
   }
   }
  }
 }
 VAR_12 = 0;
out:
 return VAR_12;
}
