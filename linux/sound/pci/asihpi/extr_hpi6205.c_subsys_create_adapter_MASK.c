
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {int adapter_index; int adapter_type; int data; } ;
struct TYPE_12__ {TYPE_5__ s; } ;
struct hpi_response {scalar_t__ error; TYPE_6__ u; scalar_t__ specific_error; } ;
struct TYPE_7__ {int * pci; } ;
struct TYPE_8__ {TYPE_1__ r; } ;
struct TYPE_9__ {TYPE_2__ resource; } ;
struct TYPE_10__ {TYPE_3__ s; } ;
struct hpi_message {TYPE_4__ u; } ;
struct hpi_hw_obj {int dummy; } ;
struct hpi_adapter_obj {int index; int type; int pci; int priv; } ;
typedef int ao ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct hpi_adapter_obj*,int *) ;
 int FUNC_2 (struct hpi_adapter_obj*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct hpi_adapter_obj*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hpi_message *VAR_6,
 struct hpi_response *VAR_7)
{

 struct hpi_adapter_obj VAR_8;
 u32 VAR_9;
 u16 VAR_10;

 FUNC_0(VAR_0, " subsys_create_adapter\n");

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 VAR_8.priv = FUNC_3(sizeof(struct hpi_hw_obj), VAR_2);
 if (!VAR_8.priv) {
  FUNC_0(VAR_1, "can't get mem for adapter object\n");
  VAR_7->error = VAR_5;
  return;
 }

 VAR_8.pci = *VAR_6->u.s.resource.r.pci;
 VAR_10 = FUNC_1(&VAR_8, &VAR_9);
 if (VAR_10) {
  FUNC_2(&VAR_8);
  if (VAR_10 >= VAR_3) {
   VAR_7->error = VAR_4;
   VAR_7->specific_error = VAR_10;
  } else {
   VAR_7->error = VAR_10;
  }
  VAR_7->u.s.data = VAR_9;
  return;
 }

 VAR_7->u.s.adapter_type = VAR_8.type;
 VAR_7->u.s.adapter_index = VAR_8.index;
 VAR_7->error = 0;
}
