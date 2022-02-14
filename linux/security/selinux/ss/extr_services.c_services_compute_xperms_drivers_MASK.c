
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * p; } ;
struct extended_perms {int len; TYPE_2__ drivers; } ;
struct TYPE_12__ {int specified; } ;
struct TYPE_10__ {TYPE_3__* xperms; } ;
struct TYPE_11__ {TYPE_4__ u; } ;
struct avtab_node {TYPE_6__ key; TYPE_5__ datum; } ;
struct TYPE_7__ {int * p; } ;
struct TYPE_9__ {scalar_t__ specified; int driver; TYPE_1__ perms; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(
  struct extended_perms *VAR_3,
  struct avtab_node *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->datum.u.xperms->specified == VAR_1) {

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->drivers.p); VAR_5++)
   VAR_3->drivers.p[VAR_5] |= VAR_4->datum.u.xperms->perms.p[VAR_5];
 } else if (VAR_4->datum.u.xperms->specified == VAR_2) {

  FUNC_1(VAR_3->drivers.p,
     VAR_4->datum.u.xperms->driver);
 }


 if (VAR_4->key.specified & VAR_0)
  VAR_3->len = 1;
}
