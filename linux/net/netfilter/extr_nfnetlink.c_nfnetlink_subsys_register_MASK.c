
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct nfnetlink_subsystem {size_t cb_count; size_t subsys_id; TYPE_1__* cb; } ;
struct TYPE_4__ {scalar_t__ subsys; } ;
struct TYPE_3__ {scalar_t__ attr_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__,struct nfnetlink_subsystem const*) ;
 TYPE_2__* VAR_3 ;

int FUNC_4(const struct nfnetlink_subsystem *VAR_4)
{
 u8 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->cb_count; VAR_5++)
  if (FUNC_0(VAR_4->cb[VAR_5].attr_count > VAR_2))
   return -VAR_1;

 FUNC_1(VAR_4->subsys_id);
 if (VAR_3[VAR_4->subsys_id].subsys) {
  FUNC_2(VAR_4->subsys_id);
  return -VAR_0;
 }
 FUNC_3(VAR_3[VAR_4->subsys_id].subsys, VAR_4);
 FUNC_2(VAR_4->subsys_id);

 return 0;
}
