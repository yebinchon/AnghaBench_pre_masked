
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int auxiliary_data_available; int samples_transferred; int data_available; int buffer_size; int state; } ;
struct TYPE_6__ {TYPE_1__ stream_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ d; } ;
struct hpi_response {int error; TYPE_4__ u; } ;
struct hpi_message {int obj_index; int adapter_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*) ;

u16 FUNC_3(u32 VAR_3, u16 *VAR_4, u32 *VAR_5,
 u32 *VAR_6, u32 *VAR_7,
 u32 *VAR_8)
{
 struct hpi_message VAR_9;
 struct hpi_response VAR_10;
 FUNC_1(&VAR_9, &VAR_10, VAR_2,
  VAR_1);
 if (FUNC_0(VAR_3, &VAR_9.adapter_index, &VAR_9.obj_index))
  return VAR_0;

 FUNC_2(&VAR_9, &VAR_10);

 if (VAR_4)
  *VAR_4 = VAR_10.u.d.u.stream_info.state;
 if (VAR_5)
  *VAR_5 = VAR_10.u.d.u.stream_info.buffer_size;
 if (VAR_6)
  *VAR_6 = VAR_10.u.d.u.stream_info.data_available;
 if (VAR_7)
  *VAR_7 = VAR_10.u.d.u.stream_info.samples_transferred;
 if (VAR_8)
  *VAR_8 =
   VAR_10.u.d.u.stream_info.auxiliary_data_available;
 return VAR_10.error;
}
