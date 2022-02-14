
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct rtable {int rt_flags; TYPE_1__ dst; } ;
struct dst_entry {scalar_t__ obsolete; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtable*) ;

__attribute__((used)) static struct dst_entry *FUNC_1(struct dst_entry *VAR_1)
{
 struct rtable *VAR_2 = (struct rtable *)VAR_1;
 struct dst_entry *VAR_3 = VAR_1;

 if (VAR_2) {
  if (VAR_1->obsolete > 0) {
   FUNC_0(VAR_2);
   VAR_3 = ((void*)0);
  } else if ((VAR_2->rt_flags & VAR_0) ||
      VAR_2->dst.expires) {
   FUNC_0(VAR_2);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
