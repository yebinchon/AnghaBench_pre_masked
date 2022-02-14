
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_addr {scalar_t__ type; scalar_t__ src_name; scalar_t__ dst_name; scalar_t__ sa; scalar_t__ da; } ;



__attribute__((used)) static bool FUNC_0(struct j1939_addr *VAR_0,
    struct j1939_addr *VAR_1, bool VAR_2)
{
 if (VAR_0->type != VAR_1->type)
  return 0;

 if (VAR_2) {
  if (VAR_0->src_name) {
   if (VAR_0->src_name != VAR_1->dst_name)
    return 0;
  } else if (VAR_0->sa != VAR_1->da) {
   return 0;
  }

  if (VAR_0->dst_name) {
   if (VAR_0->dst_name != VAR_1->src_name)
    return 0;
  } else if (VAR_0->da != VAR_1->sa) {
   return 0;
  }
 } else {
  if (VAR_0->src_name) {
   if (VAR_0->src_name != VAR_1->src_name)
    return 0;
  } else if (VAR_0->sa != VAR_1->sa) {
   return 0;
  }

  if (VAR_0->dst_name) {
   if (VAR_0->dst_name != VAR_1->dst_name)
    return 0;
  } else if (VAR_0->da != VAR_1->da) {
   return 0;
  }
 }

 return 1;
}
