
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* records; } ;
typedef TYPE_1__ r_bin_omf_obj ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__* content; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ OMF_record_handler ;
typedef TYPE_3__ OMF_record ;
typedef int OMF_multi_datas ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(r_bin_omf_obj *VAR_2) {
 OMF_record_handler *VAR_3 = ((void*)0);
 OMF_record_handler *VAR_4 = VAR_2->records;

 while (VAR_4) {
  if (((OMF_record *)VAR_4)->type == VAR_0) {
   FUNC_1((OMF_multi_datas *)((OMF_record *)VAR_4)->content);
  } else if (((OMF_record *)VAR_4)->type == VAR_1) {
   FUNC_2((OMF_multi_datas *)((OMF_record *)VAR_4)->content);
  } else {
   FUNC_0 (((OMF_record *)VAR_4)->content);
  }
  VAR_3 = VAR_4->next;
  FUNC_0(VAR_4);
  VAR_4 = VAR_3;
 }
 VAR_2->records = ((void*)0);
}
