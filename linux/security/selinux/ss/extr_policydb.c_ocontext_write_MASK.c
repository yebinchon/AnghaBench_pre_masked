
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
struct policydb_compat_info {unsigned int ocon_num; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_9__ {size_t port; int * dev_name; } ;
struct TYPE_8__ {size_t low_pkey; size_t high_pkey; int subnet_prefix; } ;
struct TYPE_14__ {int * mask; int * addr; } ;
struct TYPE_11__ {int mask; int addr; } ;
struct TYPE_10__ {size_t protocol; size_t low_port; size_t high_port; } ;
struct TYPE_13__ {TYPE_2__ ibendport; TYPE_1__ ibpkey; TYPE_7__ node6; int * name; TYPE_4__ node; TYPE_3__ port; } ;
struct TYPE_12__ {size_t behavior; } ;
struct ocontext {size_t* sid; int * context; TYPE_6__ u; TYPE_5__ v; struct ocontext* next; } ;
typedef int __le32 ;
typedef int __be64 ;
 unsigned int FUNC_0 (struct policydb*,int *,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 unsigned int FUNC_3 (int *,int,size_t,void*) ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct policydb *VAR_0, struct policydb_compat_info *VAR_1,
     void *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 size_t VAR_6, VAR_7;
 __be64 VAR_8[1];
 __le32 VAR_9[3];
 u32 VAR_10[8];
 struct ocontext *VAR_11;
 for (VAR_3 = 0; VAR_3 < VAR_1->ocon_num; VAR_3++) {
  VAR_6 = 0;
  for (VAR_11 = VAR_0->ocontexts[VAR_3]; VAR_11; VAR_11 = VAR_11->next)
   VAR_6++;
  VAR_9[0] = FUNC_2(VAR_6);
  VAR_5 = FUNC_3(VAR_9, sizeof(u32), 1, VAR_2);
  if (VAR_5)
   return VAR_5;
  for (VAR_11 = VAR_0->ocontexts[VAR_3]; VAR_11; VAR_11 = VAR_11->next) {
   switch (VAR_3) {
   case 132:
    VAR_9[0] = FUNC_2(VAR_11->sid[0]);
    VAR_5 = FUNC_3(VAR_9, sizeof(u32), 1, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 136:
   case 131:
    VAR_7 = FUNC_4(VAR_11->u.name);
    VAR_9[0] = FUNC_2(VAR_7);
    VAR_5 = FUNC_3(VAR_9, sizeof(u32), 1, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_3(VAR_11->u.name, 1, VAR_7, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[1], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 128:
    VAR_9[0] = FUNC_2(VAR_11->u.port.protocol);
    VAR_9[1] = FUNC_2(VAR_11->u.port.low_port);
    VAR_9[2] = FUNC_2(VAR_11->u.port.high_port);
    VAR_5 = FUNC_3(VAR_9, sizeof(u32), 3, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 130:
    VAR_10[0] = VAR_11->u.node.addr;
    VAR_10[1] = VAR_11->u.node.mask;
    VAR_5 = FUNC_3(VAR_10, sizeof(u32), 2, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 135:
    VAR_9[0] = FUNC_2(VAR_11->v.behavior);
    VAR_7 = FUNC_4(VAR_11->u.name);
    VAR_9[1] = FUNC_2(VAR_7);
    VAR_5 = FUNC_3(VAR_9, sizeof(u32), 2, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_3(VAR_11->u.name, 1, VAR_7, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 129:
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
     VAR_10[VAR_4] = VAR_11->u.node6.addr[VAR_4];
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
     VAR_10[VAR_4 + 4] = VAR_11->u.node6.mask[VAR_4];
    VAR_5 = FUNC_3(VAR_10, sizeof(u32), 8, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 133:

    VAR_8[0] = FUNC_1(VAR_11->u.ibpkey.subnet_prefix);

    VAR_5 = FUNC_3(VAR_8, sizeof(u64), 1, VAR_2);
    if (VAR_5)
     return VAR_5;

    VAR_9[0] = FUNC_2(VAR_11->u.ibpkey.low_pkey);
    VAR_9[1] = FUNC_2(VAR_11->u.ibpkey.high_pkey);

    VAR_5 = FUNC_3(VAR_9, sizeof(u32), 2, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 134:
    VAR_7 = FUNC_4(VAR_11->u.ibendport.dev_name);
    VAR_9[0] = FUNC_2(VAR_7);
    VAR_9[1] = FUNC_2(VAR_11->u.ibendport.port);
    VAR_5 = FUNC_3(VAR_9, sizeof(u32), 2, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_3(VAR_11->u.ibendport.dev_name, 1, VAR_7, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_11->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   }
  }
 }
 return 0;
}
