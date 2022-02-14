
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ OMF_record_handler ;
typedef TYPE_2__ OMF_record ;



__attribute__((used)) static OMF_record_handler *FUNC_0(OMF_record_handler *VAR_0, ut8 VAR_1) {
 while (VAR_0) {
  if (((OMF_record *)VAR_0)->type == VAR_1) {
   return (VAR_0);
  }
  VAR_0 = VAR_0->next;
 }
 return ((void*)0);
}
