
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_9__ {TYPE_1__** sections; TYPE_3__* records; } ;
typedef TYPE_2__ r_bin_omf_obj ;
struct TYPE_11__ {TYPE_1__* content; } ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
struct TYPE_8__ {scalar_t__ size; scalar_t__ vaddr; } ;
typedef TYPE_3__ OMF_record_handler ;
typedef TYPE_4__ OMF_record ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_1(r_bin_omf_obj *VAR_1) {
 OMF_record_handler *VAR_2 = VAR_1->records;
 ut32 VAR_3 = 0;

 while ((VAR_2 = FUNC_0 (VAR_2, VAR_0))) {
  VAR_1->sections[VAR_3] = ((OMF_record *)VAR_2)->content;
  ((OMF_record *)VAR_2)->content = ((void*)0);

  if (!VAR_3) {
   VAR_1->sections[VAR_3]->vaddr = 0;
  } else {
   VAR_1->sections[VAR_3]->vaddr = VAR_1->sections[VAR_3 - 1]->vaddr +
           VAR_1->sections[VAR_3 - 1]->size;
  }
  VAR_3++;
  VAR_2 = VAR_2->next;
  }
}
