
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_13__ {int adapter_index; int adapter_type; scalar_t__ data; } ;
struct TYPE_14__ {TYPE_6__ s; } ;
struct hpi_response {scalar_t__ error; TYPE_7__ u; scalar_t__ specific_error; } ;
struct TYPE_8__ {int * pci; } ;
struct TYPE_9__ {TYPE_1__ r; } ;
struct TYPE_10__ {TYPE_2__ resource; } ;
struct TYPE_11__ {TYPE_3__ s; } ;
struct hpi_message {TYPE_4__ u; } ;
struct hpi_hw_obj {TYPE_5__* ado; } ;
struct hpi_adapter_obj {int index; int type; struct hpi_hw_obj* priv; int pci; } ;
typedef int ao ;
struct TYPE_12__ {struct hpi_adapter_obj* pa_parent_adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,scalar_t__*) ;
 int FUNC_2 (struct hpi_adapter_obj*) ;
 struct hpi_adapter_obj* FUNC_3 (int ) ;
 struct hpi_hw_obj* FUNC_4 (int,int ) ;
 int FUNC_5 (struct hpi_adapter_obj*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct hpi_message *VAR_8,
 struct hpi_response *VAR_9)
{

 struct hpi_adapter_obj VAR_10;
 struct hpi_adapter_obj *VAR_11;
 u32 VAR_12;
 u16 VAR_13 = 0;
 u32 VAR_14 = 0;

 FUNC_0(VAR_7, "subsys_create_adapter\n");

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.priv = FUNC_4(sizeof(struct hpi_hw_obj), VAR_1);
 if (!VAR_10.priv) {
  FUNC_0(VAR_0, "can't get mem for adapter object\n");
  VAR_9->error = VAR_5;
  return;
 }


 VAR_10.pci = *VAR_8->u.s.resource.r.pci;

 VAR_13 = FUNC_1(&VAR_10, &VAR_12);
 if (VAR_13) {
  FUNC_2(&VAR_10);
  if (VAR_13 >= VAR_2) {
   VAR_9->error = VAR_4;
   VAR_9->specific_error = VAR_13;
  } else {
   VAR_9->error = VAR_13;
  }

  VAR_9->u.s.data = VAR_12;
  return;
 }

 VAR_11 = FUNC_3(VAR_10.index);
 if (!VAR_11) {

  FUNC_0(VAR_0, "lost adapter after boot\n");
  VAR_9->error = VAR_3;
  return;
 }

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  struct hpi_hw_obj *VAR_15 = VAR_11->priv;
  VAR_15->ado[VAR_14].pa_parent_adapter = VAR_11;
 }

 VAR_9->u.s.adapter_type = VAR_10.type;
 VAR_9->u.s.adapter_index = VAR_10.index;
 VAR_9->error = 0;
}
