
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_6__ {TYPE_2__* records; } ;
typedef TYPE_1__ r_bin_omf_obj ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ OMF_record_handler ;
typedef TYPE_3__ OMF_record ;


 TYPE_2__* FUNC_0 (int const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(r_bin_omf_obj *VAR_0, const ut8 *VAR_1, ut64 VAR_2) {
 ut64 VAR_3 = 0;
 OMF_record_handler *VAR_4 = ((void*)0);
 OMF_record_handler *VAR_5 = ((void*)0);

 while (VAR_3 < VAR_2) {
  if (!(VAR_4 = FUNC_0 (VAR_1 + VAR_3, VAR_3, VAR_2 - VAR_3))) {
   return 0;
  }


  if (!VAR_5) {
   VAR_0->records = VAR_4;
   VAR_5 = VAR_0->records;
  } else {
   VAR_5->next = VAR_4;
   VAR_5 = VAR_5->next;
  }
  VAR_3 += 3 + ((OMF_record *)VAR_5)->size;
 }
 return 1;
}
