
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct extended_perms_decision {scalar_t__ driver; TYPE_4__* dontaudit; int used; TYPE_2__* auditallow; TYPE_1__* allowed; } ;
struct TYPE_15__ {TYPE_6__* xperms; } ;
struct TYPE_16__ {TYPE_7__ u; } ;
struct TYPE_11__ {scalar_t__ specified; } ;
struct avtab_node {TYPE_8__ datum; TYPE_3__ key; } ;
struct TYPE_13__ {int * p; } ;
struct TYPE_14__ {scalar_t__ specified; scalar_t__ driver; TYPE_5__ perms; } ;
struct TYPE_12__ {int * p; } ;
struct TYPE_10__ {int * p; } ;
struct TYPE_9__ {int * p; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(struct extended_perms_decision *VAR_8,
     struct avtab_node *VAR_9)
{
 unsigned int VAR_10;

 if (VAR_9->datum.u.xperms->specified == VAR_4) {
  if (VAR_8->driver != VAR_9->datum.u.xperms->driver)
   return;
 } else if (VAR_9->datum.u.xperms->specified == VAR_3) {
  if (!FUNC_3(VAR_9->datum.u.xperms->perms.p,
     VAR_8->driver))
   return;
 } else {
  FUNC_1();
 }

 if (VAR_9->key.specified == VAR_0) {
  VAR_8->used |= VAR_5;
  if (VAR_9->datum.u.xperms->specified == VAR_3) {
   FUNC_2(VAR_8->allowed->p, 0xff,
     sizeof(VAR_8->allowed->p));
  }
  if (VAR_9->datum.u.xperms->specified == VAR_4) {
   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->allowed->p); VAR_10++)
    VAR_8->allowed->p[VAR_10] |=
     VAR_9->datum.u.xperms->perms.p[VAR_10];
  }
 } else if (VAR_9->key.specified == VAR_1) {
  VAR_8->used |= VAR_6;
  if (VAR_9->datum.u.xperms->specified == VAR_3) {
   FUNC_2(VAR_8->auditallow->p, 0xff,
     sizeof(VAR_8->auditallow->p));
  }
  if (VAR_9->datum.u.xperms->specified == VAR_4) {
   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->auditallow->p); VAR_10++)
    VAR_8->auditallow->p[VAR_10] |=
     VAR_9->datum.u.xperms->perms.p[VAR_10];
  }
 } else if (VAR_9->key.specified == VAR_2) {
  VAR_8->used |= VAR_7;
  if (VAR_9->datum.u.xperms->specified == VAR_3) {
   FUNC_2(VAR_8->dontaudit->p, 0xff,
     sizeof(VAR_8->dontaudit->p));
  }
  if (VAR_9->datum.u.xperms->specified == VAR_4) {
   for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->dontaudit->p); VAR_10++)
    VAR_8->dontaudit->p[VAR_10] |=
     VAR_9->datum.u.xperms->perms.p[VAR_10];
  }
 } else {
  FUNC_1();
 }
}
