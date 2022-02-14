
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flowidn {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ flowidn_mark; scalar_t__ flowidn_oif; } ;
struct dst_entry {int dummy; } ;
struct TYPE_3__ {scalar_t__ daddr; scalar_t__ saddr; scalar_t__ flowidn_mark; scalar_t__ flowidn_oif; } ;
struct dn_route {struct dst_entry dst; TYPE_1__ fld; int dn_next; } ;
struct TYPE_4__ {int chain; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dn_route*) ;
 int FUNC_2 (struct dst_entry**,struct flowidn const*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct dst_entry*,int ) ;
 int VAR_2 ;
 struct dn_route* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct dst_entry **VAR_3, const struct flowidn *VAR_4, int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->saddr, VAR_4->daddr);
 struct dn_route *VAR_7 = ((void*)0);

 if (!(VAR_5 & VAR_0)) {
  FUNC_5();
  for (VAR_7 = FUNC_4(VAR_1[VAR_6].chain); VAR_7;
   VAR_7 = FUNC_4(VAR_7->dn_next)) {
   if ((VAR_4->daddr == VAR_7->fld.daddr) &&
       (VAR_4->saddr == VAR_7->fld.saddr) &&
       (VAR_4->flowidn_mark == VAR_7->fld.flowidn_mark) &&
       FUNC_1(VAR_7) &&
       (VAR_7->fld.flowidn_oif == VAR_4->flowidn_oif)) {
    FUNC_3(&VAR_7->dst, VAR_2);
    FUNC_6();
    *VAR_3 = &VAR_7->dst;
    return 0;
   }
  }
  FUNC_6();
 }

 return FUNC_2(VAR_3, VAR_4, VAR_5);
}
