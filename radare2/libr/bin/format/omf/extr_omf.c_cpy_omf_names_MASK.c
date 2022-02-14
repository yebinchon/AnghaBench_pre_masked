
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ** names; TYPE_2__* records; } ;
typedef TYPE_1__ r_bin_omf_obj ;
struct TYPE_11__ {int nb_elem; scalar_t__ elems; } ;
struct TYPE_10__ {scalar_t__ content; } ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ OMF_record_handler ;
typedef TYPE_3__ OMF_record ;
typedef TYPE_4__ OMF_multi_datas ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 int * FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(r_bin_omf_obj *VAR_1) {
 OMF_record_handler *VAR_2 = VAR_1->records;
 OMF_multi_datas *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 while ((VAR_2 = FUNC_0(VAR_2, VAR_0))) {
  VAR_3 = (OMF_multi_datas *)((OMF_record *)VAR_2)->content;

  VAR_5 = -1;
  while (++VAR_5 < VAR_3->nb_elem) {
   if (!((char **)VAR_3->elems)[VAR_5]) {
    VAR_1->names[VAR_4++] = ((void*)0);
   } else if (!(VAR_1->names[VAR_4++] = FUNC_1(((char **)VAR_3->elems)[VAR_5]))) {
    return 0;
   }
  }
  VAR_2 = VAR_2->next;
 }
 return 1;
}
