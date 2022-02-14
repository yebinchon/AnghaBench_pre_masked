
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_6__ {size_t length; TYPE_3__** objects; } ;
struct TYPE_8__ {scalar_t__ klass; scalar_t__ tag; scalar_t__ form; int length; int sector; TYPE_1__ list; } ;
struct TYPE_7__ {size_t length; int ** names; int ** oids; } ;
typedef TYPE_2__ RX509Name ;
typedef int RASN1String ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int **) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;

bool FUNC_4 (RX509Name *VAR_5, RASN1Object *VAR_6) {
 ut32 VAR_7;
 if (!VAR_5 || !VAR_6 || !VAR_6->list.length) {
  return 0;
 }
 if (VAR_6->klass == VAR_0 && VAR_6->tag == VAR_3) {
  VAR_5->length = VAR_6->list.length;
  VAR_5->names = (RASN1String **)FUNC_1 (VAR_5->length, sizeof (RASN1String *));
  if (!VAR_5->names) {
   VAR_5->length = 0;
   return 0;
  }
  VAR_5->oids = (RASN1String **)FUNC_1 (VAR_5->length, sizeof (RASN1String *));
  if (!VAR_5->oids) {
   VAR_5->length = 0;
   FUNC_0 (VAR_5->names);
   return 0;
  }
  for (VAR_7 = 0; VAR_7 < VAR_6->list.length; ++VAR_7) {
   RASN1Object *VAR_8 = VAR_6->list.objects[VAR_7];
   if (VAR_8 && VAR_8->klass == VAR_0 &&
    VAR_8->tag == VAR_4 &&
    VAR_8->form == VAR_1 &&
    VAR_8->list.length == 1) {
    VAR_8 = VAR_8->list.objects[0];
    if (VAR_8 && VAR_8->list.length > 1 &&
     VAR_8->klass == VAR_0 &&
     VAR_8->tag == VAR_3) {
     if (VAR_8->list.objects[0]->klass == VAR_0 &&
      VAR_8->list.objects[0]->tag == VAR_2) {
      VAR_5->oids[VAR_7] = FUNC_2 (VAR_8->list.objects[0]->sector, VAR_8->list.objects[0]->length);
     }
     RASN1Object *VAR_9 = VAR_8->list.objects[1];
     if (VAR_9 && VAR_9->klass == VAR_0) {
      VAR_5->names[VAR_7] = FUNC_3 (VAR_9->sector, VAR_9->length);
     }
    }
   }
  }
 }
 return 1;
}
