
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; TYPE_3__** objects; } ;
struct TYPE_8__ {scalar_t__ tag; scalar_t__* sector; int length; TYPE_1__ list; } ;
struct TYPE_7__ {int critical; int extnValue; int extnID; } ;
typedef TYPE_2__ RX509Extension ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*,int ) ;

bool FUNC_2 (RX509Extension *VAR_3, RASN1Object *VAR_4) {
 RASN1Object *VAR_5;
 if (!VAR_3 || !VAR_4 || VAR_4->list.length < 2) {
  return 0;
 }
 VAR_5 = VAR_4->list.objects[0];
 if (VAR_5 && VAR_5->tag == VAR_2) {
  VAR_3->extnID = FUNC_1 (VAR_5->sector, VAR_5->length);
  VAR_5 = VAR_4->list.objects[1];
  if (VAR_5->tag == VAR_0 && VAR_4->list.length > 2) {

   VAR_3->critical = VAR_5->sector[0] != 0;
   VAR_5 = VAR_4->list.objects[2];
  }
  if (VAR_5->tag == VAR_1) {
   VAR_3->extnValue = FUNC_0 (VAR_5->sector, VAR_5->length);
  }
 }
 return 1;
}
