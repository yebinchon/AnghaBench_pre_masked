
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t ipbfln1f; int ipflags1; int iptrgcls; int ippathid; int ipmsgid; void* ipbfadr1; } ;
union iucv_param {TYPE_1__ db; } ;
typedef int u8 ;
typedef void* u32 ;
struct iucv_path {int pathid; } ;
struct iucv_message {int flags; int class; int id; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (int ,union iucv_param*) ;
 int FUNC_2 (struct iucv_path*,struct iucv_message*,int,void*,size_t,size_t*) ;
 union iucv_param** VAR_7 ;
 int FUNC_3 (union iucv_param*,int ,int) ;
 size_t FUNC_4 () ;

int FUNC_5(struct iucv_path *VAR_8, struct iucv_message *VAR_9,
      u8 VAR_10, void *VAR_11, size_t VAR_12, size_t *VAR_13)
{
 union iucv_param *VAR_14;
 int VAR_15;

 if (VAR_9->flags & VAR_3)
  return FUNC_2(VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12, VAR_13);
  if (FUNC_0(&VAR_6)) {
  VAR_15 = -VAR_0;
  goto out;
 }
 VAR_14 = VAR_7[FUNC_4()];
 FUNC_3(VAR_14, 0, sizeof(union iucv_param));
 VAR_14->db.ipbfadr1 = (u32)(addr_t) VAR_11;
 VAR_14->db.ipbfln1f = (u32) VAR_12;
 VAR_14->db.ipmsgid = VAR_9->id;
 VAR_14->db.ippathid = VAR_8->pathid;
 VAR_14->db.iptrgcls = VAR_9->class;
 VAR_14->db.ipflags1 = (VAR_10 | VAR_2 |
        VAR_1 | VAR_4);
 VAR_15 = FUNC_1(VAR_5, VAR_14);
 if (!VAR_15 || VAR_15 == 5) {
  VAR_9->flags = VAR_14->db.ipflags1;
  if (VAR_13)
   *VAR_13 = VAR_14->db.ipbfln1f;
 }
out:
 return VAR_15;
}
