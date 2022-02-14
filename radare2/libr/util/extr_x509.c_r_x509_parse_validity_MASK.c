
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; TYPE_3__** objects; } ;
struct TYPE_8__ {scalar_t__ klass; scalar_t__ tag; scalar_t__ form; int length; int sector; TYPE_1__ list; } ;
struct TYPE_7__ {void* notAfter; void* notBefore; } ;
typedef TYPE_2__ RX509Validity ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(RX509Validity *VAR_6, RASN1Object *VAR_7) {
 RASN1Object *VAR_8;
 if (!VAR_6 || !VAR_7 || VAR_7->list.length != 2) {
  return 0;
 }
 if (VAR_7->klass == VAR_0 &&
  VAR_7->tag == VAR_4 &&
  VAR_7->form == VAR_1) {
  VAR_8 = VAR_7->list.objects[0];
  if (VAR_8->klass == VAR_0 && VAR_8->form == VAR_2) {
   if (VAR_8->tag == VAR_5) {
    VAR_6->notBefore = FUNC_1 (VAR_8->sector, VAR_8->length);
   } else if (VAR_8->tag == VAR_3) {
    VAR_6->notBefore = FUNC_0 (VAR_8->sector, VAR_8->length);
   }
  }
  VAR_8 = VAR_7->list.objects[1];
  if (VAR_8->klass == VAR_0 && VAR_8->form == VAR_2) {
   if (VAR_8->tag == VAR_5) {
    VAR_6->notAfter = FUNC_1 (VAR_8->sector, VAR_8->length);
   } else if (VAR_8->tag == VAR_3) {
    VAR_6->notAfter = FUNC_0 (VAR_8->sector, VAR_8->length);
   }
  }
 }
 return 1;
}
