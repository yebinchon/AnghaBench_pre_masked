
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nb_section; TYPE_2__** sections; TYPE_3__* records; } ;
typedef TYPE_1__ r_bin_omf_obj ;
struct TYPE_13__ {int seg_idx; struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_5__* content; } ;
struct TYPE_11__ {struct TYPE_11__* next; } ;
struct TYPE_10__ {TYPE_5__* data; } ;
typedef TYPE_2__ OMF_segment ;
typedef TYPE_3__ OMF_record_handler ;
typedef TYPE_4__ OMF_record ;
typedef TYPE_5__ OMF_data ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(r_bin_omf_obj *VAR_1) {
 OMF_record_handler *VAR_2 = VAR_1->records;
 OMF_data *VAR_3;

 while ((VAR_2 = FUNC_1 (VAR_2, VAR_0))) {
  if (((OMF_data *)((OMF_record *)VAR_2)->content)->seg_idx - 1 >= VAR_1->nb_section) {
   FUNC_0 ("Invalid Ledata record (bad segment index)\n");
   return 0;
  }
  OMF_segment *VAR_4 = VAR_1->sections[((OMF_data *)((OMF_record *)VAR_2)->content)->seg_idx - 1];
  if (VAR_4 && (VAR_3 = VAR_4->data)) {
   while (VAR_3->next) {
    VAR_3 = VAR_3->next;
   }
   VAR_3->next = ((OMF_record *)VAR_2)->content;
  } else {
   VAR_1->sections[((OMF_data *)((OMF_record *)VAR_2)->content)->seg_idx - 1]->data = ((OMF_record *)VAR_2)->content;
  }
  ((OMF_record *)VAR_2)->content = ((void*)0);
  VAR_2 = VAR_2->next;
 }
 return 1;
}
