
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int dsp_index; scalar_t__ dsp_msg_addr; int sz_message; scalar_t__ p2; scalar_t__ p1; } ;
struct TYPE_5__ {TYPE_1__ assert; } ;
struct TYPE_6__ {TYPE_2__ ax; } ;
struct hpi_response {scalar_t__ error; TYPE_3__ u; } ;
struct hpi_message {int dummy; } ;
struct hpi_adapter_obj {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct hpi_adapter_obj *VAR_2,
 struct hpi_message *VAR_3, struct hpi_response *VAR_4)
{


 if ((VAR_0 > 0) || (VAR_1 > 0)) {
  VAR_4->u.ax.assert.p1 =
   VAR_0 * 100 + VAR_1;
  VAR_4->u.ax.assert.p2 = 0;
  VAR_4->u.ax.assert.count = 1;
  VAR_4->u.ax.assert.dsp_index = -1;
  FUNC_1(VAR_4->u.ax.assert.sz_message, "PCI2040 error");
  VAR_4->u.ax.assert.dsp_msg_addr = 0;
  VAR_0 = 0;
  VAR_1 = 0;
  VAR_4->error = 0;
 } else

  FUNC_0(VAR_2, VAR_3, VAR_4);

 return;
}
