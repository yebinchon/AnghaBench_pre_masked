
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int length; TYPE_1__** objects; } ;
struct TYPE_10__ {TYPE_2__ list; } ;
struct TYPE_9__ {int * parameters; int algorithm; } ;
struct TYPE_7__ {scalar_t__ klass; scalar_t__ tag; int length; int sector; } ;
typedef TYPE_3__ RX509AlgorithmIdentifier ;
typedef TYPE_4__ RASN1Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

bool FUNC_1 (RX509AlgorithmIdentifier *VAR_2, RASN1Object *VAR_3) {
 if (!VAR_2 || !VAR_3 || VAR_3->list.length < 1 || !VAR_3->list.objects) {
  return 0;
 }
 if (VAR_3->list.objects[0] && VAR_3->list.objects[0]->klass == VAR_0 && VAR_3->list.objects[0]->tag == VAR_1) {
  VAR_2->algorithm = FUNC_0 (VAR_3->list.objects[0]->sector, VAR_3->list.objects[0]->length);
 }
 VAR_2->parameters = ((void*)0);

 return 1;
}
