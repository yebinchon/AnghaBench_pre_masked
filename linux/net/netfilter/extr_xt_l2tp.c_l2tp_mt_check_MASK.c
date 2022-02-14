
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_l2tp_info* matchinfo; } ;
struct xt_l2tp_info {int flags; scalar_t__ type; int version; int tid; int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_6)
{
 const struct xt_l2tp_info *VAR_7 = VAR_6->matchinfo;


 if (VAR_7->flags & ~(VAR_2 | VAR_1 | VAR_5 |
       VAR_3)) {
  FUNC_0("unknown flags: %x\n", VAR_7->flags);
  return -VAR_0;
 }


 if ((!(VAR_7->flags & VAR_2)) &&
     (!(VAR_7->flags & VAR_1)) &&
     ((!(VAR_7->flags & VAR_3)) ||
      (VAR_7->type != VAR_4))) {
  FUNC_0("invalid flags combination: %x\n",
        VAR_7->flags);
  return -VAR_0;
 }




 if (VAR_7->flags & VAR_5) {
  if ((VAR_7->version < 2) || (VAR_7->version > 3)) {
   FUNC_0("wrong L2TP version: %u\n",
         VAR_7->version);
   return -VAR_0;
  }

  if (VAR_7->version == 2) {
   if ((VAR_7->flags & VAR_2) &&
       (VAR_7->tid > 0xffff)) {
    FUNC_0("v2 tid > 0xffff: %u\n",
          VAR_7->tid);
    return -VAR_0;
   }
   if ((VAR_7->flags & VAR_1) &&
       (VAR_7->sid > 0xffff)) {
    FUNC_0("v2 sid > 0xffff: %u\n",
          VAR_7->sid);
    return -VAR_0;
   }
  }
 }

 return 0;
}
