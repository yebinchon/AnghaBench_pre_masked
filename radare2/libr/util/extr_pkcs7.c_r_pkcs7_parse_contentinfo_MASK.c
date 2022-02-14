
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; TYPE_3__** objects; } ;
struct TYPE_8__ {int length; int sector; TYPE_1__ list; } ;
struct TYPE_7__ {int content; int contentType; } ;
typedef TYPE_2__ RPKCS7ContentInfo ;
typedef TYPE_3__ RASN1Object ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(RPKCS7ContentInfo *VAR_0, RASN1Object *VAR_1) {
 if (!VAR_0 || !VAR_1 || VAR_1->list.length < 1 || !VAR_1->list.objects[0]) {
  return 0;
 }
 VAR_0->contentType = FUNC_1 (VAR_1->list.objects[0]->sector, VAR_1->list.objects[0]->length);
 if (VAR_1->list.length > 1) {
  RASN1Object *VAR_2 = VAR_1->list.objects[1];
  if (VAR_2) {
   VAR_0->content = FUNC_0 (VAR_2->sector, VAR_2->length);
  }
 }
 return 1;
}
