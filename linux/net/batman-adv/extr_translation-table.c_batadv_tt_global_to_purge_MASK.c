
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int added_at; } ;
struct batadv_tt_global_entry {TYPE_1__ common; int roam_at; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static bool FUNC_1(struct batadv_tt_global_entry *VAR_4,
          char **VAR_5)
{
 bool VAR_6 = 0;
 unsigned long VAR_7 = VAR_1;
 unsigned long VAR_8 = VAR_3;

 if ((VAR_4->common.flags & VAR_0) &&
     FUNC_0(VAR_4->roam_at, VAR_7)) {
  VAR_6 = 1;
  *VAR_5 = "Roaming timeout\n";
 }

 if ((VAR_4->common.flags & VAR_2) &&
     FUNC_0(VAR_4->common.added_at, VAR_8)) {
  VAR_6 = 1;
  *VAR_5 = "Temporary client timeout\n";
 }

 return VAR_6;
}
