
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {struct hpi_hostbuffer_status* p_status; int * p_buffer; } ;
struct TYPE_6__ {TYPE_1__ hostbuffer_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_response {scalar_t__ error; TYPE_4__ u; } ;
struct hpi_message {int obj_index; int adapter_index; } ;
struct hpi_hostbuffer_status {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3, u8 **VAR_4,
 struct hpi_hostbuffer_status **VAR_5)
{
 struct hpi_message VAR_6;
 struct hpi_response VAR_7;

 FUNC_1(&VAR_6, &VAR_7, VAR_2,
  VAR_1);
 if (FUNC_0(VAR_3, &VAR_6.adapter_index, &VAR_6.obj_index))
  return VAR_0;
 FUNC_2(&VAR_6, &VAR_7);

 if (VAR_7.error == 0) {
  if (VAR_4)
   *VAR_4 = VAR_7.u.d.u.hostbuffer_info.p_buffer;
  if (VAR_5)
   *VAR_5 = VAR_7.u.d.u.hostbuffer_info.p_status;
 }
 return VAR_7.error;
}
