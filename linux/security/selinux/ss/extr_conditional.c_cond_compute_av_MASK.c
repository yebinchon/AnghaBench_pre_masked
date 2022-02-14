
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct extended_perms {int dummy; } ;
struct TYPE_6__ {int specified; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
struct avtab_node {TYPE_3__ key; TYPE_2__ datum; } ;
struct avtab_key {int specified; } ;
struct avtab {int dummy; } ;
struct av_decision {int auditallow; int auditdeny; int allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct avtab_node* FUNC_0 (struct avtab*,struct avtab_key*) ;
 struct avtab_node* FUNC_1 (struct avtab_node*,int ) ;
 int FUNC_2 (struct extended_perms*,struct avtab_node*) ;

void FUNC_3(struct avtab *VAR_5, struct avtab_key *VAR_6,
  struct av_decision *VAR_7, struct extended_perms *VAR_8)
{
 struct avtab_node *VAR_9;

 if (!VAR_5 || !VAR_6 || !VAR_7)
  return;

 for (VAR_9 = FUNC_0(VAR_5, VAR_6); VAR_9;
    VAR_9 = FUNC_1(VAR_9, VAR_6->specified)) {
  if ((u16)(VAR_0|VAR_3) ==
      (VAR_9->key.specified & (VAR_0|VAR_3)))
   VAR_7->allowed |= VAR_9->datum.u.data;
  if ((u16)(VAR_2|VAR_3) ==
      (VAR_9->key.specified & (VAR_2|VAR_3)))





   VAR_7->auditdeny &= VAR_9->datum.u.data;
  if ((u16)(VAR_1|VAR_3) ==
      (VAR_9->key.specified & (VAR_1|VAR_3)))
   VAR_7->auditallow |= VAR_9->datum.u.data;
  if (VAR_8 && (VAR_9->key.specified & VAR_3) &&
    (VAR_9->key.specified & VAR_4))
   FUNC_2(VAR_8, VAR_9);
 }
}
