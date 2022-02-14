
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xt_mtchk_param {int matchinfo; int match; struct ip6t_ip6* entryinfo; } ;
struct TYPE_3__ {int match; } ;
struct TYPE_4__ {scalar_t__ match_size; TYPE_1__ kernel; } ;
struct xt_entry_match {TYPE_2__ u; int data; } ;
struct ip6t_ip6 {int invflags; int proto; } ;


 int VAR_0 ;
 int FUNC_0 (struct xt_mtchk_param*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(struct xt_entry_match *VAR_1, struct xt_mtchk_param *VAR_2)
{
 const struct ip6t_ip6 *VAR_3 = VAR_2->entryinfo;

 VAR_2->match = VAR_1->u.kernel.match;
 VAR_2->matchinfo = VAR_1->data;

 return FUNC_0(VAR_2, VAR_1->u.match_size - sizeof(*VAR_1),
         VAR_3->proto, VAR_3->invflags & VAR_0);
}
