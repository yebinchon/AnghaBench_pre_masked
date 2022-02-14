
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct policydb {int dummy; } ;
struct TYPE_9__ {int data; TYPE_3__* xperms; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct TYPE_6__ {int source_type; int target_type; int target_class; int specified; } ;
struct avtab_node {TYPE_5__ datum; TYPE_1__ key; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_7__ {int * p; } ;
struct TYPE_8__ {TYPE_2__ perms; int driver; int specified; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int,void*) ;

int FUNC_4(struct policydb *VAR_1, struct avtab_node *VAR_2, void *VAR_3)
{
 __le16 VAR_4[4];
 __le32 VAR_5[FUNC_0(VAR_2->datum.u.xperms->perms.p)];
 int VAR_6;
 unsigned int VAR_7;

 VAR_4[0] = FUNC_1(VAR_2->key.source_type);
 VAR_4[1] = FUNC_1(VAR_2->key.target_type);
 VAR_4[2] = FUNC_1(VAR_2->key.target_class);
 VAR_4[3] = FUNC_1(VAR_2->key.specified);
 VAR_6 = FUNC_3(VAR_4, sizeof(u16), 4, VAR_3);
 if (VAR_6)
  return VAR_6;

 if (VAR_2->key.specified & VAR_0) {
  VAR_6 = FUNC_3(&VAR_2->datum.u.xperms->specified, sizeof(u8), 1, VAR_3);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_3(&VAR_2->datum.u.xperms->driver, sizeof(u8), 1, VAR_3);
  if (VAR_6)
   return VAR_6;
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->datum.u.xperms->perms.p); VAR_7++)
   VAR_5[VAR_7] = FUNC_2(VAR_2->datum.u.xperms->perms.p[VAR_7]);
  VAR_6 = FUNC_3(VAR_5, sizeof(u32),
    FUNC_0(VAR_2->datum.u.xperms->perms.p), VAR_3);
 } else {
  VAR_5[0] = FUNC_2(VAR_2->datum.u.data);
  VAR_6 = FUNC_3(VAR_5, sizeof(u32), 1, VAR_3);
 }
 if (VAR_6)
  return VAR_6;
 return 0;
}
